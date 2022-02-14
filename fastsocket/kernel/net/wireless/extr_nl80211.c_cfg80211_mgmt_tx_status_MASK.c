
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wireless_dev {struct net_device* netdev; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_8 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,int const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct wireless_dev*,int ,int) ;
 int FUNC_11 (struct wireless_dev*) ;
 int FUNC_12 (int *) ;
 struct cfg80211_registered_device* FUNC_13 (struct wiphy*) ;

void FUNC_14(struct wireless_dev *VAR_9, u64 VAR_10,
        const u8 *VAR_11, size_t VAR_12, bool VAR_13, gfp_t VAR_14)
{
 struct wiphy *VAR_15 = VAR_9->wiphy;
 struct cfg80211_registered_device *VAR_16 = FUNC_13(VAR_15);
 struct net_device *VAR_17 = VAR_9->netdev;
 struct sk_buff *VAR_18;
 void *VAR_19;

 FUNC_10(VAR_9, VAR_10, VAR_13);

 VAR_18 = FUNC_9(VAR_7, VAR_14);
 if (!VAR_18)
  return;

 VAR_19 = FUNC_3(VAR_18, 0, 0, 0, VAR_6);
 if (!VAR_19) {
  FUNC_8(VAR_18);
  return;
 }

 if (FUNC_6(VAR_18, VAR_5, VAR_16->wiphy_idx) ||
     (VAR_17 && FUNC_6(VAR_18, VAR_3,
       VAR_17->ifindex)) ||
     FUNC_7(VAR_18, VAR_4, FUNC_11(VAR_9)) ||
     FUNC_4(VAR_18, VAR_2, VAR_12, VAR_11) ||
     FUNC_7(VAR_18, VAR_1, VAR_10) ||
     (VAR_13 && FUNC_5(VAR_18, VAR_0)))
  goto nla_put_failure;

 FUNC_1(VAR_18, VAR_19);

 FUNC_2(FUNC_12(&VAR_16->wiphy), VAR_18, 0,
    VAR_8.id, VAR_14);
 return;

 nla_put_failure:
 FUNC_0(VAR_18, VAR_19);
 FUNC_8(VAR_18);
}
