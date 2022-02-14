
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ieee80211_ptr; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,struct net_device*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct net_device *VAR_9 = VAR_7->user_ptr[1];
 u16 VAR_10;

 if (!VAR_7->attrs[VAR_2])
  VAR_10 = VAR_5;
 else
  VAR_10 = FUNC_1(VAR_7->attrs[VAR_2]);

 if (VAR_10 == 0)
  return -VAR_0;

 if (VAR_9->ieee80211_ptr->iftype != VAR_4 &&
     VAR_9->ieee80211_ptr->iftype != VAR_3)
  return -VAR_1;

 return FUNC_0(VAR_8, VAR_9, VAR_10, 1);
}
