
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int noack_map; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_0,
      struct net_device *VAR_1,
      u16 VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);

 VAR_3->noack_map = VAR_2;
 return 0;
}
