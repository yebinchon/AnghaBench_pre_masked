
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int beacon_interval; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_beacon_data {int dummy; } ;
struct TYPE_2__ {int change_beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct genl_info*,struct cfg80211_beacon_data*) ;
 int FUNC_1 (struct net_device*,struct net_device*,struct cfg80211_beacon_data*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct wireless_dev *VAR_8 = VAR_7->ieee80211_ptr;
 struct cfg80211_beacon_data VAR_9;
 int VAR_10;

 if (VAR_7->ieee80211_ptr->iftype != VAR_2 &&
     VAR_7->ieee80211_ptr->iftype != VAR_3)
  return -VAR_1;

 if (!VAR_6->ops->change_beacon)
  return -VAR_1;

 if (!VAR_8->beacon_interval)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_5, &VAR_9);
 if (VAR_10)
  return VAR_10;

 return FUNC_1(VAR_6, VAR_7, &VAR_9);
}
