
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_3__ {int flags; } ;
struct cfg80211_registered_device {int sched_scan_mtx; TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct TYPE_4__ {int sched_scan_stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
       struct genl_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = VAR_3->user_ptr[0];
 int VAR_5;

 if (!(VAR_4->wiphy.flags & VAR_1) ||
     !VAR_4->ops->sched_scan_stop)
  return -VAR_0;

 FUNC_1(&VAR_4->sched_scan_mtx);
 VAR_5 = FUNC_0(VAR_4, 0);
 FUNC_2(&VAR_4->sched_scan_mtx);

 return VAR_5;
}
