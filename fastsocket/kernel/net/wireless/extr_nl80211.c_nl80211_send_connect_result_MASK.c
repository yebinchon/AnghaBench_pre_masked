
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
typedef int gfp_t ;
struct TYPE_2__ {int id; } ;


 size_t VAR_0 ;
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
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct cfg80211_registered_device *VAR_10,
     struct net_device *VAR_11, const u8 *VAR_12,
     const u8 *VAR_13, size_t VAR_14,
     const u8 *VAR_15, size_t VAR_16,
     u16 VAR_17, gfp_t VAR_18)
{
 struct sk_buff *VAR_19;
 void *VAR_20;

 VAR_19 = FUNC_8(VAR_8, VAR_18);
 if (!VAR_19)
  return;

 VAR_20 = FUNC_3(VAR_19, 0, 0, 0, VAR_7);
 if (!VAR_20) {
  FUNC_7(VAR_19);
  return;
 }

 if (FUNC_6(VAR_19, VAR_6, VAR_10->wiphy_idx) ||
     FUNC_6(VAR_19, VAR_1, VAR_11->ifindex) ||
     (VAR_12 && FUNC_4(VAR_19, VAR_2, VAR_0, VAR_12)) ||
     FUNC_5(VAR_19, VAR_5, VAR_17) ||
     (VAR_13 &&
      FUNC_4(VAR_19, VAR_3, VAR_14, VAR_13)) ||
     (VAR_15 &&
      FUNC_4(VAR_19, VAR_4, VAR_16, VAR_15)))
  goto nla_put_failure;

 FUNC_1(VAR_19, VAR_20);

 FUNC_2(FUNC_9(&VAR_10->wiphy), VAR_19, 0,
    VAR_9.id, VAR_18);
 return;

 nla_put_failure:
 FUNC_0(VAR_19, VAR_20);
 FUNC_7(VAR_19);

}
