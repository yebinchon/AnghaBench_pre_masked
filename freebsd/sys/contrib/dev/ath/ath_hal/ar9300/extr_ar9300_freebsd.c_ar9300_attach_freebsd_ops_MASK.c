
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int ah_divLnaConfSet; int ah_divLnaConfGet; int ah_btMciDetach; int ah_btMciState; int ah_btMciGetInterrupt; int ah_btMciSendMessage; int ah_btMciSetup; int ah_btCoexEnable; int ah_btCoexDisable; int ah_btCoexSetWeights; int ah_btCoexSetParameter; int ah_btCoexSetBmissThresh; int ah_btCoexSetQcuThresh; int ah_btCoexSetConfig; int ah_btCoexSetInfo; int ah_setChainMasks; int ah_set11nMac2040; int ah_set11nBurstDuration; int ah_clr11nAggr; int ah_set11nAggrLast; int ah_set11nAggrMiddle; int ah_set11nAggrFirst; int ah_set11nTxDesc; int ah_set11nRateScenario; int ah_setupLastTxDesc; int ah_setupFirstTxDesc; int ah_chainTxDesc; int ah_setInterrupts; int ah_getInterrupts; int ah_getPendingInterrupts; int ah_isInterruptPending; int ah_getNextTBTT; int ah_setStationBeaconTimers; int ah_setBeaconTimers; int ah_beaconInit; int ah_getPowerMode; int ah_setPowerMode; int ah_setKeyCacheEntryMac; int ah_setKeyCacheEntry; int ah_isKeyCacheEntryValid; int ah_resetKeyCacheEntry; int ah_getKeyCacheSize; int ah_spectralIsActive; int ah_spectralIsEnabled; int ah_spectralStop; int ah_spectralStart; int ah_spectralGetConfig; int ah_spectralConfigure; int ah_setDfsCacTxQuiet; int ah_get11nExtBusy; int ah_isFastClockEnabled; int ah_procRadarEvent; int ah_getDfsDefaultThresh; int ah_getDfsThresh; int ah_enableDfs; int ah_getMibCycleCounts; int ah_setQuiet; int ah_getCTSTimeout; int ah_setAckTimeout; int ah_getAckTimeout; int ah_getSlotTime; int ah_setSlotTime; int ah_setAntennaSwitch; int ah_getAntennaSwitch; int ah_setDefAntenna; int ah_getDefAntenna; int ah_getRfGain; int ah_detectCardPresent; int ah_setTsf64; int ah_resetTsf; int ah_getTsf64; int ah_getTsf32; int ah_gpioSetIntr; int ah_gpioSet; int ah_gpioGet; int ah_gpioCfgOutput; int ah_gpioCfgInput; int ah_writeAssocid; int ah_setLedState; int ah_setRegulatoryDomain; int ah_setBssIdMask; int ah_getBssIdMask; int ah_setMacAddress; int ah_getMacAddress; int ah_getDiagState; int ah_setCapability; int ah_getCapability; int ah_procMibEvent; int ah_aniPoll; int ah_rxMonitor; int ah_procRxDesc; int ah_setRxFilter; int ah_getRxFilter; int ah_clrMulticastFilterIndex; int ah_setMulticastFilterIndex; int ah_setMulticastFilter; int ah_stopPcuReceive; int ah_startPcuReceive; int ah_stopDmaReceive; int ah_enableReceive; int ah_setRxDP; int ah_getRxDP; int ah_updateTxTrigLevel; int ah_getTxRawTxDesc; int ah_setupTxStatusRing; int ah_getTxDescLinkPtr; int ah_getTxDescLink; int ah_setTxDescLink; int ah_getTxCompletionRates; int ah_getTxIntrQueue; int ah_procTxDesc; int ah_fillTxDesc; int ah_setupXTxDesc; int ah_setupTxDesc; int ah_stopTxDma; int ah_startTxDma; int ah_numTxPending; int ah_setTxDP; int ah_getTxDP; int ah_resetTxQueue; int ah_releaseTxQueue; int ah_getTxQueueProps; int ah_setTxQueueProps; int ah_setupTxQueue; int ah_getChanNoise; int ah_setTxPowerLimit; int ah_resetCalValid; int ah_perCalibrationN; int ah_setPCUConfig; int ah_configPCIE; int ah_disable; int ah_phyDisable; int ah_reset; int ah_getRateTable; int ah_detach; } ;
struct TYPE_2__ {int ah_eepromGet; void* ah_eepromRead; int ah_getChannelEdges; int ah_getWirelessModes; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
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
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int VAR_132 ;
 int VAR_133 ;
 int VAR_134 ;
 int VAR_135 ;
 int VAR_136 ;
 int VAR_137 ;
 int VAR_138 ;
 int VAR_139 ;
 int VAR_140 ;
 int VAR_141 ;

void
FUNC_3(struct ath_hal *VAR_142)
{


 VAR_142->ah_detach = VAR_20;
 VAR_142->ah_getRateTable = VAR_62;


 VAR_142->ah_reset = VAR_99;
 VAR_142->ah_phyDisable = VAR_94;
 VAR_142->ah_disable = VAR_22;
 VAR_142->ah_configPCIE = VAR_18;

 VAR_142->ah_setPCUConfig = VAR_120;

 VAR_142->ah_perCalibrationN = VAR_93;
 VAR_142->ah_resetCalValid = VAR_98;
 VAR_142->ah_setTxPowerLimit = VAR_40;
 VAR_142->ah_getChanNoise = VAR_141;


 VAR_142->ah_setupTxQueue = VAR_130;
 VAR_142->ah_setTxQueueProps = VAR_129;
 VAR_142->ah_getTxQueueProps = VAR_72;
 VAR_142->ah_releaseTxQueue = VAR_97;
 VAR_142->ah_resetTxQueue = VAR_102;
 VAR_142->ah_getTxDP = VAR_70;
 VAR_142->ah_setTxDP = VAR_128;
 VAR_142->ah_numTxPending = VAR_92;
 VAR_142->ah_startTxDma = VAR_134;
 VAR_142->ah_stopTxDma = VAR_138;
 VAR_142->ah_setupTxDesc = VAR_44;
 VAR_142->ah_setupXTxDesc = VAR_45;
 VAR_142->ah_fillTxDesc = VAR_29;
 VAR_142->ah_procTxDesc = VAR_36;
 VAR_142->ah_getTxIntrQueue = VAR_71;

 VAR_142->ah_getTxCompletionRates = VAR_34;
 VAR_142->ah_setTxDescLink = VAR_113;
 VAR_142->ah_getTxDescLink = VAR_32;
 VAR_142->ah_getTxDescLinkPtr = VAR_53;
 VAR_142->ah_setupTxStatusRing = VAR_131;
 VAR_142->ah_getTxRawTxDesc = VAR_63;
 VAR_142->ah_updateTxTrigLevel = VAR_139;


 VAR_142->ah_getRxDP = VAR_65;
 VAR_142->ah_setRxDP = VAR_124;
 VAR_142->ah_enableReceive = VAR_26;
 VAR_142->ah_stopDmaReceive = VAR_135;
 VAR_142->ah_startPcuReceive = VAR_132;
 VAR_142->ah_stopPcuReceive = VAR_136;
 VAR_142->ah_setMulticastFilter = VAR_119;
 VAR_142->ah_setMulticastFilterIndex = VAR_3;
 VAR_142->ah_clrMulticastFilterIndex = VAR_0;
 VAR_142->ah_getRxFilter = VAR_66;
 VAR_142->ah_setRxFilter = VAR_125;

 VAR_142->ah_procRxDesc = VAR_95;
 VAR_142->ah_rxMonitor = VAR_5;
 VAR_142->ah_aniPoll = VAR_4;
 VAR_142->ah_procMibEvent = VAR_96;


 VAR_142->ah_getCapability = VAR_49;
 VAR_142->ah_setCapability = VAR_111;
 VAR_142->ah_getDiagState = VAR_55;
 VAR_142->ah_getMacAddress = VAR_58;
 VAR_142->ah_setMacAddress = VAR_118;
 VAR_142->ah_getBssIdMask = VAR_48;
 VAR_142->ah_setBssIdMask = VAR_109;
 VAR_142->ah_setRegulatoryDomain = VAR_123;
 VAR_142->ah_setLedState = VAR_117;
 VAR_142->ah_writeAssocid = VAR_140;
 VAR_142->ah_gpioCfgInput = VAR_74;
 VAR_142->ah_gpioCfgOutput = VAR_75;
 VAR_142->ah_gpioGet = VAR_76;
 VAR_142->ah_gpioSet = VAR_77;
 VAR_142->ah_gpioSetIntr = VAR_78;


 VAR_142->ah_getTsf32 = VAR_68;
 VAR_142->ah_getTsf64 = VAR_69;
 VAR_142->ah_resetTsf = VAR_101;
 VAR_142->ah_setTsf64 = VAR_39;
 VAR_142->ah_detectCardPresent = VAR_21;

 VAR_142->ah_getRfGain = VAR_64;
 VAR_142->ah_getDefAntenna = VAR_51;
 VAR_142->ah_setDefAntenna = VAR_112;
 VAR_142->ah_getAntennaSwitch = VAR_30;
 VAR_142->ah_setAntennaSwitch = VAR_38;


 VAR_142->ah_setSlotTime = VAR_126;
 VAR_142->ah_getSlotTime = VAR_1;
 VAR_142->ah_getAckTimeout = VAR_47;
 VAR_142->ah_setAckTimeout = VAR_108;


 VAR_142->ah_getCTSTimeout = VAR_31;


 VAR_142->ah_setQuiet = VAR_122;
 VAR_142->ah_getMibCycleCounts = VAR_33;


 VAR_142->ah_enableDfs = VAR_25;
 VAR_142->ah_getDfsThresh = VAR_54;
 VAR_142->ah_getDfsDefaultThresh = VAR_52;
 VAR_142->ah_procRadarEvent = VAR_35;
 VAR_142->ah_isFastClockEnabled = VAR_79;
 VAR_142->ah_get11nExtBusy = VAR_46;
 VAR_142->ah_setDfsCacTxQuiet = VAR_16;


 VAR_142->ah_spectralConfigure = VAR_19;
 VAR_142->ah_spectralGetConfig = VAR_67;
 VAR_142->ah_spectralStart = VAR_133;
 VAR_142->ah_spectralStop = VAR_137;
 VAR_142->ah_spectralIsEnabled = VAR_83;
 VAR_142->ah_spectralIsActive = VAR_82;


 VAR_142->ah_getKeyCacheSize = VAR_57;
 VAR_142->ah_resetKeyCacheEntry = VAR_100;
 VAR_142->ah_isKeyCacheEntryValid = VAR_81;
 VAR_142->ah_setKeyCacheEntry = VAR_115;
 VAR_142->ah_setKeyCacheEntryMac = VAR_116;


 VAR_142->ah_setPowerMode = VAR_121;
 VAR_142->ah_getPowerMode = VAR_61;



 VAR_142->ah_beaconInit = VAR_27;
 VAR_142->ah_setBeaconTimers = VAR_8;
 VAR_142->ah_setStationBeaconTimers = VAR_127;

 VAR_142->ah_getNextTBTT = VAR_59;


 VAR_142->ah_isInterruptPending = VAR_80;
 VAR_142->ah_getPendingInterrupts = VAR_60;
 VAR_142->ah_getInterrupts = VAR_56;
 VAR_142->ah_setInterrupts = VAR_114;



 FUNC_0(VAR_142)->ah_eepromRead = VAR_24;

 FUNC_0(VAR_142)->ah_getWirelessModes = VAR_73;
 FUNC_0(VAR_142)->ah_getChannelEdges = VAR_50;

 FUNC_0(VAR_142)->ah_eepromRead = VAR_24;




 FUNC_0(VAR_142)->ah_eepromGet = VAR_23;





 VAR_142->ah_chainTxDesc = VAR_28;
 VAR_142->ah_setupFirstTxDesc= VAR_42;
 VAR_142->ah_setupLastTxDesc = VAR_43;
 VAR_142->ah_set11nRateScenario = VAR_37;
 VAR_142->ah_set11nTxDesc = VAR_41;
 VAR_142->ah_set11nAggrFirst = VAR_103;
 VAR_142->ah_set11nAggrMiddle = VAR_105;
 VAR_142->ah_set11nAggrLast = VAR_104;
 VAR_142->ah_clr11nAggr = VAR_17;
 VAR_142->ah_set11nBurstDuration = VAR_106;

 VAR_142->ah_set11nMac2040 = VAR_107;
 VAR_142->ah_setChainMasks = VAR_2;




 VAR_142->ah_btCoexSetInfo = VAR_110;
 VAR_142->ah_btCoexSetConfig = VAR_9;
 VAR_142->ah_btCoexSetQcuThresh = VAR_13;
 VAR_142->ah_btCoexSetWeights = VAR_14;
 VAR_142->ah_btCoexSetBmissThresh = VAR_15;
 VAR_142->ah_btCoexSetParameter = VAR_12;
 VAR_142->ah_btCoexDisable = VAR_10;
 VAR_142->ah_btCoexEnable = VAR_11;


 if (FUNC_2(VAR_142) || FUNC_1(VAR_142)) {
  VAR_142->ah_btCoexSetWeights = VAR_86;
  VAR_142->ah_btCoexDisable = VAR_84;
  VAR_142->ah_btCoexEnable = VAR_85;
 }
 VAR_142->ah_btMciSetup = VAR_90;
 VAR_142->ah_btMciSendMessage = VAR_89;
 VAR_142->ah_btMciGetInterrupt = VAR_88;
 VAR_142->ah_btMciState = VAR_91;
 VAR_142->ah_btMciDetach = VAR_87;


 VAR_142->ah_divLnaConfGet = VAR_6;
 VAR_142->ah_divLnaConfSet = VAR_7;
}
