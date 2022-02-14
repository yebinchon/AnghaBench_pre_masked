
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int const*,size_t) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int const*,size_t,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_5 (struct wiphy*) ;

void FUNC_6(struct net_device *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_1->ieee80211_ptr;
 struct wiphy *VAR_5 = VAR_4->wiphy;
 struct cfg80211_registered_device *VAR_6 = FUNC_5(VAR_5);

 FUNC_2(VAR_1);
 FUNC_3(VAR_4);

 FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3, VAR_0);
 FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_4(VAR_4);
}
