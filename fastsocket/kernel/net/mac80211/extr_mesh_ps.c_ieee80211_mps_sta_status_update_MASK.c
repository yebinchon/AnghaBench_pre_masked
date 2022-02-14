
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int addr; } ;
struct sta_info {scalar_t__ plink_state; scalar_t__ peer_pm; int nonpeer_pm; TYPE_4__ sta; TYPE_5__* sdata; } ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;
struct TYPE_6__ {int num_sta_ps; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_8__ {TYPE_2__ mesh; } ;
struct TYPE_10__ {TYPE_3__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sta_info*,int ) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (TYPE_5__*,char*,int ) ;
 int FUNC_4 (struct sta_info*,int ) ;
 int FUNC_5 (struct sta_info*,int ) ;

void FUNC_6(struct sta_info *VAR_6)
{
 enum nl80211_mesh_power_mode VAR_7;
 bool VAR_8;





 if (VAR_6->plink_state == VAR_2 &&
     VAR_6->peer_pm != VAR_1)
  VAR_7 = VAR_6->peer_pm;
 else
  VAR_7 = VAR_6->nonpeer_pm;

 VAR_8 = (VAR_7 != VAR_0);


 if (FUNC_5(VAR_6, VAR_5) == VAR_8)
  return;

 if (VAR_8) {
  FUNC_4(VAR_6, VAR_5);
  FUNC_0(&VAR_6->sdata->u.mesh.ps.num_sta_ps);
  FUNC_3(VAR_6->sdata, "start PS buffering frames towards %pM\n",
   VAR_6->sta.addr);
 } else {
  FUNC_2(VAR_6);
 }


 if (VAR_6->plink_state != VAR_2) {
  FUNC_1(VAR_6, VAR_3);
  FUNC_1(VAR_6, VAR_4);
 } else if (!VAR_8) {
  FUNC_1(VAR_6, VAR_3);
 }
}
