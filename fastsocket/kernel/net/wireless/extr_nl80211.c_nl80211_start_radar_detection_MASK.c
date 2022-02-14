
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int cac_started; int cac_start_time; TYPE_2__* channel; int iftype; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int devlist_mtx; int wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int devlist_mtx; int wiphy; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_chan_def {TYPE_2__* chan; int width; } ;
struct TYPE_4__ {scalar_t__ dfs_state; } ;
struct TYPE_3__ {int (* start_radar_detection ) (int *,struct net_device*,struct cfg80211_chan_def*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct net_device*,struct wireless_dev*,int ,TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,struct cfg80211_chan_def*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,struct genl_info*,struct cfg80211_chan_def*) ;
 int FUNC_6 (int *,struct net_device*,struct cfg80211_chan_def*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6,
      struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct net_device *VAR_9 = VAR_7->user_ptr[1];
 struct wireless_dev *VAR_10 = VAR_9->ieee80211_ptr;
 struct cfg80211_chan_def VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_8, VAR_7, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_10->cac_started)
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_10->wiphy, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_12 == 0)
  return -VAR_2;

 if (VAR_11.chan->dfs_state != VAR_4)
  return -VAR_2;

 if (!VAR_8->ops->start_radar_detection)
  return -VAR_3;

 FUNC_3(&VAR_8->devlist_mtx);
 VAR_12 = FUNC_1(VAR_8, VAR_10, VAR_10->iftype,
        VAR_11.chan, VAR_0,
        FUNC_0(VAR_11.width));
 if (VAR_12)
  goto err_locked;

 VAR_12 = VAR_8->ops->start_radar_detection(&VAR_8->wiphy, VAR_9, &VAR_11);
 if (!VAR_12) {
  VAR_10->channel = VAR_11.chan;
  VAR_10->cac_started = 1;
  VAR_10->cac_start_time = VAR_5;
 }
err_locked:
 FUNC_4(&VAR_8->devlist_mtx);

 return VAR_12;
}
