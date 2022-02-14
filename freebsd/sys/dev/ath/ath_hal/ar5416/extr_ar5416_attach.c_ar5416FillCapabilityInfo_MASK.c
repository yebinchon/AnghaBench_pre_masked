
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_2__ {int halWirelessModes; int halLow2GhzChan; int halHigh2GhzChan; int halLow5GhzChan; int halHigh5GhzChan; int halTurboGSupport; int halNumMRRetries; int halNumTxMaps; int halTxTstampPrecision; int halRxTstampPrecision; int halIntrMask; int halNumGpioPins; int halTxStreams; int halRxStreams; int halRtsAggrLimit; int halSerialiseRegWar; void* halRxDoMyBeacon; void* halRfSilentSupport; void* halHasBBReadWar; void* halEnhancedDfsSupport; void* halCSTSupport; void* halGTTSupport; void* halBssidMatchSupport; void* halEnhancedPmSupport; void* halForcePpmSupport; void* halMbssidAggrSupport; scalar_t__ halRxChainMask; scalar_t__ halTxChainMask; void* halHTSupport; void* halNumAntCfg5GHz; void* halNumAntCfg2GHz; void* halHasRxSelfLinkedTail; void* hal4kbSplitTransSupport; void* halAutoSleepSupport; void* halBtCoexSupport; void* halWowMatchPatternExact; void* halWowSupport; void* halFastCCSupport; void* halHwPhyCounterSupport; void* halChanQuarterRate; void* halChanHalfRate; void* halKeyCacheSize; void* halTotalQueues; void* halSpectralScanSupport; void* hal4AddrAggrSupport; void* halTsfAddSupport; void* halMcastKeySrchSupport; void* halBssIdMaskSupport; void* halVEOLSupport; void* halPSPollBroken; void* halTurboPrimeSupport; void* halChapTuningSupport; void* halFastFramesSupport; void* halBurstSupport; void* halCompressSupport; void* halSleepAfterBeaconBroken; void* halChanSpreadSupport; void* halTkipMicTxRxKeySupport; void* halMicAesCcmSupport; void* halMicTkipSupport; void* halMicCkipSupport; void* halCipherAesCcmSupport; void* halCipherTkipSupport; void* halCipherCkipSupport; } ;
struct ath_hal_private {void* ah_rfsilent; int ah_ispcie; void* ah_rxornIsFatal; void* ah_rfkillEnabled; TYPE_1__ ah_caps; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef void* HAL_BOOL ;


 void* VAR_0 ;
 void** VAR_1 ;
 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
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
 void* VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 void* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct ath_hal*,int ,void**) ;
 void* FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (scalar_t__) ;

