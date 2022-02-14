
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halRtsAggrLimit; int halTxStreams; int halRxStreams; void* halHasBBReadWar; void* hal4AddrAggrSupport; void* halMbssidAggrSupport; void* halAutoSleepSupport; void* halUseCombinedRadarRssi; void* halExtChanDfsSupport; void* halRifsTxSupport; void* halRifsRxSupport; void* halCSTSupport; } ;
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
 VAR_3->halCSTSupport = VAR_1;
 VAR_3->halRifsRxSupport = VAR_1;
 VAR_3->halRifsTxSupport = VAR_1;
 VAR_3->halRtsAggrLimit = 64*1024;
 VAR_3->halExtChanDfsSupport = VAR_1;
 VAR_3->halUseCombinedRadarRssi = VAR_1;
 VAR_3->halAutoSleepSupport = VAR_0;
 VAR_3->halMbssidAggrSupport = VAR_1;
 VAR_3->hal4AddrAggrSupport = VAR_1;

 VAR_3->halHasBBReadWar = VAR_1;


 VAR_3->halTxStreams = 2;
 VAR_3->halRxStreams = 2;

 return VAR_1;
}
