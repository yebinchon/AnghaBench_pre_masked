
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int center_freq; } ;
struct cfg80211_chan_def {int center_freq1; void* width; scalar_t__ center_freq2; struct ieee80211_channel* chan; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;






 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct cfg80211_chan_def *VAR_3,
        struct ieee80211_channel *VAR_4,
        enum nl80211_channel_type VAR_5)
{
 if (FUNC_0(!VAR_4))
  return;

 VAR_3->chan = VAR_4;
 VAR_3->center_freq2 = 0;

 switch (VAR_5) {
 case 128:
  VAR_3->width = VAR_1;
  VAR_3->center_freq1 = VAR_4->center_freq;
  break;
 case 131:
  VAR_3->width = VAR_0;
  VAR_3->center_freq1 = VAR_4->center_freq;
  break;
 case 129:
  VAR_3->width = VAR_2;
  VAR_3->center_freq1 = VAR_4->center_freq + 10;
  break;
 case 130:
  VAR_3->width = VAR_2;
  VAR_3->center_freq1 = VAR_4->center_freq - 10;
  break;
 default:
  FUNC_0(1);
 }
}
