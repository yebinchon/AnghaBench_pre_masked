
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int beacon; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct cfg80211_beacon_data {int dummy; } ;
struct beacon_data {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct cfg80211_beacon_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 struct beacon_data* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_1, struct net_device *VAR_2,
       struct cfg80211_beacon_data *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4;
 struct beacon_data *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_2);

 VAR_5 = FUNC_3(VAR_4->u.ap.beacon);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_2(VAR_4, VAR_6);
 return 0;
}
