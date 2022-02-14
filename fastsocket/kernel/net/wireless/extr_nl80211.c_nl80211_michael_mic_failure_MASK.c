
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;
typedef enum nl80211_key_type { ____Placeholder_nl80211_key_type } nl80211_key_type ;
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
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct cfg80211_registered_device *VAR_10,
     struct net_device *VAR_11, const u8 *VAR_12,
     enum nl80211_key_type VAR_13, int VAR_14,
     const u8 *VAR_15, gfp_t VAR_16)
{
 struct sk_buff *VAR_17;
 void *VAR_18;

 VAR_17 = FUNC_8(VAR_8, VAR_16);
 if (!VAR_17)
  return;

 VAR_18 = FUNC_3(VAR_17, 0, 0, 0, VAR_7);
 if (!VAR_18) {
  FUNC_7(VAR_17);
  return;
 }

 if (FUNC_5(VAR_17, VAR_6, VAR_10->wiphy_idx) ||
     FUNC_5(VAR_17, VAR_1, VAR_11->ifindex) ||
     (VAR_12 && FUNC_4(VAR_17, VAR_5, VAR_0, VAR_12)) ||
     FUNC_5(VAR_17, VAR_4, VAR_13) ||
     (VAR_14 != -1 &&
      FUNC_6(VAR_17, VAR_2, VAR_14)) ||
     (VAR_15 && FUNC_4(VAR_17, VAR_3, 6, VAR_15)))
  goto nla_put_failure;

 FUNC_1(VAR_17, VAR_18);

 FUNC_2(FUNC_9(&VAR_10->wiphy), VAR_17, 0,
    VAR_9.id, VAR_16);
 return;

 nla_put_failure:
 FUNC_0(VAR_17, VAR_18);
 FUNC_7(VAR_17);
}
