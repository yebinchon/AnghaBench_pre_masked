
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ieee80211_power_rule {void* max_antenna_gain; void* max_eirp; } ;
struct ieee80211_freq_range {void* max_bandwidth_khz; void* end_freq_khz; void* start_freq_khz; } ;
struct ieee80211_reg_rule {void* flags; struct ieee80211_power_rule power_rule; struct ieee80211_freq_range freq_range; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_7[],
 struct ieee80211_reg_rule *VAR_8)
{
 struct ieee80211_freq_range *VAR_9 = &VAR_8->freq_range;
 struct ieee80211_power_rule *VAR_10 = &VAR_8->power_rule;

 if (!VAR_7[VAR_6])
  return -VAR_0;
 if (!VAR_7[VAR_3])
  return -VAR_0;
 if (!VAR_7[VAR_1])
  return -VAR_0;
 if (!VAR_7[VAR_2])
  return -VAR_0;
 if (!VAR_7[VAR_5])
  return -VAR_0;

 VAR_8->flags = FUNC_0(VAR_7[VAR_6]);

 VAR_9->start_freq_khz =
  FUNC_0(VAR_7[VAR_3]);
 VAR_9->end_freq_khz =
  FUNC_0(VAR_7[VAR_1]);
 VAR_9->max_bandwidth_khz =
  FUNC_0(VAR_7[VAR_2]);

 VAR_10->max_eirp =
  FUNC_0(VAR_7[VAR_5]);

 if (VAR_7[VAR_4])
  VAR_10->max_antenna_gain =
   FUNC_0(VAR_7[VAR_4]);

 return 0;
}
