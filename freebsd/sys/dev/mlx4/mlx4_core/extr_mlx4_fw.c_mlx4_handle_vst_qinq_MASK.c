
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ vlan_proto; scalar_t__ default_vlan; scalar_t__ default_qos; } ;
struct TYPE_10__ {scalar_t__ vlan_proto; scalar_t__ default_vlan; scalar_t__ default_qos; } ;
struct mlx4_vport_oper_state {TYPE_5__ state; } ;
struct mlx4_slave_state {int vst_qinq_supported; int active; } ;
struct TYPE_8__ {struct mlx4_slave_state* slave_state; TYPE_2__* vf_admin; TYPE_1__* vf_oper; } ;
struct TYPE_9__ {TYPE_3__ master; } ;
struct mlx4_priv {int dev; TYPE_4__ mfunc; } ;
struct TYPE_7__ {struct mlx4_vport_state* vport; } ;
struct TYPE_6__ {struct mlx4_vport_oper_state* vport; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_priv*,int,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_priv *VAR_1, int VAR_2, int VAR_3)
{
 struct mlx4_vport_oper_state *VAR_4;
 struct mlx4_slave_state *VAR_5;
 struct mlx4_vport_state *VAR_6;
 int VAR_7;

 VAR_4 = &VAR_1->mfunc.master.vf_oper[VAR_2].vport[VAR_3];
 VAR_6 = &VAR_1->mfunc.master.vf_admin[VAR_2].vport[VAR_3];
 VAR_5 = &VAR_1->mfunc.master.slave_state[VAR_2];

 if ((VAR_6->vlan_proto != FUNC_0(VAR_0)) ||
     (!VAR_5->active))
  return 0;

 if (VAR_4->state.vlan_proto == VAR_6->vlan_proto &&
     VAR_4->state.default_vlan == VAR_6->default_vlan &&
     VAR_4->state.default_qos == VAR_6->default_qos)
  return 0;

 if (!VAR_5->vst_qinq_supported) {

  VAR_6->vlan_proto = VAR_4->state.vlan_proto;
  VAR_6->default_vlan = VAR_4->state.default_vlan;
  VAR_6->default_qos = VAR_4->state.default_qos;

  FUNC_2(&VAR_1->dev,
     "Slave %d does not support VST QinQ mode\n", VAR_2);
  return 0;
 }

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
 return VAR_7;
}
