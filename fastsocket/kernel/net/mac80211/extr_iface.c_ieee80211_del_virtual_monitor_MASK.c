
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_local {int iflist_mtx; int monitor_sdata; TYPE_1__ hw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 struct ieee80211_sub_if_data* FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

void FUNC_10(struct ieee80211_local *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2;

 if (!(VAR_1->hw.flags & VAR_0))
  return;

 FUNC_0();

 FUNC_5(&VAR_1->iflist_mtx);

 VAR_2 = FUNC_8(VAR_1->monitor_sdata,
       FUNC_4(&VAR_1->iflist_mtx));
 if (!VAR_2) {
  FUNC_6(&VAR_1->iflist_mtx);
  return;
 }

 FUNC_7(VAR_1->monitor_sdata, ((void*)0));
 FUNC_6(&VAR_1->iflist_mtx);

 FUNC_9();

 FUNC_2(VAR_2);

 FUNC_1(VAR_1, VAR_2);

 FUNC_3(VAR_2);
}
