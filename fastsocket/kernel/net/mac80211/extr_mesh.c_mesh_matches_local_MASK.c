
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee802_11_elems {int ht_operation; TYPE_2__* mesh_config; int mesh_id_len; int mesh_id; } ;
struct TYPE_10__ {int chan; } ;
struct TYPE_8__ {scalar_t__ basic_rates; TYPE_5__ chandef; } ;
struct TYPE_9__ {TYPE_3__ bss_conf; } ;
struct ieee80211_if_mesh {scalar_t__ mesh_pp_id; scalar_t__ mesh_pm_id; scalar_t__ mesh_cc_id; scalar_t__ mesh_sp_id; scalar_t__ mesh_auth_id; int mesh_id; int mesh_id_len; } ;
struct TYPE_6__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_local {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_7__ {scalar_t__ meshconf_psel; scalar_t__ meshconf_pmetric; scalar_t__ meshconf_congest; scalar_t__ meshconf_synch; scalar_t__ meshconf_auth; } ;


 int FUNC_0 (TYPE_5__*,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int ,int ,struct cfg80211_chan_def*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee802_11_elems*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

bool FUNC_5(struct ieee80211_sub_if_data *VAR_0,
   struct ieee802_11_elems *VAR_1)
{
 struct ieee80211_if_mesh *VAR_2 = &VAR_0->u.mesh;
 struct ieee80211_local *VAR_3 = VAR_0->local;
 u32 VAR_4 = 0;
 struct cfg80211_chan_def VAR_5;
 if (!(VAR_2->mesh_id_len == VAR_1->mesh_id_len &&
      FUNC_4(VAR_2->mesh_id, VAR_1->mesh_id, VAR_1->mesh_id_len) == 0 &&
      (VAR_2->mesh_pp_id == VAR_1->mesh_config->meshconf_psel) &&
      (VAR_2->mesh_pm_id == VAR_1->mesh_config->meshconf_pmetric) &&
      (VAR_2->mesh_cc_id == VAR_1->mesh_config->meshconf_congest) &&
      (VAR_2->mesh_sp_id == VAR_1->mesh_config->meshconf_synch) &&
      (VAR_2->mesh_auth_id == VAR_1->mesh_config->meshconf_auth)))
  return 0;

 FUNC_3(VAR_3, VAR_1, FUNC_1(VAR_0),
    &VAR_4);

 if (VAR_0->vif.bss_conf.basic_rates != VAR_4)
  return 0;

 FUNC_2(VAR_0->vif.bss_conf.chandef.chan,
         VAR_1->ht_operation, &VAR_5);

 if (!FUNC_0(&VAR_0->vif.bss_conf.chandef,
      &VAR_5))
  return 0;

 return 1;
}
