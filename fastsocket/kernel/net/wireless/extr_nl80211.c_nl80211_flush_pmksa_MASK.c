
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct TYPE_4__ {int flush_pmksa; } ;
struct TYPE_3__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = VAR_4->user_ptr[0];
 struct net_device *VAR_6 = VAR_4->user_ptr[1];

 if (VAR_6->ieee80211_ptr->iftype != VAR_2 &&
     VAR_6->ieee80211_ptr->iftype != VAR_1)
  return -VAR_0;

 if (!VAR_5->ops->flush_pmksa)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_6);
}
