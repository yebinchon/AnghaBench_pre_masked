
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int p2p_started; } ;
struct cfg80211_registered_device {TYPE_1__* scan_req; int scan_done_wk; int opencount; int sched_scan_mtx; int devlist_mtx; } ;
struct TYPE_2__ {int aborted; struct wireless_dev* wdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_registered_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cfg80211_registered_device *VAR_1,
         struct wireless_dev *VAR_2)
{
 FUNC_2(&VAR_1->devlist_mtx);
 FUNC_2(&VAR_1->sched_scan_mtx);

 if (FUNC_0(VAR_2->iftype != VAR_0))
  return;

 if (!VAR_2->p2p_started)
  return;

 FUNC_3(VAR_1, VAR_2);
 VAR_2->p2p_started = 0;

 VAR_1->opencount--;

 if (VAR_1->scan_req && VAR_1->scan_req->wdev == VAR_2) {
  bool VAR_3 = FUNC_4(&VAR_1->scan_done_wk);







  FUNC_0(!VAR_3);

  VAR_1->scan_req->aborted = 1;
  FUNC_1(VAR_1, !VAR_3);
 }
}
