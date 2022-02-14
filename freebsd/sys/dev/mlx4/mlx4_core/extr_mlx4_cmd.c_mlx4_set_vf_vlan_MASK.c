
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_vport_state {int default_vlan; int default_qos; int qos_vport; scalar_t__ tx_rate; scalar_t__ vlan_proto; } ;
struct TYPE_12__ {scalar_t__ vlan_proto; } ;
struct mlx4_vport_oper_state {TYPE_6__ state; } ;
struct mlx4_slave_state {int vst_qinq_supported; scalar_t__ active; } ;
struct TYPE_10__ {TYPE_3__* vf_oper; TYPE_2__* vf_admin; struct mlx4_slave_state* slave_state; } ;
struct TYPE_11__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct TYPE_7__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef scalar_t__ __be16 ;
struct TYPE_9__ {struct mlx4_vport_oper_state* vport; } ;
struct TYPE_8__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int) ;
 int FUNC_2 (struct mlx4_dev*,int) ;
 int FUNC_3 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_4 (struct mlx4_dev*) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,int,struct mlx4_vport_state*) ;
 scalar_t__ FUNC_6 (struct mlx4_priv*,int,int) ;
 struct mlx4_priv* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,int,int) ;
 int FUNC_9 (struct mlx4_dev*,int,struct mlx4_vport_state*,int,int) ;

int FUNC_10(struct mlx4_dev *VAR_8, int VAR_9, int VAR_10, u16 VAR_11, u8 VAR_12,
       __be16 VAR_13)
{
 struct mlx4_priv *VAR_14 = FUNC_7(VAR_8);
 struct mlx4_vport_state *VAR_15;
 struct mlx4_slave_state *VAR_16;
 struct mlx4_vport_oper_state *VAR_17;
 int VAR_18;

 if ((!FUNC_4(VAR_8)) ||
     !(VAR_8->caps.flags2 & VAR_6))
  return -VAR_2;

 if ((VAR_11 > 4095) || (VAR_12 > 7))
  return -VAR_0;

 if (VAR_13 == FUNC_0(VAR_3) &&
     !(VAR_8->caps.flags2 & VAR_5))
  return -VAR_2;

 if (VAR_13 != FUNC_0(VAR_4) &&
     VAR_13 != FUNC_0(VAR_3))
  return -VAR_0;

 if ((VAR_13 == FUNC_0(VAR_3)) &&
     ((VAR_11 == 0) || (VAR_11 == VAR_7)))
  return -VAR_0;

 VAR_18 = FUNC_2(VAR_8, VAR_10);
 if (VAR_18 < 0)
  return -VAR_0;

 VAR_16 = &VAR_14->mfunc.master.slave_state[VAR_18];
 if ((VAR_13 == FUNC_0(VAR_3)) && (VAR_16->active) &&
     (!VAR_16->vst_qinq_supported)) {
  FUNC_1(VAR_8, "vf %d does not support VST QinQ mode\n", VAR_10);
  return -VAR_2;
 }
 VAR_9 = FUNC_8(VAR_8, VAR_18, VAR_9);
 VAR_15 = &VAR_14->mfunc.master.vf_admin[VAR_18].vport[VAR_9];
 VAR_17 = &VAR_14->mfunc.master.vf_oper[VAR_18].vport[VAR_9];

 if (!FUNC_9(VAR_8, VAR_9, VAR_15, VAR_11, VAR_12))
  return -VAR_1;

 if ((0 == VAR_11) && (0 == VAR_12))
  VAR_15->default_vlan = VAR_7;
 else
  VAR_15->default_vlan = VAR_11;
 VAR_15->default_qos = VAR_12;
 VAR_15->vlan_proto = VAR_13;




 if (FUNC_5(VAR_8, VAR_9, VAR_15) &&
     VAR_15->tx_rate)
  VAR_15->qos_vport = VAR_18;




 if ((VAR_13 == FUNC_0(VAR_3) &&
      VAR_17->state.vlan_proto != VAR_13) ||
     FUNC_6(VAR_14, VAR_18, VAR_9))
  FUNC_3(VAR_8,
     "updating vf %d port %d config will take effect on next VF restart\n",
     VAR_10, VAR_9);
 return 0;
}
