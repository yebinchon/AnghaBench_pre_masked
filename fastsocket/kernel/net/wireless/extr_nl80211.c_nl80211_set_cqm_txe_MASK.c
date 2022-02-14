
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int set_cqm_txe_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_device*,struct net_device*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct genl_info *VAR_5,
          u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_5->user_ptr[0];
 struct wireless_dev *VAR_10;
 struct net_device *VAR_11 = VAR_5->user_ptr[1];

 if (VAR_6 > 100 || VAR_8 > VAR_2)
  return -VAR_0;

 VAR_10 = VAR_11->ieee80211_ptr;

 if (!VAR_9->ops->set_cqm_txe_config)
  return -VAR_1;

 if (VAR_10->iftype != VAR_4 &&
     VAR_10->iftype != VAR_3)
  return -VAR_1;

 return FUNC_0(VAR_9, VAR_11, VAR_6, VAR_7, VAR_8);
}
