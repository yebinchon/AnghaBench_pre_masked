
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int sched_scan_stop; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int
FUNC_2(struct wiphy *VAR_1, struct net_device *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3->local->ops->sched_scan_stop)
  return -VAR_0;

 return FUNC_1(VAR_3);
}
