
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int wiphy; TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_2__* ops; TYPE_1__* ieee80211_ptr; } ;
typedef int mcast_rate ;
struct TYPE_4__ {int (* set_mcast_rate ) (int *,struct net_device*,int*) ;} ;
struct TYPE_3__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct net_device*,int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct net_device*,int*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct net_device *VAR_9 = VAR_7->user_ptr[1];
 int VAR_10[VAR_2];
 u32 VAR_11;
 int VAR_12;

 if (VAR_9->ieee80211_ptr->iftype != VAR_4 &&
     VAR_9->ieee80211_ptr->iftype != VAR_5)
  return -VAR_1;

 if (!VAR_8->ops->set_mcast_rate)
  return -VAR_1;

 FUNC_0(VAR_10, 0, sizeof(VAR_10));

 if (!VAR_7->attrs[VAR_3])
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_7->attrs[VAR_3]);
 if (!FUNC_1(VAR_8, VAR_10, VAR_11))
  return -VAR_0;

 VAR_12 = VAR_8->ops->set_mcast_rate(&VAR_8->wiphy, VAR_9, VAR_10);

 return VAR_12;
}
