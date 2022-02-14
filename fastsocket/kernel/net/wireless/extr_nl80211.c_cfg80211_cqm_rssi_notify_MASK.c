
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
typedef int gfp_t ;
typedef enum nl80211_cqm_rssi_threshold_event { ____Placeholder_nl80211_cqm_rssi_threshold_event } nl80211_cqm_rssi_threshold_event ;
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
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (int *) ;
 struct cfg80211_registered_device* FUNC_11 (struct wiphy*) ;

void FUNC_12(struct net_device *VAR_7,
         enum nl80211_cqm_rssi_threshold_event VAR_8,
         gfp_t VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_7->ieee80211_ptr;
 struct wiphy *VAR_11 = VAR_10->wiphy;
 struct cfg80211_registered_device *VAR_12 = FUNC_11(VAR_11);
 struct sk_buff *VAR_13;
 struct nlattr *VAR_14;
 void *VAR_15;

 FUNC_9(VAR_7, VAR_8);

 VAR_13 = FUNC_8(VAR_5, VAR_9);
 if (!VAR_13)
  return;

 VAR_15 = FUNC_3(VAR_13, 0, 0, 0, VAR_4);
 if (!VAR_15) {
  FUNC_7(VAR_13);
  return;
 }

 if (FUNC_6(VAR_13, VAR_3, VAR_12->wiphy_idx) ||
     FUNC_6(VAR_13, VAR_2, VAR_7->ifindex))
  goto nla_put_failure;

 VAR_14 = FUNC_5(VAR_13, VAR_0);
 if (!VAR_14)
  goto nla_put_failure;

 if (FUNC_6(VAR_13, VAR_1,
   VAR_8))
  goto nla_put_failure;

 FUNC_4(VAR_13, VAR_14);

 FUNC_1(VAR_13, VAR_15);

 FUNC_2(FUNC_10(&VAR_12->wiphy), VAR_13, 0,
    VAR_6.id, VAR_9);
 return;

 nla_put_failure:
 FUNC_0(VAR_13, VAR_15);
 FUNC_7(VAR_13);
}
