
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0,
     struct net_device *VAR_1,
     u8 VAR_2, bool VAR_3,
     bool VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);

 return 0;
}
