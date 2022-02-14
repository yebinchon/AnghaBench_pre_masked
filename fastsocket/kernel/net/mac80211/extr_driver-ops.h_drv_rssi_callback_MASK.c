
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef enum ieee80211_rssi_event { ____Placeholder_ieee80211_rssi_event } ieee80211_rssi_event ;
struct TYPE_2__ {int (* rssi_callback ) (int *,int *,int const) ;} ;


 int FUNC_0 (int *,int *,int const) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int const) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_local *VAR_0,
         struct ieee80211_sub_if_data *VAR_1,
         const enum ieee80211_rssi_event VAR_2)
{
 FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->rssi_callback)
  VAR_0->ops->rssi_callback(&VAR_0->hw, &VAR_1->vif, VAR_2);
 FUNC_1(VAR_0);
}
