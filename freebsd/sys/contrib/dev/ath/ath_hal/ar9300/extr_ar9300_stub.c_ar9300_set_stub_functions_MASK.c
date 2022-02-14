
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int ah_setInterrupts; int ah_getInterrupts; int ah_getPendingInterrupts; int ah_isInterruptPending; int ah_getNextTBTT; int ah_resetStationBeaconTimers; int ah_setStationBeaconTimers; int ah_beaconInit; int ah_setBeaconTimers; int ah_getPowerMode; int ah_setPowerMode; int ah_setKeyCacheEntryMac; int ah_setKeyCacheEntry; int ah_isKeyCacheEntryValid; int ah_resetKeyCacheEntry; int ah_getKeyCacheSize; int ah_get11nExtBusy; int ah_isFastClockEnabled; int ah_procRadarEvent; int ah_getDfsThresh; int ah_enableDfs; int ah_getMibCycleCounts; int ah_setQuiet; int ah_setCoverageClass; int ah_setDecompMask; int ah_getCTSTimeout; int ah_setCTSTimeout; int ah_getAckCTSRate; int ah_setAckCTSRate; int ah_getAckTimeout; int ah_setAckTimeout; int ah_getSlotTime; int ah_setSlotTime; int ah_getSifsTime; int ah_setSifsTime; int ah_setAntennaSwitch; int ah_getAntennaSwitch; int ah_setDefAntenna; int ah_getDefAntenna; int ah_getRfGain; int ah_updateMibCounters; int ah_detectCardPresent; int ah_resetTsf; int ah_getTsf64; int ah_getTsf32; int ah_gpioSetIntr; int ah_gpioSet; int ah_gpioGet; int ah_gpioCfgOutput; int ah_gpioCfgInput; int ah_writeAssocid; int ah_setLedState; int ah_setRegulatoryDomain; int ah_setBssIdMask; int ah_getBssIdMask; int ah_setMacAddress; int ah_getMacAddress; int ah_getDiagState; int ah_setCapability; int ah_getCapability; int ah_procMibEvent; int ah_aniPoll; int ah_rxMonitor; int ah_procRxDesc; int ah_setupRxDesc; int ah_setRxFilter; int ah_getRxFilter; int ah_clrMulticastFilterIndex; int ah_setMulticastFilterIndex; int ah_setMulticastFilter; int ah_stopPcuReceive; int ah_startPcuReceive; int ah_stopDmaReceive; int ah_enableReceive; int ah_setRxDP; int ah_getRxDP; int ah_getTxCompletionRates; int ah_reqTxIntrDesc; int ah_getTxIntrQueue; int ah_procTxDesc; int ah_fillTxDesc; int ah_setupXTxDesc; int ah_setupTxDesc; int ah_stopTxDma; int ah_startTxDma; int ah_numTxPending; int ah_setTxDP; int ah_getTxDP; int ah_resetTxQueue; int ah_releaseTxQueue; int ah_getTxQueueProps; int ah_setTxQueueProps; int ah_setupTxQueue; int ah_updateTxTrigLevel; int ah_getChanNoise; int ah_setTxPowerLimit; int ah_resetCalValid; int ah_perCalibrationN; int ah_perCalibration; int ah_setPCUConfig; int ah_disablePCIE; int ah_configPCIE; int ah_disable; int ah_phyDisable; int ah_reset; int ah_getRateTable; } ;
struct TYPE_2__ {int ah_getChipPowerLimits; int ah_eepromWrite; int ah_eepromRead; int ah_getWirelessModes; int ah_getChannelEdges; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
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

void
FUNC_1(struct ath_hal *VAR_111)
{



 VAR_111->ah_getRateTable = VAR_31;



 VAR_111->ah_reset = VAR_62;
 VAR_111->ah_phyDisable = VAR_56;
 VAR_111->ah_disable = VAR_5;
 VAR_111->ah_configPCIE = VAR_3;
 VAR_111->ah_disablePCIE = VAR_6;
 VAR_111->ah_setPCUConfig = VAR_86;
 VAR_111->ah_perCalibration = VAR_54;
 VAR_111->ah_perCalibrationN = VAR_55;
 VAR_111->ah_resetCalValid = VAR_63;
 VAR_111->ah_setTxPowerLimit = VAR_96;
 VAR_111->ah_getChanNoise = VAR_110;


 VAR_111->ah_updateTxTrigLevel = VAR_108;
 VAR_111->ah_setupTxQueue = VAR_100;
 VAR_111->ah_setTxQueueProps = VAR_97;
 VAR_111->ah_getTxQueueProps = VAR_42;
 VAR_111->ah_releaseTxQueue = VAR_61;
 VAR_111->ah_resetTxQueue = VAR_67;
 VAR_111->ah_getTxDP = VAR_40;
 VAR_111->ah_setTxDP = VAR_95;
 VAR_111->ah_numTxPending = VAR_53;
 VAR_111->ah_startTxDma = VAR_103;
 VAR_111->ah_stopTxDma = VAR_106;
 VAR_111->ah_setupTxDesc = VAR_99;
 VAR_111->ah_setupXTxDesc = VAR_101;
 VAR_111->ah_fillTxDesc = VAR_11;
 VAR_111->ah_procTxDesc = VAR_58;
 VAR_111->ah_getTxIntrQueue = VAR_41;
 VAR_111->ah_reqTxIntrDesc = VAR_49;
 VAR_111->ah_getTxCompletionRates = VAR_39;


 VAR_111->ah_getRxDP = VAR_33;
 VAR_111->ah_setRxDP = VAR_90;
 VAR_111->ah_enableReceive = VAR_10;
 VAR_111->ah_stopDmaReceive = VAR_104;
 VAR_111->ah_startPcuReceive = VAR_102;
 VAR_111->ah_stopPcuReceive = VAR_105;
 VAR_111->ah_setMulticastFilter = VAR_84;
 VAR_111->ah_setMulticastFilterIndex = VAR_85;
 VAR_111->ah_clrMulticastFilterIndex = VAR_2;
 VAR_111->ah_getRxFilter = VAR_34;
 VAR_111->ah_setRxFilter = VAR_91;
 VAR_111->ah_setupRxDesc = VAR_98;
 VAR_111->ah_procRxDesc = VAR_57;
 VAR_111->ah_rxMonitor = VAR_68;
 VAR_111->ah_aniPoll = VAR_0;
 VAR_111->ah_procMibEvent = VAR_59;


 VAR_111->ah_getCapability = VAR_18;
 VAR_111->ah_setCapability = VAR_75;
 VAR_111->ah_getDiagState = VAR_23;
 VAR_111->ah_getMacAddress = VAR_26;
 VAR_111->ah_setMacAddress = VAR_83;
 VAR_111->ah_getBssIdMask = VAR_16;
 VAR_111->ah_setBssIdMask = VAR_73;
 VAR_111->ah_setRegulatoryDomain = VAR_89;
 VAR_111->ah_setLedState = VAR_82;
 VAR_111->ah_writeAssocid = VAR_109;
 VAR_111->ah_gpioCfgInput = VAR_44;
 VAR_111->ah_gpioCfgOutput = VAR_45;
 VAR_111->ah_gpioGet = VAR_46;
 VAR_111->ah_gpioSet = VAR_47;
 VAR_111->ah_gpioSetIntr = VAR_48;
 VAR_111->ah_getTsf32 = VAR_37;
 VAR_111->ah_getTsf64 = VAR_38;
 VAR_111->ah_resetTsf = VAR_66;
 VAR_111->ah_detectCardPresent = VAR_4;
 VAR_111->ah_updateMibCounters = VAR_107;
 VAR_111->ah_getRfGain = VAR_32;
 VAR_111->ah_getDefAntenna = VAR_21;
 VAR_111->ah_setDefAntenna = VAR_78;
 VAR_111->ah_getAntennaSwitch = VAR_15;
 VAR_111->ah_setAntennaSwitch = VAR_71;
 VAR_111->ah_setSifsTime = VAR_92;
 VAR_111->ah_getSifsTime = VAR_35;
 VAR_111->ah_setSlotTime = VAR_93;
 VAR_111->ah_getSlotTime = VAR_36;
 VAR_111->ah_setAckTimeout = VAR_70;
 VAR_111->ah_getAckTimeout = VAR_14;
 VAR_111->ah_setAckCTSRate = VAR_69;
 VAR_111->ah_getAckCTSRate = VAR_13;
 VAR_111->ah_setCTSTimeout = VAR_74;
 VAR_111->ah_getCTSTimeout = VAR_17;
 VAR_111->ah_setDecompMask = VAR_77;
 VAR_111->ah_setCoverageClass = VAR_76;
 VAR_111->ah_setQuiet = VAR_88;
 VAR_111->ah_getMibCycleCounts = VAR_27;


 VAR_111->ah_enableDfs = VAR_9;
 VAR_111->ah_getDfsThresh = VAR_22;
 VAR_111->ah_procRadarEvent = VAR_60;
 VAR_111->ah_isFastClockEnabled = VAR_50;
 VAR_111->ah_get11nExtBusy = VAR_12;


 VAR_111->ah_getKeyCacheSize = VAR_25;
 VAR_111->ah_resetKeyCacheEntry = VAR_64;
 VAR_111->ah_isKeyCacheEntryValid = VAR_52;
 VAR_111->ah_setKeyCacheEntry = VAR_80;
 VAR_111->ah_setKeyCacheEntryMac = VAR_81;


 VAR_111->ah_setPowerMode = VAR_87;
 VAR_111->ah_getPowerMode = VAR_30;


 VAR_111->ah_setBeaconTimers = VAR_72;
 VAR_111->ah_beaconInit = VAR_1;
 VAR_111->ah_setStationBeaconTimers = VAR_94;
 VAR_111->ah_resetStationBeaconTimers = VAR_65;
 VAR_111->ah_getNextTBTT = VAR_28;


 VAR_111->ah_isInterruptPending = VAR_51;
 VAR_111->ah_getPendingInterrupts = VAR_29;
 VAR_111->ah_getInterrupts = VAR_24;
 VAR_111->ah_setInterrupts = VAR_79;

 FUNC_0(VAR_111)->ah_getChannelEdges = VAR_19;
 FUNC_0(VAR_111)->ah_getWirelessModes = VAR_43;
 FUNC_0(VAR_111)->ah_eepromRead = VAR_7;



 FUNC_0(VAR_111)->ah_getChipPowerLimits = VAR_20;
}
