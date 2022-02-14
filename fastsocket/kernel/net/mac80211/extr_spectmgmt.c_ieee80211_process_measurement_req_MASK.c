
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_5__ {int dialog_token; int msr_elem; } ;
struct TYPE_6__ {TYPE_1__ measurement; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; int bssid; int sa; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,int *,int ,int ,int ) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0,
           struct ieee80211_mgmt *VAR_1,
           size_t VAR_2)
{







 FUNC_0(VAR_0,
   &VAR_1->u.action.u.measurement.msr_elem,
   VAR_1->sa, VAR_1->bssid,
   VAR_1->u.action.u.measurement.dialog_token);
}
