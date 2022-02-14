
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int ssid_len; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*) ;

int FUNC_3(struct cfg80211_registered_device *VAR_1,
     struct net_device *VAR_2, bool VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_2->ieee80211_ptr;
 int VAR_5;

 FUNC_0(VAR_4);

 if (!VAR_4->ssid_len)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_1, VAR_2);

 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_2, VAR_3);

 return 0;
}
