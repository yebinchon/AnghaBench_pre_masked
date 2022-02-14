
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_9 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct cfg80211_registered_device *VAR_10,
          struct net_device *VAR_11, int VAR_12,
          const u8 *VAR_13, bool VAR_14, gfp_t VAR_15)
{
 struct sk_buff *VAR_16;
 struct nlattr *VAR_17;
 void *VAR_18;

 VAR_16 = FUNC_10(VAR_8, VAR_15);
 if (!VAR_16)
  return;

 VAR_18 = FUNC_3(VAR_16, 0, 0, 0, VAR_4);
 if (!VAR_18) {
  FUNC_9(VAR_16);
  return;
 }

 if (FUNC_8(VAR_16, VAR_3, VAR_10->wiphy_idx) ||
     FUNC_8(VAR_16, VAR_1, VAR_11->ifindex))
  goto nla_put_failure;

 VAR_17 = FUNC_5(VAR_16, VAR_2);
 if (!VAR_17)
  goto nla_put_failure;

 if (FUNC_8(VAR_16, VAR_6, VAR_12) ||
     FUNC_6(VAR_16, VAR_5, VAR_0, VAR_13) ||
     (VAR_14 &&
      FUNC_7(VAR_16, VAR_7)))
  goto nla_put_failure;

 FUNC_4(VAR_16, VAR_17);

 FUNC_1(VAR_16, VAR_18);

 FUNC_2(FUNC_11(&VAR_10->wiphy), VAR_16, 0,
    VAR_9.id, VAR_15);
 return;

 nla_put_failure:
 FUNC_0(VAR_16, VAR_18);
 FUNC_9(VAR_16);
}
