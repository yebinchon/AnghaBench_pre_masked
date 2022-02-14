
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int const*,int const*,int ) ;
 int FUNC_1 (struct net_device*,int const*) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

void FUNC_3(struct net_device *VAR_0, const u8 *VAR_1,
          const u8 *VAR_2, gfp_t VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_0->ieee80211_ptr;
 struct wiphy *VAR_5 = VAR_4->wiphy;
 struct cfg80211_registered_device *VAR_6 = FUNC_2(VAR_5);

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3);
}
