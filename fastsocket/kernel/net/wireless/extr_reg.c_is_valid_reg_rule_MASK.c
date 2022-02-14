
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ieee80211_freq_range {scalar_t__ start_freq_khz; scalar_t__ end_freq_khz; scalar_t__ max_bandwidth_khz; } ;
struct ieee80211_reg_rule {struct ieee80211_freq_range freq_range; } ;



__attribute__((used)) static bool FUNC_0(const struct ieee80211_reg_rule *VAR_0)
{
 const struct ieee80211_freq_range *VAR_1 = &VAR_0->freq_range;
 u32 VAR_2;

 if (VAR_1->start_freq_khz <= 0 || VAR_1->end_freq_khz <= 0)
  return 0;

 if (VAR_1->start_freq_khz > VAR_1->end_freq_khz)
  return 0;

 VAR_2 = VAR_1->end_freq_khz - VAR_1->start_freq_khz;

 if (VAR_1->end_freq_khz <= VAR_1->start_freq_khz ||
     VAR_1->max_bandwidth_khz > VAR_2)
  return 0;

 return 1;
}
