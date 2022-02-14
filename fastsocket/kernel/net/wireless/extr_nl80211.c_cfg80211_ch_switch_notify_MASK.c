
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; int channel; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_chan_def {int chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_chan_def*,int ) ;
 int FUNC_2 (struct net_device*,struct cfg80211_chan_def*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_5 (struct wiphy*) ;

void FUNC_6(struct net_device *VAR_3,
          struct cfg80211_chan_def *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_3->ieee80211_ptr;
 struct wiphy *VAR_6 = VAR_5->wiphy;
 struct cfg80211_registered_device *VAR_7 = FUNC_5(VAR_6);

 FUNC_2(VAR_3, VAR_4);

 FUNC_3(VAR_5);

 if (FUNC_0(VAR_5->iftype != VAR_1 &&
      VAR_5->iftype != VAR_2))
  goto out;

 VAR_5->channel = VAR_4->chan;
 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_0);
out:
 FUNC_4(VAR_5);
 return;
}