HAL_BOOL
FUNC_6(struct ath_hal *VAR_37)
{
 struct ath_hal_private *VAR_38 = FUNC_0(VAR_37);
 HAL_CAPABILITIES *VAR_39 = &VAR_38->ah_caps;
 uint16_t VAR_40;


 VAR_39->halWirelessModes = 0;
 if (FUNC_4(VAR_37, VAR_5)) {
  VAR_39->halWirelessModes |= VAR_26
           | VAR_28
           | VAR_30
           | VAR_29
           ;
 }
 if (FUNC_4(VAR_37, VAR_6)) {
  VAR_39->halWirelessModes |= VAR_27
           | VAR_31
           | VAR_33
           | VAR_32
           ;
  VAR_39->halWirelessModes |= VAR_26
           | VAR_28
           | VAR_30
           | VAR_29
           ;
 }

 VAR_39->halLow2GhzChan = 2312;
 VAR_39->halHigh2GhzChan = 2732;

 VAR_39->halLow5GhzChan = 4915;
 VAR_39->halHigh5GhzChan = 6100;

 VAR_39->halCipherCkipSupport = VAR_0;
 VAR_39->halCipherTkipSupport = VAR_2;
 VAR_39->halCipherAesCcmSupport = FUNC_4(VAR_37, VAR_4);

 VAR_39->halMicCkipSupport = VAR_0;
 VAR_39->halMicTkipSupport = VAR_2;
 VAR_39->halMicAesCcmSupport = FUNC_4(VAR_37, VAR_4);




 VAR_39->halTkipMicTxRxKeySupport = VAR_2;
 VAR_39->halChanSpreadSupport = VAR_2;
 VAR_39->halSleepAfterBeaconBroken = VAR_2;

 VAR_39->halCompressSupport = VAR_0;
 VAR_39->halBurstSupport = VAR_2;
 VAR_39->halFastFramesSupport = VAR_2;
 VAR_39->halChapTuningSupport = VAR_2;
 VAR_39->halTurboPrimeSupport = VAR_2;

 VAR_39->halTurboGSupport = VAR_39->halWirelessModes & VAR_25;

 VAR_39->halPSPollBroken = VAR_2;
 VAR_39->halNumMRRetries = 4;
 VAR_39->halNumTxMaps = 1;
 VAR_39->halVEOLSupport = VAR_2;
 VAR_39->halBssIdMaskSupport = VAR_2;
 VAR_39->halMcastKeySrchSupport = VAR_2;
 VAR_39->halTsfAddSupport = VAR_2;
 VAR_39->hal4AddrAggrSupport = VAR_0;
 VAR_39->halSpectralScanSupport = VAR_0;

 if (FUNC_3(VAR_37, VAR_8, &VAR_40) == VAR_35)
  VAR_39->halTotalQueues = VAR_40;
 else
  VAR_39->halTotalQueues = VAR_34;

 if (FUNC_3(VAR_37, VAR_7, &VAR_40) == VAR_35)
  VAR_39->halKeyCacheSize = VAR_40;
 else
  VAR_39->halKeyCacheSize = VAR_3;


 VAR_39->halChanHalfRate = VAR_2;
 VAR_39->halChanQuarterRate = VAR_2;

 VAR_39->halTxTstampPrecision = 32;
 VAR_39->halRxTstampPrecision = 32;
 VAR_39->halHwPhyCounterSupport = VAR_2;
 VAR_39->halIntrMask = VAR_17
   | VAR_22
   | VAR_24
   | VAR_20
   | VAR_16
   | VAR_15
   | VAR_19
   | VAR_23
   | VAR_18
   | VAR_21
   ;

 VAR_39->halFastCCSupport = VAR_2;
 VAR_39->halNumGpioPins = 14;
 VAR_39->halWowSupport = VAR_0;
 VAR_39->halWowMatchPatternExact = VAR_0;
 VAR_39->halBtCoexSupport = VAR_0;
 VAR_39->halAutoSleepSupport = VAR_0;
 VAR_39->hal4kbSplitTransSupport = VAR_2;

 VAR_39->halHasRxSelfLinkedTail = VAR_0;




 VAR_39->halHTSupport = VAR_2;
 VAR_39->halTxChainMask = FUNC_3(VAR_37, VAR_12, VAR_1);

 VAR_39->halRxChainMask = FUNC_3(VAR_37, VAR_11, VAR_1);

 VAR_39->halTxStreams = 2;
 VAR_39->halRxStreams = 2;





 if (FUNC_5(VAR_39->halTxChainMask) == 1)
  VAR_39->halTxStreams = 1;

 if (FUNC_5(VAR_39->halRxChainMask) == 1)
  VAR_39->halRxStreams = 1;
 VAR_39->halRtsAggrLimit = 8*1024;
 VAR_39->halMbssidAggrSupport = VAR_0;
 VAR_39->halForcePpmSupport = VAR_2;
 VAR_39->halEnhancedPmSupport = VAR_2;
 VAR_39->halBssidMatchSupport = VAR_2;
 VAR_39->halGTTSupport = VAR_2;
 VAR_39->halCSTSupport = VAR_2;
 VAR_39->halEnhancedDfsSupport = VAR_0;




 if (FUNC_1(VAR_37))
  VAR_39->halHasBBReadWar = VAR_2;

 if (FUNC_4(VAR_37, VAR_9) &&
     FUNC_3(VAR_37, VAR_10, &VAR_38->ah_rfsilent) == VAR_35) {

  VAR_38->ah_rfkillEnabled = VAR_2;
  VAR_39->halRfSilentSupport = VAR_2;
 }
 VAR_38->ah_rxornIsFatal = VAR_0;







 if (! FUNC_0(VAR_37)->ah_ispcie)
  VAR_39->halSerialiseRegWar = 1;




 VAR_39->halRxDoMyBeacon = VAR_2;

 return VAR_2;
}
