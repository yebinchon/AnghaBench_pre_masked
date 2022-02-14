
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_nchans; int ic_channels; struct ieee80211_channel* ic_prevchan; } ;
struct ieee80211_channel {int ic_freq; int ic_flags; } ;


 int VAR_0 ;
 struct ieee80211_channel* FUNC_0 (int ,int ,int,int) ;

struct ieee80211_channel *
FUNC_1(struct ieee80211com *VAR_1, int VAR_2, int VAR_3)
{
 struct ieee80211_channel *VAR_4;

 VAR_3 &= VAR_0;
 VAR_4 = VAR_1->ic_prevchan;
 if (VAR_4 != ((void*)0) && VAR_4->ic_freq == VAR_2 &&
     (VAR_4->ic_flags & VAR_0) == VAR_3)
  return VAR_4;

 return (FUNC_0(VAR_1->ic_channels, VAR_1->ic_nchans, VAR_2, VAR_3));
}
