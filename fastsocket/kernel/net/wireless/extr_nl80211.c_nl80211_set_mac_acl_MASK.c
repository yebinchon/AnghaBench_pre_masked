
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int wiphy; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_acl_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ iftype; int beacon_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cfg80211_acl_data*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct cfg80211_acl_data*) ;
 int FUNC_2 (struct cfg80211_acl_data*) ;
 struct cfg80211_acl_data* FUNC_3 (int *,struct genl_info*) ;
 int FUNC_4 (struct net_device*,struct net_device*,struct cfg80211_acl_data*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct cfg80211_acl_data *VAR_8;
 int VAR_9;

 if (VAR_7->ieee80211_ptr->iftype != VAR_2 &&
     VAR_7->ieee80211_ptr->iftype != VAR_3)
  return -VAR_1;

 if (!VAR_7->ieee80211_ptr->beacon_interval)
  return -VAR_0;

 VAR_8 = FUNC_3(&VAR_6->wiphy, VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);

 FUNC_2(VAR_8);

 return VAR_9;
}
