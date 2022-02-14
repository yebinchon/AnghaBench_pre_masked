
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wrqu ;
typedef union iwreq_data {int dummy; } iwreq_data ;
struct wireless_dev {scalar_t__ netdev; } ;
struct cfg80211_scan_request {int flags; scalar_t__ aborted; int scan_start; struct wireless_dev* wdev; } ;
struct cfg80211_registered_device {struct cfg80211_scan_request* scan_req; int bss_lock; int sched_scan_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cfg80211_scan_request*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (union iwreq_data*,int ,int) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,int ,union iwreq_data*,int *) ;

void FUNC_11(struct cfg80211_registered_device *VAR_2, bool VAR_3)
{
 struct cfg80211_scan_request *VAR_4;
 struct wireless_dev *VAR_5;




 FUNC_4(&VAR_2->sched_scan_mtx);

 VAR_4 = VAR_2->scan_req;

 if (!VAR_4)
  return;

 VAR_5 = VAR_4->wdev;






 if (VAR_5->netdev)
  FUNC_1(VAR_5->netdev);

 if (VAR_4->aborted) {
  FUNC_6(VAR_2, VAR_5);
 } else {
  if (VAR_4->flags & VAR_0) {

   FUNC_8(&VAR_2->bss_lock);
   FUNC_0(VAR_2, VAR_4->scan_start);
   FUNC_9(&VAR_2->bss_lock);
  }
  FUNC_7(VAR_2, VAR_5);
 }
 if (VAR_5->netdev)
  FUNC_2(VAR_5->netdev);

 VAR_2->scan_req = ((void*)0);
 if (!VAR_3)
  FUNC_3(VAR_4);
}
