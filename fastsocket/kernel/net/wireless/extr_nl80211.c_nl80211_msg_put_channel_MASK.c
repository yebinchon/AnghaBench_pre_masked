
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_channel {int flags; int max_power; int dfs_state; int dfs_state_entered; int center_freq; } ;


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_21,
       struct ieee80211_channel *VAR_22,
       bool VAR_23)
{
 if (FUNC_3(VAR_21, VAR_12,
   VAR_22->center_freq))
  goto nla_put_failure;

 if ((VAR_22->flags & VAR_1) &&
     FUNC_2(VAR_21, VAR_11))
  goto nla_put_failure;
 if ((VAR_22->flags & VAR_7) &&
     FUNC_2(VAR_21, VAR_19))
  goto nla_put_failure;
 if ((VAR_22->flags & VAR_6) &&
     FUNC_2(VAR_21, VAR_18))
  goto nla_put_failure;
 if (VAR_22->flags & VAR_8) {
  if (FUNC_2(VAR_21, VAR_20))
   goto nla_put_failure;
  if (VAR_23) {
   u32 VAR_24;

   VAR_24 = FUNC_1(VAR_22->dfs_state_entered);

   if (FUNC_3(VAR_21, VAR_9,
     VAR_22->dfs_state))
    goto nla_put_failure;
   if (FUNC_3(VAR_21, VAR_10,
     VAR_24))
    goto nla_put_failure;
  }
 }

 if (VAR_23) {
  if ((VAR_22->flags & VAR_4) &&
      FUNC_2(VAR_21, VAR_16))
   goto nla_put_failure;
  if ((VAR_22->flags & VAR_5) &&
      FUNC_2(VAR_21, VAR_17))
   goto nla_put_failure;
  if ((VAR_22->flags & VAR_3) &&
      FUNC_2(VAR_21, VAR_15))
   goto nla_put_failure;
  if ((VAR_22->flags & VAR_2) &&
      FUNC_2(VAR_21, VAR_14))
   goto nla_put_failure;
 }

 if (FUNC_3(VAR_21, VAR_13,
   FUNC_0(VAR_22->max_power)))
  goto nla_put_failure;

 return 0;

 nla_put_failure:
 return -VAR_0;
}
