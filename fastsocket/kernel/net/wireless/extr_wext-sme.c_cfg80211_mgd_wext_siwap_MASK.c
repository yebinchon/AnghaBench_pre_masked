
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * bssid; } ;
struct TYPE_4__ {TYPE_1__ connect; int * bssid; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ sme_state; TYPE_2__ wext; int wiphy; } ;
struct sockaddr {scalar_t__ sa_family; int * sa_data; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {int devlist_mtx; int sched_scan_mtx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_4 (struct cfg80211_registered_device*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct wireless_dev*) ;
 int FUNC_12 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_13 (int ) ;

int FUNC_14(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       struct sockaddr *VAR_8, char *VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_6->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_13(VAR_10->wiphy);
 u8 *VAR_12 = VAR_8->sa_data;
 int VAR_13;


 if (FUNC_0(VAR_10->iftype != VAR_4))
  return -VAR_2;

 if (VAR_8->sa_family != VAR_0)
  return -VAR_2;


 if (FUNC_7(VAR_12) || FUNC_6(VAR_12))
  VAR_12 = ((void*)0);

 FUNC_2(VAR_11);
 FUNC_9(&VAR_11->devlist_mtx);
 FUNC_9(&VAR_11->sched_scan_mtx);
 FUNC_11(VAR_10);

 if (VAR_10->sme_state != VAR_1) {
  VAR_13 = 0;

  if (!VAR_12 && !VAR_10->wext.connect.bssid)
   goto out;


  if (VAR_10->wext.connect.bssid && VAR_12 &&
      FUNC_5(VAR_12, VAR_10->wext.connect.bssid))
   goto out;

  VAR_13 = FUNC_1(VAR_11, VAR_6,
         VAR_5, 0);
  if (VAR_13)
   goto out;
 }

 if (VAR_12) {
  FUNC_8(VAR_10->wext.bssid, VAR_12, VAR_3);
  VAR_10->wext.connect.bssid = VAR_10->wext.bssid;
 } else
  VAR_10->wext.connect.bssid = ((void*)0);

 VAR_13 = FUNC_3(VAR_11, VAR_10);
 out:
 FUNC_12(VAR_10);
 FUNC_10(&VAR_11->sched_scan_mtx);
 FUNC_10(&VAR_11->devlist_mtx);
 FUNC_4(VAR_11);
 return VAR_13;
}
