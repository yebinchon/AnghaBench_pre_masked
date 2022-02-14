
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
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct cfg80211_registered_device *VAR_7,
          struct net_device *VAR_8, int VAR_9,
          const u8 *VAR_10, gfp_t VAR_11)
{
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_8(VAR_5, VAR_11);
 if (!VAR_12)
  return;

 VAR_13 = FUNC_3(VAR_12, 0, 0, 0, VAR_9);
 if (!VAR_13) {
  FUNC_7(VAR_12);
  return;
 }

 if (FUNC_6(VAR_12, VAR_4, VAR_7->wiphy_idx) ||
     FUNC_6(VAR_12, VAR_1, VAR_8->ifindex) ||
     FUNC_5(VAR_12, VAR_3) ||
     FUNC_4(VAR_12, VAR_2, VAR_0, VAR_10))
  goto nla_put_failure;

 FUNC_1(VAR_12, VAR_13);

 FUNC_2(FUNC_9(&VAR_7->wiphy), VAR_12, 0,
    VAR_6.id, VAR_11);
 return;

 nla_put_failure:
 FUNC_0(VAR_12, VAR_13);
 FUNC_7(VAR_12);
}
