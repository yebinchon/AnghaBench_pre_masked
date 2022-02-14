
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int halLow5GhzChan; int halHigh5GhzChan; int halNumMRRetries; int halNumTxMaps; int halKeyCacheSize; int halTxTstampPrecision; int halRxTstampPrecision; int halIntrMask; void* halHasRxSelfLinkedTail; void* hal4kbSplitTransSupport; void* halRfSilentSupport; void* halUseCombinedRadarRssi; void* halChanQuarterRate; void* halChanHalfRate; int halTotalQueues; void* halPSPollBroken; void* halSleepAfterBeaconBroken; int halWirelessModes; } ;
struct ath_hal_private {int ah_rfsilent; void* ah_rxornIsFatal; void* ah_rfkillEnabled; TYPE_1__ ah_caps; } ;
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
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_3(struct ath_hal *VAR_12)
{
 struct ath_hal_private *VAR_13 = FUNC_0(VAR_12);
 HAL_CAPABILITIES *VAR_14 = &VAR_13->ah_caps;

 VAR_14->halWirelessModes |= VAR_10;

 VAR_14->halLow5GhzChan = 5120;
 VAR_14->halHigh5GhzChan = 5430;

 VAR_14->halSleepAfterBeaconBroken = VAR_1;
 VAR_14->halPSPollBroken = VAR_0;
 VAR_14->halNumMRRetries = 1;
 VAR_14->halNumTxMaps = 1;

 VAR_14->halTotalQueues = VAR_11;
 VAR_14->halKeyCacheSize = 64;


 VAR_14->halChanHalfRate = VAR_0;
 VAR_14->halChanQuarterRate = VAR_0;





 VAR_14->halUseCombinedRadarRssi = VAR_1;

 if (FUNC_2(VAR_12, VAR_4)) {





  VAR_13->ah_rfsilent = FUNC_1(0, VAR_2)
        | FUNC_1(0, VAR_3);
  VAR_13->ah_rfkillEnabled = VAR_1;
  VAR_14->halRfSilentSupport = VAR_1;
 }

 VAR_14->halTxTstampPrecision = 16;
 VAR_14->halRxTstampPrecision = 15;
 VAR_14->halIntrMask = (VAR_6 - VAR_5)
   | VAR_8
   | VAR_9
   | VAR_7
   ;

 VAR_14->hal4kbSplitTransSupport = VAR_1;
 VAR_14->halHasRxSelfLinkedTail = VAR_1;

 VAR_13->ah_rxornIsFatal = VAR_1;
 return VAR_1;
}
