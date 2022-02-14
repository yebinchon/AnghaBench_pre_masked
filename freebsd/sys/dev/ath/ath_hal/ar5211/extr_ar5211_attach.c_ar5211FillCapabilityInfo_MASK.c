
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int halLow2GhzChan; int halHigh2GhzChan; int halLow5GhzChan; int halHigh5GhzChan; int halNumMRRetries; int halNumTxMaps; int halKeyCacheSize; int halRxTstampPrecision; int halTxTstampPrecision; int halIntrMask; void* halHasRxSelfLinkedTail; void* hal4kbSplitTransSupport; void* halRfSilentSupport; void* halUseCombinedRadarRssi; void* halChanQuarterRate; void* halChanHalfRate; int halTotalQueues; void* halVEOLSupport; void* halPSPollBroken; void* halSleepAfterBeaconBroken; void* halChanSpreadSupport; int halWirelessModes; } ;
struct ath_hal_private {void* ah_rxornIsFatal; void* ah_rfkillEnabled; int ah_rfsilent; TYPE_1__ ah_caps; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef void* HAL_BOOL ;


 void* VAR_0 ;
 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 void* VAR_1 ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ,int *) ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_3(struct ath_hal *VAR_18)
{
 struct ath_hal_private *VAR_19 = FUNC_0(VAR_18);
 HAL_CAPABILITIES *VAR_20 = &VAR_19->ah_caps;


 VAR_20->halWirelessModes = 0;
 if (FUNC_2(VAR_18, VAR_2)) {
  VAR_20->halWirelessModes |= VAR_13;
  if (!FUNC_2(VAR_18, VAR_6))
   VAR_20->halWirelessModes |= VAR_15;
 }
 if (FUNC_2(VAR_18, VAR_3))
  VAR_20->halWirelessModes |= VAR_14;

 VAR_20->halLow2GhzChan = 2312;
 VAR_20->halHigh2GhzChan = 2732;
 VAR_20->halLow5GhzChan = 4920;
 VAR_20->halHigh5GhzChan = 6100;

 VAR_20->halChanSpreadSupport = VAR_1;
 VAR_20->halSleepAfterBeaconBroken = VAR_1;
 VAR_20->halPSPollBroken = VAR_1;
 VAR_20->halVEOLSupport = VAR_1;
 VAR_20->halNumMRRetries = 1;
 VAR_20->halNumTxMaps = 1;

 VAR_20->halTotalQueues = VAR_16;
 VAR_20->halKeyCacheSize = 128;


 VAR_20->halChanHalfRate = VAR_0;
 VAR_20->halChanQuarterRate = VAR_0;





 VAR_20->halUseCombinedRadarRssi = VAR_1;

 if (FUNC_2(VAR_18, VAR_4) &&
     FUNC_1(VAR_18, VAR_5, &VAR_19->ah_rfsilent) == VAR_17) {

  VAR_19->ah_rfkillEnabled = VAR_1;
  VAR_20->halRfSilentSupport = VAR_1;
 }

 VAR_20->halRxTstampPrecision = 13;
 VAR_20->halTxTstampPrecision = 16;
 VAR_20->halIntrMask = VAR_8
   | VAR_10
   | VAR_12
   | VAR_9
   | VAR_7
   | VAR_11
   ;

 VAR_20->hal4kbSplitTransSupport = VAR_1;
 VAR_20->halHasRxSelfLinkedTail = VAR_1;


 VAR_19->ah_rxornIsFatal = VAR_1;
 return VAR_1;
}
