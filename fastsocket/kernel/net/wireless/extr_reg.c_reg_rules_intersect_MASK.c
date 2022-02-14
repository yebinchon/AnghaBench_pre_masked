
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ieee80211_power_rule {scalar_t__ max_eirp; scalar_t__ max_antenna_gain; } ;
struct ieee80211_freq_range {scalar_t__ start_freq_khz; scalar_t__ end_freq_khz; scalar_t__ max_bandwidth_khz; } ;
struct ieee80211_reg_rule {int flags; struct ieee80211_power_rule power_rule; struct ieee80211_freq_range freq_range; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_reg_rule*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 void* FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const struct ieee80211_reg_rule *VAR_1,
          const struct ieee80211_reg_rule *VAR_2,
          struct ieee80211_reg_rule *VAR_3)
{
 const struct ieee80211_freq_range *VAR_4, *VAR_5;
 struct ieee80211_freq_range *VAR_6;
 const struct ieee80211_power_rule *VAR_7, *VAR_8;
 struct ieee80211_power_rule *VAR_9;
 u32 VAR_10;

 VAR_4 = &VAR_1->freq_range;
 VAR_5 = &VAR_2->freq_range;
 VAR_6 = &VAR_3->freq_range;

 VAR_7 = &VAR_1->power_rule;
 VAR_8 = &VAR_2->power_rule;
 VAR_9 = &VAR_3->power_rule;

 VAR_6->start_freq_khz = FUNC_1(VAR_4->start_freq_khz,
      VAR_5->start_freq_khz);
 VAR_6->end_freq_khz = FUNC_2(VAR_4->end_freq_khz,
           VAR_5->end_freq_khz);
 VAR_6->max_bandwidth_khz = FUNC_2(VAR_4->max_bandwidth_khz,
         VAR_5->max_bandwidth_khz);

 VAR_10 = VAR_6->end_freq_khz - VAR_6->start_freq_khz;
 if (VAR_6->max_bandwidth_khz > VAR_10)
  VAR_6->max_bandwidth_khz = VAR_10;

 VAR_9->max_eirp = FUNC_2(VAR_7->max_eirp,
  VAR_8->max_eirp);
 VAR_9->max_antenna_gain = FUNC_2(VAR_7->max_antenna_gain,
  VAR_8->max_antenna_gain);

 VAR_3->flags = VAR_1->flags | VAR_2->flags;

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return 0;
}
