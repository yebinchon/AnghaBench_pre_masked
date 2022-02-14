
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
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
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct net_device*,int const*,int ) ;
 int FUNC_11 (int *) ;
 struct cfg80211_registered_device* FUNC_12 (struct wiphy*) ;

void FUNC_13(struct net_device *VAR_9,
     const u8 *VAR_10, u32 VAR_11, gfp_t VAR_12)
{
 struct wireless_dev *VAR_13 = VAR_9->ieee80211_ptr;
 struct wiphy *VAR_14 = VAR_13->wiphy;
 struct cfg80211_registered_device *VAR_15 = FUNC_12(VAR_14);
 struct sk_buff *VAR_16;
 struct nlattr *VAR_17;
 void *VAR_18;

 FUNC_10(VAR_9, VAR_10, VAR_11);

 VAR_16 = FUNC_9(VAR_7, VAR_12);
 if (!VAR_16)
  return;

 VAR_18 = FUNC_3(VAR_16, 0, 0, 0, VAR_6);
 if (!VAR_18) {
  FUNC_8(VAR_16);
  return;
 }

 if (FUNC_7(VAR_16, VAR_5, VAR_15->wiphy_idx) ||
     FUNC_7(VAR_16, VAR_3, VAR_9->ifindex) ||
     FUNC_6(VAR_16, VAR_4, VAR_0, VAR_10))
  goto nla_put_failure;

 VAR_17 = FUNC_5(VAR_16, VAR_1);
 if (!VAR_17)
  goto nla_put_failure;

 if (FUNC_7(VAR_16, VAR_2, VAR_11))
  goto nla_put_failure;

 FUNC_4(VAR_16, VAR_17);

 FUNC_1(VAR_16, VAR_18);

 FUNC_2(FUNC_11(&VAR_15->wiphy), VAR_16, 0,
    VAR_8.id, VAR_12);
 return;

 nla_put_failure:
 FUNC_0(VAR_16, VAR_18);
 FUNC_8(VAR_16);
}
