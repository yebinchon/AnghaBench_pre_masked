
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int dev; } ;
typedef int gfp_t ;
typedef enum nl80211_cqm_rssi_threshold_event { ____Placeholder_nl80211_cqm_rssi_threshold_event } nl80211_cqm_rssi_threshold_event ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct ieee80211_vif *VAR_0,
          enum nl80211_cqm_rssi_threshold_event VAR_1,
          gfp_t VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_3, VAR_1);

 FUNC_0(VAR_3->dev, VAR_1, VAR_2);
}
