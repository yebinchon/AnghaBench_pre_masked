
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_freq_range {int max_bandwidth_khz; } ;
struct ieee80211_power_rule {int max_eirp; int max_antenna_gain; } ;
struct ieee80211_reg_rule {int flags; struct ieee80211_freq_range freq_range; struct ieee80211_power_rule power_rule; } ;
struct ieee80211_channel {int center_freq; int flags; int max_antenna_gain; int max_reg_power; int max_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ieee80211_channel*,struct ieee80211_reg_rule const*) ;
 struct ieee80211_reg_rule* FUNC_6 (struct wiphy*,int ,struct ieee80211_regdomain const*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct wiphy *VAR_4,
      struct ieee80211_channel *VAR_5,
      const struct ieee80211_regdomain *VAR_6)
{
 u32 VAR_7 = 0;
 const struct ieee80211_reg_rule *VAR_8 = ((void*)0);
 const struct ieee80211_power_rule *VAR_9 = ((void*)0);
 const struct ieee80211_freq_range *VAR_10 = ((void*)0);

 VAR_8 = FUNC_6(VAR_4, FUNC_3(VAR_5->center_freq),
          VAR_6);

 if (FUNC_0(VAR_8)) {
  FUNC_4("Disabling freq %d MHz as custom regd has no rule that fits it\n",
         VAR_5->center_freq);
  VAR_5->flags = VAR_0;
  return;
 }

 FUNC_5(VAR_5, VAR_8);

 VAR_9 = &VAR_8->power_rule;
 VAR_10 = &VAR_8->freq_range;

 if (VAR_10->max_bandwidth_khz < FUNC_3(40))
  VAR_7 = VAR_3;
 if (VAR_10->max_bandwidth_khz < FUNC_3(80))
  VAR_7 |= VAR_2;
 if (VAR_10->max_bandwidth_khz < FUNC_3(160))
  VAR_7 |= VAR_1;

 VAR_5->flags |= FUNC_7(VAR_8->flags) | VAR_7;
 VAR_5->max_antenna_gain = (int) FUNC_1(VAR_9->max_antenna_gain);
 VAR_5->max_reg_power = VAR_5->max_power =
  (int) FUNC_2(VAR_9->max_eirp);
}
