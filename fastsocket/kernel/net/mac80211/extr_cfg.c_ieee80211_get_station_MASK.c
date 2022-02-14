
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int dummy; } ;
struct sta_info {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sta_info* FUNC_3 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_4 (struct sta_info*,struct station_info*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_1, struct net_device *VAR_2,
     u8 *VAR_3, struct station_info *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_0(VAR_2);
 struct ieee80211_local *VAR_6 = VAR_5->local;
 struct sta_info *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_1(&VAR_6->sta_mtx);

 VAR_7 = FUNC_3(VAR_5, VAR_3);
 if (VAR_7) {
  VAR_8 = 0;
  FUNC_4(VAR_7, VAR_4);
 }

 FUNC_2(&VAR_6->sta_mtx);

 return VAR_8;
}
