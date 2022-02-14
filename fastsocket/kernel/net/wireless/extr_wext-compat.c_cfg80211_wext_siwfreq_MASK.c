
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int dummy; } ;
struct cfg80211_registered_device {int devlist_mtx; int wiphy; } ;
struct cfg80211_chan_def {int center_freq1; void* chan; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct net_device*,struct iw_request_info*,struct iw_freq*,char*) ;
 int FUNC_1 (struct net_device*,struct iw_request_info*,struct iw_freq*,char*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct cfg80211_chan_def*) ;
 int FUNC_4 (int ,struct iw_freq*) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cfg80211_registered_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     struct iw_freq *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_8 = FUNC_8(VAR_7->wiphy);
 struct cfg80211_chan_def VAR_9 = {
  .width = VAR_2,
 };
 int VAR_10, VAR_11;

 switch (VAR_7->iftype) {
 case 128:
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 case 131:
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 case 129:
  VAR_10 = FUNC_4(VAR_7->wiphy, VAR_5);
  if (VAR_10 < 0)
   return VAR_10;
  if (VAR_10 == 0)
   return -VAR_0;
  VAR_9.center_freq1 = VAR_10;
  VAR_9.chan = FUNC_5(&VAR_8->wiphy, VAR_10);
  if (!VAR_9.chan)
   return -VAR_0;
  FUNC_6(&VAR_8->devlist_mtx);
  VAR_11 = FUNC_3(VAR_8, &VAR_9);
  FUNC_7(&VAR_8->devlist_mtx);
  return VAR_11;
 case 130:
  VAR_10 = FUNC_4(VAR_7->wiphy, VAR_5);
  if (VAR_10 < 0)
   return VAR_10;
  if (VAR_10 == 0)
   return -VAR_0;
  VAR_9.center_freq1 = VAR_10;
  VAR_9.chan = FUNC_5(&VAR_8->wiphy, VAR_10);
  if (!VAR_9.chan)
   return -VAR_0;
  FUNC_6(&VAR_8->devlist_mtx);
  VAR_11 = FUNC_2(VAR_8, VAR_7, &VAR_9);
  FUNC_7(&VAR_8->devlist_mtx);
  return VAR_11;
 default:
  return -VAR_1;
 }
}
