﻿#include <iostream>

#include "GameDurak.h"
#include "AdditionalDefinitions.h"

using namespace NGameDurak;

int main()
{
    CGameDurak game;
    const size_t numberOfHumanPlayers = 1;
    const size_t numberOfAIPlayers = 1;

    CDefinition::EResult res = game.create(numberOfHumanPlayers, numberOfAIPlayers);
    if (res != CDefinition::EResult::OK)
    {
        std::cout << "Error! Code " << res << ".\n";
    }

    game.start();

    return 0;
}