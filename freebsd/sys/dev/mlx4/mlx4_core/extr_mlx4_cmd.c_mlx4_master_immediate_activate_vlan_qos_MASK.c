
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ vlan_proto; scalar_t__ qos_vport; int default_qos; scalar_t__ default_vlan; } ;
struct TYPE_12__ {scalar_t__ vlan_proto; scalar_t__ qos_vport; scalar_t__ default_vlan; int default_qos; } ;
struct mlx4_vport_oper_state {int vlan_idx; TYPE_5__ state; } ;
struct mlx4_vf_immed_vlan_work {int flags; int orig_vlan_ix; int port; int slave; scalar_t__ qos_vport; int vlan_ix; scalar_t__ vlan_proto; int work; struct mlx4_priv* priv; scalar_t__ vlan_id; int qos; scalar_t__ orig_vlan_id; } ;
struct TYPE_13__ {int comm_wq; TYPE_3__* slave_state; TYPE_2__* vf_admin; TYPE_1__* vf_oper; } ;
struct TYPE_14__ {TYPE_6__ master; } ;
struct TYPE_11__ {int flags2; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct mlx4_priv {TYPE_7__ mfunc; struct mlx4_dev dev; } ;
struct TYPE_10__ {scalar_t__ active; } ;
struct TYPE_9__ {struct mlx4_vport_state* vport; } ;
struct TYPE_8__ {struct mlx4_vport_oper_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mlx4_dev*,int,scalar_t__,int*) ;
 int FUNC_2 (struct mlx4_vf_immed_vlan_work*) ;
 struct mlx4_vf_immed_vlan_work* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx4_dev*,char*,int,int,...) ;
 int VAR_8 ;
 int FUNC_5 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct mlx4_priv *VAR_9,
         int VAR_10, int VAR_11)
{
 struct mlx4_vport_oper_state *VAR_12;
 struct mlx4_vport_state *VAR_13;
 struct mlx4_vf_immed_vlan_work *VAR_14;
 struct mlx4_dev *VAR_15 = &VAR_9->dev;
 int VAR_16;
 int VAR_17 = VAR_7;

 VAR_12 = &VAR_9->mfunc.master.vf_oper[VAR_10].vport[VAR_11];
 VAR_13 = &VAR_9->mfunc.master.vf_admin[VAR_10].vport[VAR_11];

 if (VAR_12->state.default_vlan == VAR_13->default_vlan &&
     VAR_12->state.default_qos == VAR_13->default_qos &&
     VAR_12->state.vlan_proto == VAR_13->vlan_proto &&
     VAR_12->state.qos_vport == VAR_13->qos_vport)
  return 0;

 if (!(VAR_9->mfunc.master.slave_state[VAR_10].active &&
       VAR_15->caps.flags2 & VAR_2)) {



  return -1;
 }

 FUNC_4(VAR_15, "updating immediately admin params slave %d port %d\n",
   VAR_10, VAR_11);
 FUNC_4(VAR_15, "vlan %d QoS %d link down\n",
   VAR_13->default_vlan, VAR_13->default_qos);

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 if (VAR_12->state.default_vlan != VAR_13->default_vlan) {
  if (VAR_6 != VAR_13->default_vlan) {
   VAR_16 = FUNC_1(&VAR_9->dev, VAR_11,
         VAR_13->default_vlan,
         &VAR_17);
   if (VAR_16) {
    FUNC_2(VAR_14);
    FUNC_5(&VAR_9->dev,
       "No vlan resources slave %d, port %d\n",
       VAR_10, VAR_11);
    return VAR_16;
   }
  } else {
   VAR_17 = VAR_7;
  }
  VAR_14->flags |= VAR_5;
  FUNC_4(&VAR_9->dev,
    "alloc vlan %d idx  %d slave %d port %d\n",
    (int)(VAR_13->default_vlan),
    VAR_17, VAR_10, VAR_11);
 }


 VAR_14->orig_vlan_id = VAR_12->state.default_vlan;
 VAR_14->orig_vlan_ix = VAR_12->vlan_idx;


 if (VAR_12->state.default_qos != VAR_13->default_qos)
  VAR_14->flags |= VAR_4;

 if (VAR_14->flags & VAR_5)
  VAR_12->vlan_idx = VAR_17;

 VAR_12->state.default_vlan = VAR_13->default_vlan;
 VAR_12->state.default_qos = VAR_13->default_qos;
 VAR_12->state.vlan_proto = VAR_13->vlan_proto;
 VAR_12->state.qos_vport = VAR_13->qos_vport;

 if (1 )
  VAR_14->flags |= VAR_3;


 VAR_14->port = VAR_11;
 VAR_14->slave = VAR_10;
 VAR_14->qos = VAR_12->state.default_qos;
 VAR_14->qos_vport = VAR_12->state.qos_vport;
 VAR_14->vlan_id = VAR_12->state.default_vlan;
 VAR_14->vlan_ix = VAR_12->vlan_idx;
 VAR_14->vlan_proto = VAR_12->state.vlan_proto;
 VAR_14->priv = VAR_9;
 FUNC_0(&VAR_14->work, VAR_8);
 FUNC_6(VAR_9->mfunc.master.comm_wq, &VAR_14->work);

 return 0;
}
