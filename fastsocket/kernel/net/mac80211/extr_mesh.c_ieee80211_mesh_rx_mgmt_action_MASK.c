
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct TYPE_5__ {int action_code; } ;
struct TYPE_6__ {TYPE_1__ self_prot; } ;
struct TYPE_7__ {int category; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; } ;







 int FUNC_0 (struct ieee80211_mgmt*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,size_t) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,size_t,struct ieee80211_rx_status*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_0,
       struct ieee80211_mgmt *VAR_1,
       size_t VAR_2,
       struct ieee80211_rx_status *VAR_3)
{
 switch (VAR_1->u.action.category) {
 case 131:
  switch (VAR_1->u.action.u.self_prot.action_code) {
  case 128:
  case 130:
  case 129:
   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
   break;
  }
  break;
 case 132:
  if (FUNC_0(VAR_1))
   FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 }
}
