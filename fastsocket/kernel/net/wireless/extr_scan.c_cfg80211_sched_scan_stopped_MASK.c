
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int sched_scan_mtx; } ;


 int FUNC_0 (struct cfg80211_registered_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wiphy*) ;
 struct cfg80211_registered_device* FUNC_4 (struct wiphy*) ;

void FUNC_5(struct wiphy *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_0);

 FUNC_1(&VAR_1->sched_scan_mtx);
 FUNC_0(VAR_1, 1);
 FUNC_2(&VAR_1->sched_scan_mtx);
}
