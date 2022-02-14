
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* sched_scan_req; int sched_scan_mtx; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int ) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*) ;

int FUNC_4(struct cfg80211_registered_device *VAR_2,
          bool VAR_3)
{
 struct net_device *VAR_4;

 FUNC_1(&VAR_2->sched_scan_mtx);

 if (!VAR_2->sched_scan_req)
  return -VAR_0;

 VAR_4 = VAR_2->sched_scan_req->dev;

 if (!VAR_3) {
  int VAR_5 = FUNC_3(VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_2(VAR_2, VAR_4, VAR_1);

 FUNC_0(VAR_2->sched_scan_req);
 VAR_2->sched_scan_req = ((void*)0);

 return 0;
}
