
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int flags; struct ieee80211_supported_band** bands; } ;
struct TYPE_2__ {size_t band; scalar_t__ center_freq; } ;
struct reg_beacon {TYPE_1__ chan; } ;
struct ieee80211_supported_band {struct ieee80211_channel* channels; } ;
struct ieee80211_channel {scalar_t__ center_freq; int beacon_found; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wiphy*,struct ieee80211_channel*,struct ieee80211_channel*) ;
 int FUNC_2 (struct wiphy*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_3, unsigned int VAR_4,
         struct reg_beacon *VAR_5)
{
 struct ieee80211_supported_band *VAR_6;
 struct ieee80211_channel *VAR_7;
 bool VAR_8 = 0;
 struct ieee80211_channel VAR_9;

 VAR_6 = VAR_3->bands[VAR_5->chan.band];
 VAR_7 = &VAR_6->channels[VAR_4];

 if (FUNC_0(VAR_7->center_freq != VAR_5->chan.center_freq))
  return;

 if (VAR_7->beacon_found)
  return;

 VAR_7->beacon_found = 1;

 if (!FUNC_2(VAR_3))
  return;

 if (VAR_3->flags & VAR_2)
  return;

 VAR_9.center_freq = VAR_7->center_freq;
 VAR_9.flags = VAR_7->flags;

 if (VAR_7->flags & VAR_1) {
  VAR_7->flags &= ~VAR_1;
  VAR_8 = 1;
 }

 if (VAR_7->flags & VAR_0) {
  VAR_7->flags &= ~VAR_0;
  VAR_8 = 1;
 }

 if (VAR_8)
  FUNC_1(VAR_3, &VAR_9, VAR_7);
}
