
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_6 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct cfg80211_registered_device *VAR_7,
        struct net_device *VAR_8, const u8 *VAR_9,
        gfp_t VAR_10)
{
 struct sk_buff *VAR_11;
 void *VAR_12;

 VAR_11 = FUNC_7(VAR_5, VAR_10);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_3(VAR_11, 0, 0, 0, VAR_4);
 if (!VAR_12) {
  FUNC_6(VAR_11);
  return;
 }

 if (FUNC_5(VAR_11, VAR_3, VAR_7->wiphy_idx) ||
     FUNC_5(VAR_11, VAR_1, VAR_8->ifindex) ||
     FUNC_4(VAR_11, VAR_2, VAR_0, VAR_9))
  goto nla_put_failure;

 FUNC_1(VAR_11, VAR_12);

 FUNC_2(FUNC_8(&VAR_7->wiphy), VAR_11, 0,
    VAR_6.id, VAR_10);
 return;

 nla_put_failure:
 FUNC_0(VAR_11, VAR_12);
 FUNC_6(VAR_11);
}
