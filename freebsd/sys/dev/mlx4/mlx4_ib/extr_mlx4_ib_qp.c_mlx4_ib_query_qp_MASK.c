
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


struct TYPE_12__ {int pkey_index; int sched_queue; int ackto; } ;
struct mlx4_qp_context {int mtu_msgmax; TYPE_6__ alt_path; int params1; TYPE_6__ pri_path; int rnr_nextrecvpsn; int params2; int remote_qpn; int next_send_psn; int qkey; int flags; } ;
struct TYPE_9__ {int max_gs; int wqe_cnt; } ;
struct TYPE_8__ {int max_gs; int wqe_cnt; } ;
struct TYPE_7__ {scalar_t__ qp_type; } ;
struct mlx4_ib_qp {scalar_t__ state; int port; int flags; scalar_t__ sq_signal_bits; int mutex; TYPE_3__ sq; TYPE_2__ rq; TYPE_1__ ibqp; int mqp; } ;
struct mlx4_ib_dev {int dev; } ;
struct TYPE_10__ {scalar_t__ max_inline_data; int max_send_sge; int max_send_wr; int max_recv_sge; int max_recv_wr; } ;
struct ib_qp_init_attr {int sq_sig_type; int create_flags; TYPE_4__ cap; } ;
struct TYPE_11__ {int port_num; } ;
struct ib_qp_attr {scalar_t__ qp_state; int path_mtu; int qkey; int rq_psn; int sq_psn; int dest_qp_num; int alt_pkey_index; int pkey_index; int port_num; int sq_draining; int max_rd_atomic; int max_dest_rd_atomic; int min_rnr_timer; int timeout; int retry_cnt; int rnr_retry; int alt_timeout; scalar_t__ cur_qp_state; TYPE_4__ cap; TYPE_5__ alt_ah_attr; int alt_port_num; TYPE_5__ ah_attr; int qp_access_flags; int path_mig_state; } ;
struct ib_qp {int uobject; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,struct mlx4_qp_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx4_ib_dev*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 struct mlx4_ib_dev* FUNC_9 (int ) ;
 struct mlx4_ib_qp* FUNC_10 (struct ib_qp*) ;

int FUNC_11(struct ib_qp *VAR_15, struct ib_qp_attr *VAR_16, int VAR_17,
       struct ib_qp_init_attr *VAR_18)
{
 struct mlx4_ib_dev *VAR_19 = FUNC_9(VAR_15->device);
 struct mlx4_ib_qp *VAR_20 = FUNC_10(VAR_15);
 struct mlx4_qp_context VAR_21;
 int VAR_22;
 int VAR_23 = 0;

 FUNC_3(&VAR_20->mutex);

 if (VAR_20->state == VAR_2) {
  VAR_16->qp_state = VAR_2;
  goto done;
 }

 VAR_23 = FUNC_2(VAR_19->dev, &VAR_20->mqp, &VAR_21);
 if (VAR_23) {
  VAR_23 = -VAR_0;
  goto out;
 }

 VAR_22 = FUNC_0(VAR_21.flags) >> 28;

 VAR_20->state = FUNC_8(VAR_22);
 VAR_16->qp_state = VAR_20->state;
 VAR_16->path_mtu = VAR_21.mtu_msgmax >> 5;
 VAR_16->path_mig_state =
  FUNC_6((FUNC_0(VAR_21.flags) >> 11) & 0x3);
 VAR_16->qkey = FUNC_0(VAR_21.qkey);
 VAR_16->rq_psn = FUNC_0(VAR_21.rnr_nextrecvpsn) & 0xffffff;
 VAR_16->sq_psn = FUNC_0(VAR_21.next_send_psn) & 0xffffff;
 VAR_16->dest_qp_num = FUNC_0(VAR_21.remote_qpn) & 0xffffff;
 VAR_16->qp_access_flags =
  FUNC_7(FUNC_0(VAR_21.params2));

 if (VAR_20->ibqp.qp_type == VAR_3 || VAR_20->ibqp.qp_type == VAR_4) {
  FUNC_5(VAR_19, &VAR_16->ah_attr, &VAR_21.pri_path);
  FUNC_5(VAR_19, &VAR_16->alt_ah_attr, &VAR_21.alt_path);
  VAR_16->alt_pkey_index = VAR_21.alt_path.pkey_index & 0x7f;
  VAR_16->alt_port_num = VAR_16->alt_ah_attr.port_num;
 }

 VAR_16->pkey_index = VAR_21.pri_path.pkey_index & 0x7f;
 if (VAR_16->qp_state == VAR_1)
  VAR_16->port_num = VAR_20->port;
 else
  VAR_16->port_num = VAR_21.pri_path.sched_queue & 0x40 ? 2 : 1;


 VAR_16->sq_draining = VAR_22 == VAR_13;

 VAR_16->max_rd_atomic = 1 << ((FUNC_0(VAR_21.params1) >> 21) & 0x7);

 VAR_16->max_dest_rd_atomic =
  1 << ((FUNC_0(VAR_21.params2) >> 21) & 0x7);
 VAR_16->min_rnr_timer =
  (FUNC_0(VAR_21.rnr_nextrecvpsn) >> 24) & 0x1f;
 VAR_16->timeout = VAR_21.pri_path.ackto >> 3;
 VAR_16->retry_cnt = (FUNC_0(VAR_21.params1) >> 16) & 0x7;
 VAR_16->rnr_retry = (FUNC_0(VAR_21.params1) >> 13) & 0x7;
 VAR_16->alt_timeout = VAR_21.alt_path.ackto >> 3;

done:
 VAR_16->cur_qp_state = VAR_16->qp_state;
 VAR_16->cap.max_recv_wr = VAR_20->rq.wqe_cnt;
 VAR_16->cap.max_recv_sge = VAR_20->rq.max_gs;

 if (!VAR_15->uobject) {
  VAR_16->cap.max_send_wr = VAR_20->sq.wqe_cnt;
  VAR_16->cap.max_send_sge = VAR_20->sq.max_gs;
 } else {
  VAR_16->cap.max_send_wr = 0;
  VAR_16->cap.max_send_sge = 0;
 }





 VAR_16->cap.max_inline_data = 0;

 VAR_18->cap = VAR_16->cap;

 VAR_18->create_flags = 0;
 if (VAR_20->flags & VAR_10)
  VAR_18->create_flags |= VAR_5;

 if (VAR_20->flags & VAR_11)
  VAR_18->create_flags |= VAR_6;

 if (VAR_20->flags & VAR_12)
  VAR_18->create_flags |= VAR_7;

 VAR_18->sq_sig_type =
  VAR_20->sq_signal_bits == FUNC_1(VAR_14) ?
  VAR_8 : VAR_9;

out:
 FUNC_4(&VAR_20->mutex);
 return VAR_23;
}
