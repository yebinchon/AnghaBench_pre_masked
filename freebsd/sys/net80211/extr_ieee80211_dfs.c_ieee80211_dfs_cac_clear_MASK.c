
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_nchans; struct ieee80211_channel* ic_channels; } ;
struct ieee80211_channel {scalar_t__ ic_freq; int ic_state; } ;


 int VAR_0 ;

void
FUNC_0(struct ieee80211com *VAR_1,
 const struct ieee80211_channel *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->ic_nchans; VAR_3++) {
  struct ieee80211_channel *VAR_4 = &VAR_1->ic_channels[VAR_3];
  if (VAR_4->ic_freq == VAR_2->ic_freq)
   VAR_4->ic_state &= ~VAR_0;
 }
}
