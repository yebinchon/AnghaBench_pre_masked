
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_ib_qp {int state; int port; int mutex; } ;
struct TYPE_5__ {int (* get_link_layer ) (TYPE_2__*,int) ;} ;
struct mlx5_ib_dev {TYPE_3__* mdev; int num_ports; TYPE_2__ ib_dev; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; int port_num; scalar_t__ pkey_index; int max_rd_atomic; int max_dest_rd_atomic; } ;
struct ib_qp {int qp_type; scalar_t__ rwq_ind_tbl; int device; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_6__ {TYPE_1__* port_caps; } ;
struct TYPE_4__ {scalar_t__ pkey_table_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int,int,int) ;
 int FUNC_2 (int,int,int,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int,...) ;
 int FUNC_4 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_15 ;
 int FUNC_7 (TYPE_2__*,int) ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;
 struct mlx5_ib_qp* FUNC_9 (struct ib_qp*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct ib_qp *VAR_16, struct ib_qp_attr *VAR_17,
        int VAR_18, struct ib_udata *VAR_19)
{
 struct mlx5_ib_dev *VAR_20 = FUNC_8(VAR_16->device);
 struct mlx5_ib_qp *VAR_21 = FUNC_9(VAR_16);
 enum ib_qp_type VAR_22;
 enum ib_qp_state VAR_23, VAR_24;
 int VAR_25 = -VAR_0;
 int VAR_26;
 enum rdma_link_layer VAR_27 = VAR_2;

 if (VAR_16->rwq_ind_tbl)
  return -VAR_1;

 if (FUNC_10(VAR_16->qp_type == VAR_4))
  return FUNC_4(VAR_16, VAR_17, VAR_18);

 VAR_22 = (FUNC_10(VAR_16->qp_type == VAR_11)) ?
  VAR_4 : VAR_16->qp_type;

 FUNC_5(&VAR_21->mutex);

 VAR_23 = VAR_18 & VAR_5 ? VAR_17->cur_qp_state : VAR_21->state;
 VAR_24 = VAR_18 & VAR_10 ? VAR_17->qp_state : VAR_23;

 if (!(VAR_23 == VAR_24 && VAR_23 == VAR_3)) {
  VAR_26 = VAR_18 & VAR_9 ? VAR_17->port_num : VAR_21->port;
  VAR_27 = VAR_20->ib_dev.get_link_layer(&VAR_20->ib_dev, VAR_26);
 }

 if (VAR_22 != VAR_12 &&
     !FUNC_2(VAR_23, VAR_24, VAR_22, VAR_18, VAR_27)) {
  FUNC_3(VAR_20, "invalid QP state transition from %d to %d, qp_type %d, attr_mask 0x%x\n",
       VAR_23, VAR_24, VAR_16->qp_type, VAR_18);
  goto out;
 }

 if ((VAR_18 & VAR_9) &&
     (VAR_17->port_num == 0 ||
      VAR_17->port_num > FUNC_0(VAR_20->mdev, VAR_15))) {
  FUNC_3(VAR_20, "invalid port number %d. number of ports is %d\n",
       VAR_17->port_num, VAR_20->num_ports);
  goto out;
 }

 if (VAR_18 & VAR_8) {
  VAR_26 = VAR_18 & VAR_9 ? VAR_17->port_num : VAR_21->port;
  if (VAR_17->pkey_index >=
      VAR_20->mdev->port_caps[VAR_26 - 1].pkey_table_len) {
   FUNC_3(VAR_20, "invalid pkey index %d\n",
        VAR_17->pkey_index);
   goto out;
  }
 }

 if (VAR_18 & VAR_7 &&
     VAR_17->max_rd_atomic >
     (1 << FUNC_0(VAR_20->mdev, VAR_14))) {
  FUNC_3(VAR_20, "invalid max_rd_atomic value %d\n",
       VAR_17->max_rd_atomic);
  goto out;
 }

 if (VAR_18 & VAR_6 &&
     VAR_17->max_dest_rd_atomic >
     (1 << FUNC_0(VAR_20->mdev, VAR_13))) {
  FUNC_3(VAR_20, "invalid max_dest_rd_atomic value %d\n",
       VAR_17->max_dest_rd_atomic);
  goto out;
 }

 if (VAR_23 == VAR_24 && VAR_23 == VAR_3) {
  VAR_25 = 0;
  goto out;
 }

 VAR_25 = FUNC_1(VAR_16, VAR_17, VAR_18, VAR_23, VAR_24);

out:
 FUNC_6(&VAR_21->mutex);
 return VAR_25;
}
