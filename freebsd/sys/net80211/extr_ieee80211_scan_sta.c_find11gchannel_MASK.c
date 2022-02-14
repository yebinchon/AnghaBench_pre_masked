
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_nchans; struct ieee80211_channel* ic_channels; } ;
struct ieee80211_channel {int ic_freq; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_1(struct ieee80211com *VAR_0, int VAR_1, int VAR_2)
{
 struct ieee80211_channel *VAR_3;
 int VAR_4;






 for (VAR_4 = VAR_1+1; VAR_4 < VAR_0->ic_nchans; VAR_4++) {
  VAR_3 = &VAR_0->ic_channels[VAR_4];
  if (VAR_3->ic_freq == VAR_2 && FUNC_0(VAR_3))
   return VAR_3;
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_0->ic_channels[VAR_4];
  if (VAR_3->ic_freq == VAR_2 && FUNC_0(VAR_3))
   return VAR_3;
 }
 return ((void*)0);
}
