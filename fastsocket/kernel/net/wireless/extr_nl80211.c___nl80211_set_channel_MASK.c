
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_chan_def {int dummy; } ;
struct wireless_dev {int iftype; struct cfg80211_chan_def preset_chandef; int beacon_interval; } ;
struct genl_info {int dummy; } ;
struct cfg80211_registered_device {int devlist_mtx; int wiphy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct cfg80211_chan_def*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct genl_info*,struct cfg80211_chan_def*) ;

__attribute__((used)) static int FUNC_7(struct cfg80211_registered_device *VAR_3,
     struct wireless_dev *VAR_4,
     struct genl_info *VAR_5)
{
 struct cfg80211_chan_def VAR_6;
 int VAR_7;
 enum nl80211_iftype VAR_8 = 129;

 if (VAR_4)
  VAR_8 = VAR_4->iftype;

 if (!FUNC_5(VAR_4))
  return -VAR_2;

 VAR_7 = FUNC_6(VAR_3, VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(&VAR_3->devlist_mtx);
 switch (VAR_8) {
 case 131:
 case 128:
  if (VAR_4->beacon_interval) {
   VAR_7 = -VAR_0;
   break;
  }
  if (!FUNC_0(&VAR_3->wiphy, &VAR_6)) {
   VAR_7 = -VAR_1;
   break;
  }
  VAR_4->preset_chandef = VAR_6;
  VAR_7 = 0;
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_6);
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_3, &VAR_6);
  break;
 default:
  VAR_7 = -VAR_1;
 }
 FUNC_4(&VAR_3->devlist_mtx);

 return VAR_7;
}
