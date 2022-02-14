
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_10 ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 struct cfg80211_registered_device* FUNC_11 (struct wiphy*) ;

void FUNC_12(struct net_device *VAR_11,
        const u8 *VAR_12, u32 VAR_13,
        u32 VAR_14, u32 VAR_15, gfp_t VAR_16)
{
 struct wireless_dev *VAR_17 = VAR_11->ieee80211_ptr;
 struct wiphy *VAR_18 = VAR_17->wiphy;
 struct cfg80211_registered_device *VAR_19 = FUNC_11(VAR_18);
 struct sk_buff *VAR_20;
 struct nlattr *VAR_21;
 void *VAR_22;

 VAR_20 = FUNC_9(VAR_9, VAR_16);
 if (!VAR_20)
  return;

 VAR_22 = FUNC_3(VAR_20, 0, 0, 0, VAR_8);
 if (!VAR_22) {
  FUNC_8(VAR_20);
  return;
 }

 if (FUNC_7(VAR_20, VAR_7, VAR_19->wiphy_idx) ||
     FUNC_7(VAR_20, VAR_5, VAR_11->ifindex) ||
     FUNC_6(VAR_20, VAR_6, VAR_0, VAR_12))
  goto nla_put_failure;

 VAR_21 = FUNC_5(VAR_20, VAR_1);
 if (!VAR_21)
  goto nla_put_failure;

 if (FUNC_7(VAR_20, VAR_3, VAR_13))
  goto nla_put_failure;

 if (FUNC_7(VAR_20, VAR_4, VAR_14))
  goto nla_put_failure;

 if (FUNC_7(VAR_20, VAR_2, VAR_15))
  goto nla_put_failure;

 FUNC_4(VAR_20, VAR_21);

 FUNC_1(VAR_20, VAR_22);

 FUNC_2(FUNC_10(&VAR_19->wiphy), VAR_20, 0,
    VAR_10.id, VAR_16);
 return;

 nla_put_failure:
 FUNC_0(VAR_20, VAR_22);
 FUNC_8(VAR_20);
}
