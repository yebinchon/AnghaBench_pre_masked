
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ssid_len; struct ieee80211_channel* channel; } ;
struct TYPE_4__ {TYPE_1__ connect; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ sme_state; TYPE_2__ wext; int * wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int dummy; } ;
struct ieee80211_channel {int flags; } ;
struct cfg80211_registered_device {int devlist_mtx; int sched_scan_mtx; int wiphy; } ;
struct cfg80211_chan_def {int center_freq1; void* chan; int width; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct cfg80211_chan_def*) ;
 int FUNC_5 (struct cfg80211_registered_device*) ;
 int FUNC_6 (int *,struct iw_freq*) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wireless_dev*) ;
 int FUNC_11 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_12 (int *) ;

int FUNC_13(struct net_device *VAR_6,
         struct iw_request_info *VAR_7,
         struct iw_freq *VAR_8, char *VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_6->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_12(VAR_10->wiphy);
 struct ieee80211_channel *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;


 if (FUNC_0(VAR_10->iftype != VAR_4))
  return -VAR_1;

 VAR_14 = FUNC_6(VAR_10->wiphy, VAR_8);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_14) {
  VAR_12 = FUNC_7(VAR_10->wiphy, VAR_14);
  if (!VAR_12)
   return -VAR_1;
  if (VAR_12->flags & VAR_2)
   return -VAR_1;
 }

 FUNC_2(VAR_11);
 FUNC_8(&VAR_11->devlist_mtx);
 FUNC_8(&VAR_11->sched_scan_mtx);
 FUNC_10(VAR_10);

 if (VAR_10->sme_state != VAR_0) {
  bool VAR_15 = 1;

  if (VAR_10->wext.connect.channel == VAR_12) {
   VAR_13 = 0;
   goto out;
  }


  if (VAR_10->wext.connect.ssid_len)
   VAR_15 = 0;
  VAR_13 = FUNC_1(VAR_11, VAR_6,
         VAR_5, VAR_15);
  if (VAR_13)
   goto out;
 }


 VAR_10->wext.connect.channel = VAR_12;
 if (VAR_12 && !VAR_10->wext.connect.ssid_len) {
  struct cfg80211_chan_def VAR_16 = {
   .width = VAR_3,
   .center_freq1 = VAR_14,
  };

  VAR_16.chan = FUNC_7(&VAR_11->wiphy, VAR_14);
  if (VAR_16.chan)
   VAR_13 = FUNC_4(VAR_11, &VAR_16);
  else
   VAR_13 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_3(VAR_11, VAR_10);
 out:
 FUNC_11(VAR_10);
 FUNC_9(&VAR_11->sched_scan_mtx);
 FUNC_9(&VAR_11->devlist_mtx);
 FUNC_5(VAR_11);
 return VAR_13;
}
