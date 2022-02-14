
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_hal_channel {int ieee; int targetPowers; void* freq; } ;
struct TYPE_3__ {int nchannels; void* freqHigh; void* freqLow; struct mwl_hal_channel* channels; } ;
typedef TYPE_1__ MWL_HAL_CHANNELINFO ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct mwl_hal_channel*,int ,int) ;

__attribute__((used)) static void
FUNC_3(MWL_HAL_CHANNELINFO *VAR_0, const uint8_t VAR_1[], int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4) {
  struct mwl_hal_channel *VAR_5 = &VAR_0->channels[VAR_4];
  VAR_5->ieee = 1+VAR_4;
  VAR_5->freq = FUNC_0(1+VAR_4);
  FUNC_1(VAR_5->targetPowers, &VAR_1[VAR_3], 4);
  FUNC_2(VAR_5, 0, 4);
  VAR_4++;
 }
 VAR_0->nchannels = VAR_4;
 VAR_0->freqLow = FUNC_0(1);
 VAR_0->freqHigh = FUNC_0(VAR_4);
}
