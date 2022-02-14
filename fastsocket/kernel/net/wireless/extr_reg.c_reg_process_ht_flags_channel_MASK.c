
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {size_t band; int center_freq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_channel*) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_3,
      struct ieee80211_channel *VAR_4)
{
 struct ieee80211_supported_band *VAR_5 = VAR_3->bands[VAR_4->band];
 struct ieee80211_channel *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 unsigned int VAR_8;

 if (!FUNC_0(VAR_4)) {
  VAR_4->flags |= VAR_0;
  return;
 }





 for (VAR_8 = 0; VAR_8 < VAR_5->n_channels; VAR_8++) {
  struct ieee80211_channel *VAR_9 = &VAR_5->channels[VAR_8];

  if (VAR_9->center_freq == (VAR_4->center_freq - 20))
   VAR_6 = VAR_9;
  if (VAR_9->center_freq == (VAR_4->center_freq + 20))
   VAR_7 = VAR_9;
 }






 if (!FUNC_0(VAR_6))
  VAR_4->flags |= VAR_1;
 else
  VAR_4->flags &= ~VAR_1;

 if (!FUNC_0(VAR_7))
  VAR_4->flags |= VAR_2;
 else
  VAR_4->flags &= ~VAR_2;
}
