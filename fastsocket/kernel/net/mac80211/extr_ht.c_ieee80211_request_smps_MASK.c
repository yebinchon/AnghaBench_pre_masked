
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_6__ {int driver_smps_mode; int request_smps_work; } ;
struct TYPE_5__ {TYPE_3__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; TYPE_1__* local; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct ieee80211_vif *VAR_3,
       enum ieee80211_smps_mode VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_3->type != VAR_2))
  return;

 if (FUNC_0(VAR_4 == VAR_1))
  VAR_4 = VAR_0;

 if (VAR_5->u.mgd.driver_smps_mode == VAR_4)
  return;

 VAR_5->u.mgd.driver_smps_mode = VAR_4;

 FUNC_1(&VAR_5->local->hw,
        &VAR_5->u.mgd.request_smps_work);
}
