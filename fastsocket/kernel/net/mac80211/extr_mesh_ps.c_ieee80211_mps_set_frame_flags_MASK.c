
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {scalar_t__ plink_state; int local_pm; } ;
struct TYPE_3__ {int nonpeer_pm; scalar_t__ ps_peers_deep_sleep; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct ieee80211_sub_if_data *VAR_5,
       struct sta_info *VAR_6,
       struct ieee80211_hdr *VAR_7)
{
 enum nl80211_mesh_power_mode VAR_8;
 u8 *VAR_9;

 if (FUNC_0(FUNC_5(VAR_7->addr1) &&
      FUNC_3(VAR_7->frame_control) &&
      !VAR_6))
  return;

 if (FUNC_5(VAR_7->addr1) &&
     FUNC_3(VAR_7->frame_control) &&
     VAR_6->plink_state == VAR_4)
  VAR_8 = VAR_6->local_pm;
 else
  VAR_8 = VAR_5->u.mesh.nonpeer_pm;

 if (VAR_8 == VAR_2)
  VAR_7->frame_control &= FUNC_1(~VAR_0);
 else
  VAR_7->frame_control |= FUNC_1(VAR_0);

 if (!FUNC_3(VAR_7->frame_control))
  return;

 VAR_9 = FUNC_2(VAR_7);

 if ((FUNC_5(VAR_7->addr1) &&
      VAR_8 == VAR_3) ||
     (FUNC_4(VAR_7->addr1) &&
      VAR_5->u.mesh.ps_peers_deep_sleep > 0))
  VAR_9[1] |= (VAR_1 >> 8);
 else
  VAR_9[1] &= ~(VAR_1 >> 8);
}
