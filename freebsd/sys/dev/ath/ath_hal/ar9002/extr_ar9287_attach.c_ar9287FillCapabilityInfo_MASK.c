
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halNumGpioPins; int halRtsAggrLimit; int halRxStbcSupport; int halTxStbcSupport; int halHTSGI20Support; void* halEnhancedDfsSupport; void* halSpectralScanSupport; void* halPSPollBroken; void* halHasRxSelfLinkedTail; void* hal4kbSplitTransSupport; void* halAutoSleepSupport; void* halBtCoexSupport; void* halUseCombinedRadarRssi; void* halExtChanDfsSupport; void* halRifsTxSupport; void* halRifsRxSupport; void* halCSTSupport; void* halWowMatchPatternDword; void* halWowMatchPatternExact; void* halWowSupport; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef void* HAL_BOOL ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 void* VAR_1 ;
 int FUNC_1 (struct ath_hal*) ;

__attribute__((used)) static HAL_BOOL
FUNC_2(struct ath_hal *VAR_2)
{
 HAL_CAPABILITIES *VAR_3 = &FUNC_0(VAR_2)->ah_caps;

 if (!FUNC_1(VAR_2))
  return VAR_0;
 VAR_3->halNumGpioPins = 10;
 VAR_3->halWowSupport = VAR_1;
 VAR_3->halWowMatchPatternExact = VAR_1;




 VAR_3->halCSTSupport = VAR_1;
 VAR_3->halRifsRxSupport = VAR_1;
 VAR_3->halRifsTxSupport = VAR_1;
 VAR_3->halRtsAggrLimit = 64*1024;
 VAR_3->halExtChanDfsSupport = VAR_1;
 VAR_3->halUseCombinedRadarRssi = VAR_1;




 VAR_3->halAutoSleepSupport = VAR_0;
 VAR_3->hal4kbSplitTransSupport = VAR_0;

 VAR_3->halHasRxSelfLinkedTail = VAR_0;
 VAR_3->halPSPollBroken = VAR_0;
 VAR_3->halSpectralScanSupport = VAR_1;


 VAR_3->halRxStbcSupport = 1;
 VAR_3->halTxStbcSupport = 1;


 VAR_3->halHTSGI20Support = 1;

 VAR_3->halEnhancedDfsSupport = VAR_1;

 return VAR_1;
}
