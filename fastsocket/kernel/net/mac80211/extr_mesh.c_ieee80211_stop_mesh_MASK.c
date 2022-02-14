
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bc_buf; } ;
struct ieee80211_if_mesh {int mesh_path_timer; int mesh_path_root_timer; int housekeeping_timer; TYPE_3__ ps; int mtx; int beacon; scalar_t__ mesh_id_len; } ;
struct TYPE_8__ {struct ieee80211_if_mesh mesh; } ;
struct TYPE_5__ {int enable_beacon; } ;
struct TYPE_6__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {int work; TYPE_4__ u; int state; TYPE_2__ vif; int dev; struct ieee80211_local* local; } ;
struct ieee80211_local {int iff_allmultis; int fif_other_bss; int total_ps_buffered; } ;
struct beacon_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_5 (struct ieee80211_local*) ;
 int FUNC_6 (struct beacon_data*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 struct beacon_data* FUNC_13 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ieee80211_sub_if_data*) ;

void FUNC_17(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_3->local;
 struct ieee80211_if_mesh *VAR_5 = &VAR_3->u.mesh;
 struct beacon_data *VAR_6;

 FUNC_11(VAR_3->dev);


 VAR_5->mesh_id_len = 0;
 VAR_3->vif.bss_conf.enable_beacon = 0;
 FUNC_2(VAR_1, &VAR_3->state);
 FUNC_4(VAR_3, VAR_0);
 FUNC_9(&VAR_5->mtx);
 VAR_6 = FUNC_13(VAR_5->beacon,
     FUNC_7(&VAR_5->mtx));
 FUNC_12(VAR_5->beacon, ((void*)0));
 FUNC_6(VAR_6, VAR_2);
 FUNC_10(&VAR_5->mtx);


 FUNC_16(VAR_3);
 FUNC_8(VAR_3);


 VAR_4->total_ps_buffered -= FUNC_14(&VAR_5->ps.bc_buf);
 FUNC_15(&VAR_5->ps.bc_buf);

 FUNC_3(&VAR_3->u.mesh.housekeeping_timer);
 FUNC_3(&VAR_3->u.mesh.mesh_path_root_timer);
 FUNC_3(&VAR_3->u.mesh.mesh_path_timer);







 FUNC_1(&VAR_3->work);

 VAR_4->fif_other_bss--;
 FUNC_0(&VAR_4->iff_allmultis);
 FUNC_5(VAR_4);
}
