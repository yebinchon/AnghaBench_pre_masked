
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int mac; int default_vlan; } ;
struct mlx4_vport_oper_state {scalar_t__ vlan_idx; scalar_t__ mac_idx; TYPE_5__ state; } ;
struct TYPE_9__ {int num_ports; } ;
struct TYPE_14__ {TYPE_1__ caps; } ;
struct TYPE_11__ {TYPE_2__* vf_oper; } ;
struct TYPE_12__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_6__ dev; TYPE_4__ mfunc; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_10__ {struct mlx4_vport_oper_state* vport; int * smi_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,int,int ) ;
 int FUNC_1 (TYPE_6__*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct mlx4_active_ports FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx4_priv *VAR_2, int VAR_3)
{
 int VAR_4;
 struct mlx4_vport_oper_state *VAR_5;
 struct mlx4_active_ports VAR_6 = FUNC_4(
   &VAR_2->dev, VAR_3);
 int VAR_7 = FUNC_3(VAR_6.ports,
          VAR_2->dev.caps.num_ports) + 1;
 int VAR_8 = VAR_7 - 1 +
  FUNC_2(VAR_6.ports, VAR_2->dev.caps.num_ports);


 for (VAR_4 = VAR_7; VAR_4 <= VAR_8; VAR_4++) {
  if (!FUNC_5(VAR_4 - 1, VAR_6.ports))
   continue;
  VAR_2->mfunc.master.vf_oper[VAR_3].smi_enabled[VAR_4] =
   VAR_0;
  VAR_5 = &VAR_2->mfunc.master.vf_oper[VAR_3].vport[VAR_4];
  if (VAR_1 != VAR_5->vlan_idx) {
   FUNC_1(&VAR_2->dev,
            VAR_4, VAR_5->state.default_vlan);
   VAR_5->vlan_idx = VAR_1;
  }
  if (VAR_1 != VAR_5->mac_idx) {
   FUNC_0(&VAR_2->dev, VAR_4, VAR_5->state.mac);
   VAR_5->mac_idx = VAR_1;
  }
 }
 return;
}
