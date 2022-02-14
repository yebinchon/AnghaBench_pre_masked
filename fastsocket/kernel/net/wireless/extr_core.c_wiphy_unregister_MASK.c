
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_3__ {int registered; int dev; int debugfsdir; } ;
struct cfg80211_registered_device {int opencount; TYPE_2__* ops; scalar_t__ wowlan; int dfs_update_channels_wk; int event_work; int conn_work; int scan_done_wk; TYPE_1__ wiphy; int list; int devlist_mtx; int wdev_list; int dev_wait; int rfkill; } ;
struct TYPE_4__ {scalar_t__ set_wakeup; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cfg80211_registered_device*) ;
 int VAR_0 ;
 int FUNC_4 (struct cfg80211_registered_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct cfg80211_registered_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct cfg80211_registered_device*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct wiphy*) ;
 struct cfg80211_registered_device* FUNC_20 (struct wiphy*) ;

void FUNC_21(struct wiphy *VAR_2)
{
 struct cfg80211_registered_device *VAR_3 = FUNC_20(VAR_2);

 FUNC_15();
 VAR_3->wiphy.registered = 0;
 FUNC_16();

 FUNC_14(VAR_3->rfkill);


 FUNC_11(&VAR_0);

 FUNC_18(VAR_3->dev_wait, ({
  int VAR_4;
  FUNC_11(&VAR_3->devlist_mtx);
  VAR_4 = VAR_3->opencount;
  FUNC_12(&VAR_3->devlist_mtx);
  VAR_4 == 0; }));

 FUNC_11(&VAR_3->devlist_mtx);
 FUNC_0(!FUNC_10(&VAR_3->wdev_list));
 FUNC_12(&VAR_3->devlist_mtx);





 FUNC_6(VAR_3->wiphy.debugfsdir);
 FUNC_9(&VAR_3->list);
 FUNC_17();
 FUNC_3(VAR_3);

 FUNC_5(VAR_3);





 FUNC_19(VAR_2);

 VAR_1++;
 FUNC_7(&VAR_3->wiphy.dev);

 FUNC_12(&VAR_0);

 FUNC_8(&VAR_3->scan_done_wk);
 FUNC_2(&VAR_3->conn_work);
 FUNC_8(&VAR_3->event_work);
 FUNC_1(&VAR_3->dfs_update_channels_wk);

 if (VAR_3->wowlan && VAR_3->ops->set_wakeup)
  FUNC_13(VAR_3, 0);
 FUNC_4(VAR_3);
}
