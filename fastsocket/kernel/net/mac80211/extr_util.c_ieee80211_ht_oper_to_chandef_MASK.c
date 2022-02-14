
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ht_operation {int ht_param; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfg80211_chan_def*,struct ieee80211_channel*,int) ;

void FUNC_1(struct ieee80211_channel *VAR_5,
      const struct ieee80211_ht_operation *VAR_6,
      struct cfg80211_chan_def *VAR_7)
{
 enum nl80211_channel_type VAR_8;

 if (!VAR_6) {
  FUNC_0(VAR_7, VAR_5,
     VAR_4);
  return;
 }

 switch (VAR_6->ht_param & VAR_0) {
 case 128:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = VAR_3;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = VAR_4;
 }

 FUNC_0(VAR_7, VAR_5, VAR_8);
}
