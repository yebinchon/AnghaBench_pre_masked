
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct TYPE_4__ {int del_station; } ;
struct TYPE_3__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,struct net_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 struct net_device *VAR_10 = VAR_8->user_ptr[1];
 u8 *VAR_11 = ((void*)0);

 if (VAR_8->attrs[VAR_2])
  VAR_11 = FUNC_0(VAR_8->attrs[VAR_2]);

 if (VAR_10->ieee80211_ptr->iftype != VAR_3 &&
     VAR_10->ieee80211_ptr->iftype != VAR_4 &&
     VAR_10->ieee80211_ptr->iftype != VAR_5 &&
     VAR_10->ieee80211_ptr->iftype != VAR_6)
  return -VAR_0;

 if (!VAR_9->ops->del_station)
  return -VAR_1;

 return FUNC_1(VAR_9, VAR_10, VAR_11);
}
