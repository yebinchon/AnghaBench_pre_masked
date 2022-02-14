
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_managed {int mtx; int timer; scalar_t__ auth_data; scalar_t__ assoc_data; int chswitch_work; int csa_connection_drop_work; int request_smps_work; int beacon_connection_loss_work; int monitor_work; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_if_managed *VAR_1 = &VAR_0->u.mgd;






 FUNC_0(&VAR_1->monitor_work);
 FUNC_0(&VAR_1->beacon_connection_loss_work);
 FUNC_0(&VAR_1->request_smps_work);
 FUNC_0(&VAR_1->csa_connection_drop_work);
 FUNC_0(&VAR_1->chswitch_work);

 FUNC_4(&VAR_1->mtx);
 if (VAR_1->assoc_data)
  FUNC_2(VAR_0, 0);
 if (VAR_1->auth_data)
  FUNC_3(VAR_0, 0);
 FUNC_1(&VAR_1->timer);
 FUNC_5(&VAR_1->mtx);
}
