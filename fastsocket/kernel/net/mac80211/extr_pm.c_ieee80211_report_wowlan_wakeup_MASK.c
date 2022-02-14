
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int wdev; } ;
struct cfg80211_wowlan_wakeup {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,struct cfg80211_wowlan_wakeup*,int ) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_vif*) ;

void FUNC_2(struct ieee80211_vif *VAR_0,
        struct cfg80211_wowlan_wakeup *VAR_1,
        gfp_t VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_3->wdev, VAR_1, VAR_2);
}
