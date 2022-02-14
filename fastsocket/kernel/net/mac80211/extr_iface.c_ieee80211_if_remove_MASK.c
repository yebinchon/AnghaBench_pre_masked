
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int wdev; scalar_t__ dev; TYPE_1__* local; int list; } ;
struct TYPE_2__ {int iflist_mtx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(struct ieee80211_sub_if_data *VAR_0)
{
 FUNC_0();

 FUNC_4(&VAR_0->local->iflist_mtx);
 FUNC_3(&VAR_0->list);
 FUNC_5(&VAR_0->local->iflist_mtx);

 FUNC_6();

 if (VAR_0->dev) {
  FUNC_7(VAR_0->dev);
 } else {
  FUNC_1(&VAR_0->wdev);
  FUNC_2(VAR_0);
 }
}
