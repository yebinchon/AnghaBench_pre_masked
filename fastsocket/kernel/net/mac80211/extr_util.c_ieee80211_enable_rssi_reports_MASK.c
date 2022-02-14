
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int,int) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct ieee80211_vif *VAR_0,
        int VAR_1,
        int VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_1 == VAR_2 ||
  VAR_1 > VAR_2);

 FUNC_1(VAR_3, VAR_1,
           VAR_2);
}
