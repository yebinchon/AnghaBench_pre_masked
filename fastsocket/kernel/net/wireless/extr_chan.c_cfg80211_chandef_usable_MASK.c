
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {TYPE_1__** bands; } ;
struct ieee80211_sta_vht_cap {int cap; int vht_supported; } ;
struct ieee80211_sta_ht_cap {int cap; int ht_supported; } ;
struct cfg80211_chan_def {int width; int center_freq1; int center_freq2; TYPE_2__* chan; } ;
struct TYPE_4__ {size_t band; int center_freq; int flags; } ;
struct TYPE_3__ {struct ieee80211_sta_vht_cap vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def const*) ;
 int FUNC_3 (struct wiphy*,int,int,int) ;

bool FUNC_4(struct wiphy *VAR_9,
        const struct cfg80211_chan_def *VAR_10,
        u32 VAR_11)
{
 struct ieee80211_sta_ht_cap *VAR_12;
 struct ieee80211_sta_vht_cap *VAR_13;
 u32 VAR_14, VAR_15;

 if (FUNC_0(!FUNC_2(VAR_10)))
  return 0;

 VAR_12 = &VAR_9->bands[VAR_10->chan->band]->ht_cap;
 VAR_13 = &VAR_9->bands[VAR_10->chan->band]->vht_cap;

 VAR_15 = VAR_10->chan->center_freq;

 switch (VAR_10->width) {
 case 132:
  if (!VAR_12->ht_supported)
   return 0;
 case 131:
  VAR_14 = 20;
  break;
 case 130:
  VAR_14 = 40;
  if (!VAR_12->ht_supported)
   return 0;
  if (!(VAR_12->cap & VAR_6) ||
      VAR_12->cap & VAR_5)
   return 0;
  if (VAR_10->center_freq1 < VAR_15 &&
      VAR_10->chan->flags & VAR_2)
   return 0;
  if (VAR_10->center_freq1 > VAR_15 &&
      VAR_10->chan->flags & VAR_3)
   return 0;
  break;
 case 128:
  if (!(VAR_13->cap & VAR_8))
   return 0;
 case 129:
  if (!VAR_13->vht_supported)
   return 0;
  VAR_11 |= VAR_1;
  VAR_14 = 80;
  break;
 case 133:
  if (!VAR_13->vht_supported)
   return 0;
  if (!(VAR_13->cap & VAR_7))
   return 0;
  VAR_11 |= VAR_0;
  VAR_14 = 160;
  break;
 default:
  FUNC_1(1);
  return 0;
 }
 if (VAR_14 > 20)
  VAR_11 |= VAR_4;

 if (!FUNC_3(VAR_9, VAR_10->center_freq1,
      VAR_14, VAR_11))
  return 0;

 if (!VAR_10->center_freq2)
  return 1;
 return FUNC_3(VAR_9, VAR_10->center_freq2,
        VAR_14, VAR_11);
}
