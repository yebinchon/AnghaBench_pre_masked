
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct mesh_conf {scalar_t__ mesh_pp_id; scalar_t__ mesh_pm_id; scalar_t__ mesh_cc_id; scalar_t__ mesh_sp_id; scalar_t__ mesh_auth_id; int meshid; int meshid_len; } ;
struct ieee802_11_elems {int mesh_config_len; scalar_t__* mesh_config; int mesh_id_len; int mesh_id; } ;
struct TYPE_2__ {struct mesh_conf* mconf; } ;
typedef int Boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static Boolean FUNC_1(struct wpa_supplicant *VAR_1,
        struct ieee802_11_elems *VAR_2)
{
 struct mesh_conf *VAR_3 = VAR_1->ifmsh->mconf;

 if (VAR_2->mesh_config_len < 5)
  return VAR_0;

 return (VAR_3->meshid_len == VAR_2->mesh_id_len &&
  FUNC_0(VAR_3->meshid, VAR_2->mesh_id,
     VAR_2->mesh_id_len) == 0 &&
  VAR_3->mesh_pp_id == VAR_2->mesh_config[0] &&
  VAR_3->mesh_pm_id == VAR_2->mesh_config[1] &&
  VAR_3->mesh_cc_id == VAR_2->mesh_config[2] &&
  VAR_3->mesh_sp_id == VAR_2->mesh_config[3] &&
  VAR_3->mesh_auth_id == VAR_2->mesh_config[4]);
}
