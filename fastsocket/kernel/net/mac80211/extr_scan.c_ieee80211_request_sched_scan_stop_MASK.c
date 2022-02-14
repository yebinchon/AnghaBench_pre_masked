
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int mtx; int sched_scan_sdata; TYPE_1__* ops; } ;
struct TYPE_2__ {int sched_scan_stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_1->local;
 int VAR_3 = 0;

 FUNC_1(&VAR_2->mtx);

 if (!VAR_2->ops->sched_scan_stop) {
  VAR_3 = -VAR_0;
  goto out;
 }

 if (FUNC_3(VAR_2->sched_scan_sdata))
  FUNC_0(VAR_2, VAR_1);

out:
 FUNC_2(&VAR_2->mtx);

 return VAR_3;
}
