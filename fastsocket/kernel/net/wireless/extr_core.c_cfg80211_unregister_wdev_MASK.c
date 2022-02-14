
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; int list; int netdev; int wiphy; } ;
struct cfg80211_registered_device {int devlist_mtx; int sched_scan_mtx; int devlist_generation; } ;


 int FUNC_0 () ;

 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

void FUNC_8(struct wireless_dev *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_7(VAR_0->wiphy);

 FUNC_0();

 if (FUNC_1(VAR_0->netdev))
  return;

 FUNC_5(&VAR_1->devlist_mtx);
 FUNC_5(&VAR_1->sched_scan_mtx);
 FUNC_4(&VAR_0->list);
 VAR_1->devlist_generation++;

 switch (VAR_0->iftype) {
 case 128:
  FUNC_3(VAR_1, VAR_0);
  break;
 default:
  FUNC_2(1);
  break;
 }
 FUNC_6(&VAR_1->sched_scan_mtx);
 FUNC_6(&VAR_1->devlist_mtx);
}
