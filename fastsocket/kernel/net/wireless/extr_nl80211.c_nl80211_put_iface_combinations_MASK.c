
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int n_iface_combinations; struct ieee80211_iface_combination* iface_combinations; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_iface_combination {int n_limits; int radar_detect_widths; int max_interfaces; int num_different_channels; scalar_t__ beacon_int_infra_match; TYPE_1__* limits; } ;
struct TYPE_2__ {int types; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_9,
       struct sk_buff *VAR_10,
       bool VAR_11)
{
 struct nlattr *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_2(VAR_10,
    VAR_1);
 if (!VAR_12)
  goto nla_put_failure;

 for (VAR_13 = 0; VAR_13 < VAR_9->n_iface_combinations; VAR_13++) {
  const struct ieee80211_iface_combination *VAR_15;
  struct nlattr *VAR_16, *VAR_17;

  VAR_15 = &VAR_9->iface_combinations[VAR_13];

  VAR_16 = FUNC_2(VAR_10, VAR_13 + 1);
  if (!VAR_16)
   goto nla_put_failure;

  VAR_17 = FUNC_2(VAR_10, VAR_2);
  if (!VAR_17)
   goto nla_put_failure;

  for (VAR_14 = 0; VAR_14 < VAR_15->n_limits; VAR_14++) {
   struct nlattr *VAR_18;

   VAR_18 = FUNC_2(VAR_10, VAR_14 + 1);
   if (!VAR_18)
    goto nla_put_failure;
   if (FUNC_4(VAR_10, VAR_7,
     VAR_15->limits[VAR_14].max))
    goto nla_put_failure;
   if (FUNC_0(VAR_10, VAR_8,
      VAR_15->limits[VAR_14].types))
    goto nla_put_failure;
   FUNC_1(VAR_10, VAR_18);
  }

  FUNC_1(VAR_10, VAR_17);

  if (VAR_15->beacon_int_infra_match &&
      FUNC_3(VAR_10, VAR_6))
   goto nla_put_failure;
  if (FUNC_4(VAR_10, VAR_4,
    VAR_15->num_different_channels) ||
      FUNC_4(VAR_10, VAR_3,
    VAR_15->max_interfaces))
   goto nla_put_failure;
  if (VAR_11 &&
      FUNC_4(VAR_10, VAR_5,
    VAR_15->radar_detect_widths))
   goto nla_put_failure;

  FUNC_1(VAR_10, VAR_16);
 }

 FUNC_1(VAR_10, VAR_12);

 return 0;
nla_put_failure:
 return -VAR_0;
}
