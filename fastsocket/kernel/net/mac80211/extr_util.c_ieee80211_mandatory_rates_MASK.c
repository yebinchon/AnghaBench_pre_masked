
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int flags; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef enum ieee80211_rate_flags { ____Placeholder_ieee80211_rate_flags } ieee80211_rate_flags ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

u32 FUNC_2(struct ieee80211_local *VAR_3,
         enum ieee80211_band VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 struct ieee80211_rate *VAR_6;
 u32 VAR_7;
 enum ieee80211_rate_flags VAR_8;
 int VAR_9;

 VAR_5 = VAR_3->hw.wiphy->bands[VAR_4];
 if (FUNC_1(!VAR_5))
  return 1;

 if (VAR_4 == VAR_0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 VAR_6 = VAR_5->bitrates;
 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5->n_bitrates; VAR_9++)
  if (VAR_6[VAR_9].flags & VAR_8)
   VAR_7 |= FUNC_0(VAR_9);
 return VAR_7;
}
