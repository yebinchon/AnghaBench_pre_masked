
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_qp {int state; int port; int mutex; } ;
struct mlx4_ib_dev {int num_ports; TYPE_2__* dev; int ib_dev; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; int port_num; scalar_t__ pkey_index; scalar_t__ max_rd_atomic; scalar_t__ max_dest_rd_atomic; } ;
struct ib_qp {int qp_type; int qp_num; int device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_3__ {scalar_t__* pkey_table_len; scalar_t__ max_qp_init_rdma; scalar_t__ max_qp_dest_rdma; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int,int,int) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (struct mlx4_ib_dev*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int,int,int,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 struct mlx4_ib_dev* FUNC_8 (int ) ;
 struct mlx4_ib_qp* FUNC_9 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_10(struct ib_qp *VAR_16, struct ib_qp_attr *VAR_17,
         int VAR_18, struct ib_udata *VAR_19)
{
 struct mlx4_ib_dev *VAR_20 = FUNC_8(VAR_16->device);
 struct mlx4_ib_qp *VAR_21 = FUNC_9(VAR_16);
 enum ib_qp_state VAR_22, VAR_23;
 int VAR_24 = -VAR_0;
 int VAR_25;
 FUNC_4(&VAR_21->mutex);

 VAR_22 = VAR_18 & VAR_10 ? VAR_17->cur_qp_state : VAR_21->state;
 VAR_23 = VAR_18 & VAR_15 ? VAR_17->qp_state : VAR_22;

 if (VAR_22 == VAR_23 && VAR_22 == VAR_4) {
  VAR_25 = VAR_2;
 } else {
  int VAR_26 = VAR_18 & VAR_14 ? VAR_17->port_num : VAR_21->port;
  VAR_25 = FUNC_7(&VAR_20->ib_dev, VAR_26);
 }

 if (!FUNC_1(VAR_22, VAR_23, VAR_16->qp_type,
    VAR_18, VAR_25)) {
  FUNC_6("qpn 0x%x: invalid attribute mask specified "
    "for transition %d to %d. qp_type %d,"
    " attr_mask 0x%x\n",
    VAR_16->qp_num, VAR_22, VAR_23,
    VAR_16->qp_type, VAR_18);
  goto out;
 }

 if (FUNC_3(VAR_20->dev) && (VAR_18 & VAR_14)) {
  if ((VAR_22 == VAR_4) && (VAR_23 == VAR_3)) {
   if ((VAR_16->qp_type == VAR_6) ||
       (VAR_16->qp_type == VAR_8) ||
       (VAR_16->qp_type == VAR_7) ||
       (VAR_16->qp_type == VAR_5) ||
       (VAR_16->qp_type == VAR_9)) {
    VAR_17->port_num = FUNC_2(VAR_20);
   }
  } else {


   VAR_18 &= ~VAR_14;
  }
 }

 if ((VAR_18 & VAR_14) &&
     (VAR_17->port_num == 0 || VAR_17->port_num > VAR_20->num_ports)) {
  FUNC_6("qpn 0x%x: invalid port number (%d) specified "
    "for transition %d to %d. qp_type %d\n",
    VAR_16->qp_num, VAR_17->port_num, VAR_22,
    VAR_23, VAR_16->qp_type);
  goto out;
 }

 if ((VAR_18 & VAR_14) && (VAR_16->qp_type == VAR_5) &&
     (FUNC_7(&VAR_20->ib_dev, VAR_17->port_num) !=
      VAR_1))
  goto out;

 if (VAR_18 & VAR_13) {
  int VAR_27 = VAR_18 & VAR_14 ? VAR_17->port_num : VAR_21->port;
  if (VAR_17->pkey_index >= VAR_20->dev->caps.pkey_table_len[VAR_27]) {
   FUNC_6("qpn 0x%x: invalid pkey index (%d) specified "
     "for transition %d to %d. qp_type %d\n",
     VAR_16->qp_num, VAR_17->pkey_index, VAR_22,
     VAR_23, VAR_16->qp_type);
   goto out;
  }
 }

 if (VAR_18 & VAR_12 &&
     VAR_17->max_rd_atomic > VAR_20->dev->caps.max_qp_init_rdma) {
  FUNC_6("qpn 0x%x: max_rd_atomic (%d) too large. "
    "Transition %d to %d. qp_type %d\n",
    VAR_16->qp_num, VAR_17->max_rd_atomic, VAR_22,
    VAR_23, VAR_16->qp_type);
  goto out;
 }

 if (VAR_18 & VAR_11 &&
     VAR_17->max_dest_rd_atomic > VAR_20->dev->caps.max_qp_dest_rdma) {
  FUNC_6("qpn 0x%x: max_dest_rd_atomic (%d) too large. "
    "Transition %d to %d. qp_type %d\n",
    VAR_16->qp_num, VAR_17->max_dest_rd_atomic, VAR_22,
    VAR_23, VAR_16->qp_type);
  goto out;
 }

 if (VAR_22 == VAR_23 && VAR_22 == VAR_4) {
  VAR_24 = 0;
  goto out;
 }

 VAR_24 = FUNC_0(VAR_16, VAR_17, VAR_18, VAR_22, VAR_23);

 if (FUNC_3(VAR_20->dev) && (VAR_18 & VAR_14))
  VAR_17->port_num = 1;

out:
 FUNC_5(&VAR_21->mutex);
 return VAR_24;
}
