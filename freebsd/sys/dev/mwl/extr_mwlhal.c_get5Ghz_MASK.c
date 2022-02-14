
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_hal_channel {int freq; int ieee; int targetPowers; } ;
struct TYPE_3__ {int nchannels; int freqLow; int freqHigh; struct mwl_hal_channel* channels; } ;
typedef TYPE_1__ MWL_HAL_CHANNELINFO ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct mwl_hal_channel*,int,int) ;

__attribute__((used)) static void
FUNC_2(MWL_HAL_CHANNELINFO *VAR_0, const uint8_t VAR_1[], int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_6 = 32000;
 VAR_7 = 0;
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4) {
  struct mwl_hal_channel *VAR_8;

  if (VAR_1[VAR_3] == 0)
   continue;
  VAR_5 = 5000 + 5*VAR_1[VAR_3];
  if (VAR_5 < VAR_6)
   VAR_6 = VAR_5;
  if (VAR_5 > VAR_7)
   VAR_7 = VAR_5;
  VAR_8 = &VAR_0->channels[VAR_4];
  VAR_8->freq = VAR_5;
  VAR_8->ieee = VAR_1[VAR_3];
  FUNC_0(VAR_8->targetPowers, &VAR_1[VAR_3], 4);
  FUNC_1(VAR_8, 1, 4);
  VAR_4++;
 }
 VAR_0->nchannels = VAR_4;
 VAR_0->freqLow = (VAR_6 == 32000) ? 0 : VAR_6;
 VAR_0->freqHigh = VAR_7;
}
