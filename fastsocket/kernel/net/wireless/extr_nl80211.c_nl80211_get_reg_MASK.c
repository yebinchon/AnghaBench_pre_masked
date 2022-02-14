
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_regdomain {unsigned int n_reg_rules; struct ieee80211_reg_rule* reg_rules; scalar_t__ dfs_region; int alpha2; } ;
struct ieee80211_power_rule {int max_eirp; int max_antenna_gain; } ;
struct ieee80211_freq_range {int max_bandwidth_khz; int end_freq_khz; int start_freq_khz; } ;
struct ieee80211_reg_rule {int flags; struct ieee80211_power_rule power_rule; struct ieee80211_freq_range freq_range; } ;
struct genl_info {int snd_seq; int snd_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 struct ieee80211_regdomain* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_19, struct genl_info *VAR_20)
{
 const struct ieee80211_regdomain *VAR_21;
 struct sk_buff *VAR_22;
 void *VAR_23 = ((void*)0);
 struct nlattr *VAR_24;
 unsigned int VAR_25;
 int VAR_26 = -VAR_0;

 FUNC_3(&VAR_17);

 if (!VAR_18)
  goto out;

 VAR_22 = FUNC_12(VAR_16, VAR_3);
 if (!VAR_22) {
  VAR_26 = -VAR_2;
  goto out;
 }

 VAR_23 = FUNC_5(VAR_22, VAR_20->snd_pid, VAR_20->snd_seq, 0,
        VAR_14);
 if (!VAR_23)
  goto put_failure;

 if (FUNC_16() &&
     FUNC_9(VAR_22, VAR_13,
   VAR_15))
  goto nla_put_failure;

 FUNC_14();
 VAR_21 = FUNC_13(VAR_18);

 if (FUNC_8(VAR_22, VAR_10, VAR_21->alpha2) ||
     (VAR_21->dfs_region &&
      FUNC_10(VAR_22, VAR_4, VAR_21->dfs_region)))
  goto nla_put_failure_rcu;

 VAR_24 = FUNC_7(VAR_22, VAR_11);
 if (!VAR_24)
  goto nla_put_failure_rcu;

 for (VAR_25 = 0; VAR_25 < VAR_21->n_reg_rules; VAR_25++) {
  struct nlattr *VAR_27;
  const struct ieee80211_reg_rule *VAR_28;
  const struct ieee80211_freq_range *VAR_29;
  const struct ieee80211_power_rule *VAR_30;

  VAR_28 = &VAR_21->reg_rules[VAR_25];
  VAR_29 = &VAR_28->freq_range;
  VAR_30 = &VAR_28->power_rule;

  VAR_27 = FUNC_7(VAR_22, VAR_25);
  if (!VAR_27)
   goto nla_put_failure_rcu;

  if (FUNC_9(VAR_22, VAR_12,
    VAR_28->flags) ||
      FUNC_9(VAR_22, VAR_7,
    VAR_29->start_freq_khz) ||
      FUNC_9(VAR_22, VAR_5,
    VAR_29->end_freq_khz) ||
      FUNC_9(VAR_22, VAR_6,
    VAR_29->max_bandwidth_khz) ||
      FUNC_9(VAR_22, VAR_8,
    VAR_30->max_antenna_gain) ||
      FUNC_9(VAR_22, VAR_9,
    VAR_30->max_eirp))
   goto nla_put_failure_rcu;

  FUNC_6(VAR_22, VAR_27);
 }
 FUNC_15();

 FUNC_6(VAR_22, VAR_24);

 FUNC_1(VAR_22, VAR_23);
 VAR_26 = FUNC_2(VAR_22, VAR_20);
 goto out;

nla_put_failure_rcu:
 FUNC_15();
nla_put_failure:
 FUNC_0(VAR_22, VAR_23);
put_failure:
 FUNC_11(VAR_22);
 VAR_26 = -VAR_1;
out:
 FUNC_4(&VAR_17);
 return VAR_26;
}
