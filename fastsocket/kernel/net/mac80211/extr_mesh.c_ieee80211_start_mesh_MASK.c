
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int enable_beacon; int basic_rates; int ht_operation_mode; } ;
struct TYPE_8__ {TYPE_3__ bss_conf; } ;
struct TYPE_6__ {int ht_opmode; } ;
struct ieee80211_if_mesh {int adjusting_tbtt; TYPE_2__ mshcfg; int wrkq_flags; scalar_t__ sync_offset_clockdrift_max; int mesh_sp_id; int sync_ops; scalar_t__ mesh_auth_id; scalar_t__ mesh_cc_id; } ;
struct TYPE_5__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {int dev; TYPE_4__ vif; int work; struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_local {int hw; int iff_allmultis; int fif_other_bss; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_local*,int) ;
 scalar_t__ FUNC_5 (struct ieee80211_if_mesh*) ;
 int FUNC_6 (struct ieee80211_if_mesh*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct ieee80211_sub_if_data*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;

int FUNC_13(struct ieee80211_sub_if_data *VAR_7)
{
 struct ieee80211_if_mesh *VAR_8 = &VAR_7->u.mesh;
 struct ieee80211_local *VAR_9 = VAR_7->local;
 u32 VAR_10 = VAR_1 |
        VAR_2 |
        VAR_4 |
        VAR_0 |
        VAR_3;
 enum ieee80211_band VAR_11 = FUNC_3(VAR_7);

 VAR_9->fif_other_bss++;

 FUNC_0(&VAR_9->iff_allmultis);
 FUNC_2(VAR_9);

 VAR_8->mesh_cc_id = 0;
 VAR_8->mesh_auth_id = 0;

 VAR_8->sync_ops = FUNC_7(VAR_8->mesh_sp_id);
 VAR_8->adjusting_tbtt = 0;
 VAR_8->sync_offset_clockdrift_max = 0;
 FUNC_12(VAR_6, &VAR_8->wrkq_flags);
 FUNC_6(VAR_8);
 FUNC_9(&VAR_9->hw, &VAR_7->work);
 VAR_7->vif.bss_conf.ht_operation_mode =
    VAR_8->mshcfg.ht_opmode;
 VAR_7->vif.bss_conf.enable_beacon = 1;
 VAR_7->vif.bss_conf.basic_rates =
  FUNC_4(VAR_9, VAR_11);

 VAR_10 |= FUNC_8(VAR_7);

 if (FUNC_5(VAR_8)) {
  FUNC_10(VAR_7);
  return -VAR_5;
 }

 FUNC_1(VAR_7, VAR_10);

 FUNC_11(VAR_7->dev);
 return 0;
}
