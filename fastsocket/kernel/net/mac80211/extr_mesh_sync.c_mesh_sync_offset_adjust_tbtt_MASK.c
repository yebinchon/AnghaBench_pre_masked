
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_mesh {scalar_t__ mesh_sp_id; scalar_t__ sync_offset_clockdrift_max; int adjusting_tbtt; int sync_offset_lock; int wrkq_flags; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*,long long) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_if_mesh *VAR_4 = &VAR_3->u.mesh;

 FUNC_1(VAR_4->mesh_sp_id != VAR_0);
 FUNC_0(!FUNC_3());

 FUNC_5(&VAR_4->sync_offset_lock);

 if (VAR_4->sync_offset_clockdrift_max > VAR_2) {





  FUNC_2(VAR_3,
     "TBTT : kicking off TBTT adjustment with clockdrift_max=%lld\n",
     VAR_4->sync_offset_clockdrift_max);
  FUNC_4(VAR_1, &VAR_4->wrkq_flags);

  VAR_4->adjusting_tbtt = 1;
 } else {
  FUNC_2(VAR_3,
     "TBTT : max clockdrift=%lld; too small to adjust\n",
     (long long)VAR_4->sync_offset_clockdrift_max);
  VAR_4->sync_offset_clockdrift_max = 0;

  VAR_4->adjusting_tbtt = 0;
 }
 FUNC_6(&VAR_4->sync_offset_lock);
}
