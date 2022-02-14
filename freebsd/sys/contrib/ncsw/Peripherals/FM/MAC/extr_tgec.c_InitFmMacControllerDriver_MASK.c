
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_FM_MAC_MII_ReadPhyReg; int f_FM_MAC_MII_WritePhyReg; int f_FM_MAC_GetMaxFrameLength; int f_FM_MAC_GetVersion; int f_FM_MAC_GetId; int f_FM_MAC_RemovelExactMatchMacAddr; int f_FM_MAC_AddExactMatchMacAddr; int f_FM_MAC_RemoveHashMacAddr; int f_FM_MAC_AddHashMacAddr; int f_FM_MAC_ModifyMacAddr; int f_FM_MAC_GetStatistics; int f_FM_MAC_ResetCounters; int f_FM_MAC_SetRxIgnorePauseFrames; int f_FM_MAC_SetTxPauseFrames; int f_FM_MAC_SetTxAutoPauseFrames; int * f_FM_MAC_Resume; int f_FM_MAC_Disable; int f_FM_MAC_Enable; int * f_FM_MAC_RestartAutoneg; int * f_FM_MAC_SetWakeOnLan; int * f_FM_MAC_AdjustLink; int f_FM_MAC_SetPromiscuous; int f_FM_MAC_Disable1588TimeStamp; int f_FM_MAC_Enable1588TimeStamp; int f_FM_MAC_SetException; int f_FM_MAC_ConfigSkipFman11Workaround; int * f_FM_MAC_ConfigResetOnInit; int f_FM_MAC_ConfigException; int f_FM_MAC_ConfigLengthCheck; int * f_FM_MAC_ConfigHalfDuplex; int * f_FM_MAC_ConfigPadAndCrc; int f_FM_MAC_ConfigWan; int f_FM_MAC_ConfigMaxFrameLength; int f_FM_MAC_ConfigLoopback; int * f_FM_MAC_SetStatistics; int f_FM_MAC_Free; int f_FM_MAC_Init; } ;
typedef TYPE_1__ t_FmMacControllerDriver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void FUNC_0(t_FmMacControllerDriver *VAR_29)
{
    VAR_29->f_FM_MAC_Init = VAR_21;
    VAR_29->f_FM_MAC_Free = VAR_16;

    VAR_29->f_FM_MAC_SetStatistics = ((void*)0);
    VAR_29->f_FM_MAC_ConfigLoopback = VAR_6;
    VAR_29->f_FM_MAC_ConfigMaxFrameLength = VAR_7;

    VAR_29->f_FM_MAC_ConfigWan = VAR_9;

    VAR_29->f_FM_MAC_ConfigPadAndCrc = ((void*)0);
    VAR_29->f_FM_MAC_ConfigHalfDuplex = ((void*)0);
    VAR_29->f_FM_MAC_ConfigLengthCheck = VAR_5;
    VAR_29->f_FM_MAC_ConfigException = VAR_4;
    VAR_29->f_FM_MAC_ConfigResetOnInit = ((void*)0);





    VAR_29->f_FM_MAC_SetException = VAR_25;

    VAR_29->f_FM_MAC_Enable1588TimeStamp = VAR_15;
    VAR_29->f_FM_MAC_Disable1588TimeStamp = VAR_13;

    VAR_29->f_FM_MAC_SetPromiscuous = VAR_26;
    VAR_29->f_FM_MAC_AdjustLink = ((void*)0);
    VAR_29->f_FM_MAC_SetWakeOnLan = ((void*)0);
    VAR_29->f_FM_MAC_RestartAutoneg = ((void*)0);

    VAR_29->f_FM_MAC_Enable = VAR_14;
    VAR_29->f_FM_MAC_Disable = VAR_12;
    VAR_29->f_FM_MAC_Resume = ((void*)0);

    VAR_29->f_FM_MAC_SetTxAutoPauseFrames = VAR_28;
    VAR_29->f_FM_MAC_SetTxPauseFrames = VAR_27;
    VAR_29->f_FM_MAC_SetRxIgnorePauseFrames = VAR_24;

    VAR_29->f_FM_MAC_ResetCounters = VAR_23;
    VAR_29->f_FM_MAC_GetStatistics = VAR_19;

    VAR_29->f_FM_MAC_ModifyMacAddr = VAR_22;
    VAR_29->f_FM_MAC_AddHashMacAddr = VAR_3;
    VAR_29->f_FM_MAC_RemoveHashMacAddr = VAR_11;
    VAR_29->f_FM_MAC_AddExactMatchMacAddr = VAR_2;
    VAR_29->f_FM_MAC_RemovelExactMatchMacAddr = VAR_10;
    VAR_29->f_FM_MAC_GetId = VAR_17;
    VAR_29->f_FM_MAC_GetVersion = VAR_20;
    VAR_29->f_FM_MAC_GetMaxFrameLength = VAR_18;

    VAR_29->f_FM_MAC_MII_WritePhyReg = VAR_1;
    VAR_29->f_FM_MAC_MII_ReadPhyReg = VAR_0;
}
