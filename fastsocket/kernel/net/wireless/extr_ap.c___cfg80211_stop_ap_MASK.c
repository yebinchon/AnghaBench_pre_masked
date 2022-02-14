
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; scalar_t__ ssid_len; int * channel; scalar_t__ beacon_interval; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int stop_ap; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct cfg80211_registered_device *VAR_4,
         struct net_device *VAR_5)
{
 struct wireless_dev *VAR_6 = VAR_5->ieee80211_ptr;
 int VAR_7;

 FUNC_0(VAR_6);

 if (!VAR_4->ops->stop_ap)
  return -VAR_1;

 if (VAR_5->ieee80211_ptr->iftype != VAR_2 &&
     VAR_5->ieee80211_ptr->iftype != VAR_3)
  return -VAR_1;

 if (!VAR_6->beacon_interval)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_7) {
  VAR_6->beacon_interval = 0;
  VAR_6->channel = ((void*)0);
  VAR_6->ssid_len = 0;
 }

 return VAR_7;
}
