
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_8 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct cfg80211_registered_device *VAR_9,
          struct net_device *VAR_10, u16 VAR_11,
          const u8 *VAR_12, size_t VAR_13, bool VAR_14)
{
 struct sk_buff *VAR_15;
 void *VAR_16;

 VAR_15 = FUNC_9(VAR_7, VAR_0);
 if (!VAR_15)
  return;

 VAR_16 = FUNC_3(VAR_15, 0, 0, 0, VAR_6);
 if (!VAR_16) {
  FUNC_8(VAR_15);
  return;
 }

 if (FUNC_7(VAR_15, VAR_5, VAR_9->wiphy_idx) ||
     FUNC_7(VAR_15, VAR_3, VAR_10->ifindex) ||
     (VAR_14 && VAR_11 &&
      FUNC_6(VAR_15, VAR_4, VAR_11)) ||
     (VAR_14 &&
      FUNC_5(VAR_15, VAR_1)) ||
     (VAR_12 && FUNC_4(VAR_15, VAR_2, VAR_13, VAR_12)))
  goto nla_put_failure;

 FUNC_1(VAR_15, VAR_16);

 FUNC_2(FUNC_10(&VAR_9->wiphy), VAR_15, 0,
    VAR_8.id, VAR_0);
 return;

 nla_put_failure:
 FUNC_0(VAR_15, VAR_16);
 FUNC_8(VAR_15);

}
