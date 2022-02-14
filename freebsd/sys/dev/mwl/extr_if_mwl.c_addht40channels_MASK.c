
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mwl_hal_channel {int maxTxPow; int ieee; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_3__ {int nchannels; struct mwl_hal_channel* channels; } ;
typedef TYPE_1__ MWL_HAL_CHANNELINFO ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_channel VAR_1[], int VAR_2, int *VAR_3,
 const MWL_HAL_CHANNELINFO *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4->nchannels; VAR_6++) {
  const struct mwl_hal_channel *VAR_8 = &VAR_4->channels[VAR_6];

  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3,
      VAR_8->ieee, VAR_8->maxTxPow, VAR_5);
  if (VAR_7 != 0 && VAR_7 != VAR_0)
   break;
 }
}
