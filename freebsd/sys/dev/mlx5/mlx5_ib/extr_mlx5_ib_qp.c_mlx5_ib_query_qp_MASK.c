
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int max_gs; int max_post; } ;
struct TYPE_6__ {int max_gs; int wqe_cnt; } ;
struct TYPE_5__ {scalar_t__ qp_type; } ;
struct mlx5_ib_qp {int flags; int sq_signal_bits; int mutex; int max_inline_data; TYPE_3__ sq; TYPE_2__ rq; int state; TYPE_1__ ibqp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct TYPE_8__ {int max_inline_data; int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; int sq_sig_type; int create_flags; TYPE_4__ cap; int srq; int send_cq; int recv_cq; int qp_context; } ;
struct ib_qp_attr {int port_num; TYPE_4__ cap; int qp_state; int cur_qp_state; } ;
struct ib_qp {scalar_t__ qp_type; int srq; int send_cq; int recv_cq; int qp_context; int uobject; scalar_t__ rwq_ind_tbl; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ib_qp*,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;
 int VAR_15 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct ib_qp_attr*) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,int *) ;
 struct mlx5_ib_dev* FUNC_7 (int ) ;
 struct mlx5_ib_qp* FUNC_8 (struct ib_qp*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct ib_qp *VAR_16, struct ib_qp_attr *VAR_17,
       int VAR_18, struct ib_qp_init_attr *VAR_19)
{
 struct mlx5_ib_dev *VAR_20 = FUNC_7(VAR_16->device);
 struct mlx5_ib_qp *VAR_21 = FUNC_8(VAR_16);
 int VAR_22 = 0;
 u8 VAR_23;

 if (VAR_16->rwq_ind_tbl)
  return -VAR_0;

 if (FUNC_9(VAR_16->qp_type == VAR_1))
  return FUNC_2(VAR_16, VAR_17, VAR_18,
         VAR_19);
 FUNC_3(&VAR_21->mutex);

 if (VAR_21->ibqp.qp_type == VAR_2) {
  VAR_22 = FUNC_6(VAR_20, VAR_21, &VAR_23);
  if (VAR_22)
   goto out;
  VAR_21->state = VAR_23;
  VAR_17->port_num = 1;
 } else {
  VAR_22 = FUNC_5(VAR_20, VAR_21, VAR_17);
  if (VAR_22)
   goto out;
 }

 VAR_17->qp_state = VAR_21->state;
 VAR_17->cur_qp_state = VAR_17->qp_state;
 VAR_17->cap.max_recv_wr = VAR_21->rq.wqe_cnt;
 VAR_17->cap.max_recv_sge = VAR_21->rq.max_gs;

 if (!VAR_16->uobject) {
  VAR_17->cap.max_send_wr = VAR_21->sq.max_post;
  VAR_17->cap.max_send_sge = VAR_21->sq.max_gs;
  VAR_19->qp_context = VAR_16->qp_context;
 } else {
  VAR_17->cap.max_send_wr = 0;
  VAR_17->cap.max_send_sge = 0;
 }

 VAR_19->qp_type = VAR_16->qp_type;
 VAR_19->recv_cq = VAR_16->recv_cq;
 VAR_19->send_cq = VAR_16->send_cq;
 VAR_19->srq = VAR_16->srq;
 VAR_17->cap.max_inline_data = VAR_21->max_inline_data;

 VAR_19->cap = VAR_17->cap;

 VAR_19->create_flags = 0;
 if (VAR_21->flags & VAR_9)
  VAR_19->create_flags |= VAR_3;

 if (VAR_21->flags & VAR_10)
  VAR_19->create_flags |= VAR_4;
 if (VAR_21->flags & VAR_12)
  VAR_19->create_flags |= VAR_6;
 if (VAR_21->flags & VAR_11)
  VAR_19->create_flags |= VAR_5;
 if (VAR_21->flags & VAR_13)
  VAR_19->create_flags |= FUNC_1();

 VAR_19->sq_sig_type = VAR_21->sq_signal_bits & VAR_14 ?
  VAR_7 : VAR_8;

out:
 FUNC_4(&VAR_21->mutex);
 return VAR_22;
}
