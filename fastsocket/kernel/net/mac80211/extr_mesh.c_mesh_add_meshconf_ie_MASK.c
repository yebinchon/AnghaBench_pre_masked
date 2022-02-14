
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_if_mesh {scalar_t__ adjusting_tbtt; scalar_t__ ps_peers_deep_sleep; scalar_t__ accepting_plinks; int estab_plinks; int mesh_auth_id; int mesh_sp_id; int mesh_cc_id; int mesh_pm_id; int mesh_pp_id; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_meshconf_ie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__* FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_6,
    struct sk_buff *VAR_7)
{
 struct ieee80211_if_mesh *VAR_8 = &VAR_6->u.mesh;
 u8 *VAR_9, VAR_10;
 u8 VAR_11 = sizeof(struct ieee80211_meshconf_ie);

 if (FUNC_2(VAR_7) < 2 + VAR_11)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_7, 2 + VAR_11);
 *VAR_9++ = VAR_5;
 *VAR_9++ = VAR_11;


 *VAR_9++ = VAR_8->mesh_pp_id;

 *VAR_9++ = VAR_8->mesh_pm_id;

 *VAR_9++ = VAR_8->mesh_cc_id;

 *VAR_9++ = VAR_8->mesh_sp_id;

 *VAR_9++ = VAR_8->mesh_auth_id;

 VAR_10 = FUNC_0(&VAR_8->estab_plinks);

 VAR_10 = (VAR_10 > 15) ? 15 : VAR_10;
 *VAR_9++ = VAR_10 << 1;

 *VAR_9 = VAR_2;
 *VAR_9 |= VAR_8->accepting_plinks ?
   VAR_1 : 0x00;

 *VAR_9 |= VAR_8->ps_peers_deep_sleep ?
   VAR_3 : 0x00;
 *VAR_9++ |= VAR_8->adjusting_tbtt ?
   VAR_4 : 0x00;
 *VAR_9++ = 0x00;

 return 0;
}
