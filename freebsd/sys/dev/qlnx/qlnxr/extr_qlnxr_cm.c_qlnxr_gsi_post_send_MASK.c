
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t prod; } ;
struct qlnxr_qp {scalar_t__ state; int q_lock; TYPE_2__ sq; TYPE_1__* wqe_wr_id; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int ha; } ;
struct ib_send_wr {scalar_t__ num_sge; scalar_t__ opcode; int send_flags; struct ib_send_wr* next; int wr_id; } ;
struct ib_qp {int dummy; } ;
struct ecore_roce_ll2_packet {int dummy; } ;
struct TYPE_3__ {int signaled; int opcode; int wr_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 struct qlnxr_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (struct qlnxr_dev*,struct qlnxr_qp*,struct ib_send_wr*,struct ecore_roce_ll2_packet**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct qlnxr_dev*,struct ecore_roce_ll2_packet*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(struct ib_qp *VAR_7,
  struct ib_send_wr *VAR_8,
  struct ib_send_wr **VAR_9)
{
 struct ecore_roce_ll2_packet *VAR_10 = ((void*)0);
 struct qlnxr_qp *VAR_11 = FUNC_2(VAR_7);
 struct qlnxr_dev *VAR_12 = VAR_11->dev;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_1(VAR_12->ha, "exit\n");

 if (VAR_11->state != VAR_1) {
  FUNC_0(VAR_12->ha,
   "(qp->state != ECORE_ROCE_QP_STATE_RTS)\n");
  *VAR_9 = VAR_8;
  return -VAR_2;
 }

 if (VAR_8->num_sge > VAR_6) {
  FUNC_0(VAR_12->ha,
   "(wr->num_sge > RDMA_MAX_SGE_PER_SQ_WQE)\n");
  VAR_14 = -VAR_2;
  goto err;
 }

 if (VAR_8->opcode != VAR_5) {
  FUNC_0(VAR_12->ha, "(wr->opcode > IB_WR_SEND)\n");
  VAR_14 = -VAR_2;
  goto err;
 }

 FUNC_6(&VAR_11->q_lock, VAR_13);

 VAR_14 = FUNC_3(VAR_12, VAR_11, VAR_8, &VAR_10);
 if(VAR_14) {
  FUNC_7(&VAR_11->q_lock, VAR_13);
  FUNC_0(VAR_12->ha, "qlnxr_gsi_build_packet failed\n");
  goto err;
 }

 VAR_14 = FUNC_5(VAR_12, VAR_10);

 if (!VAR_14) {
  VAR_11->wqe_wr_id[VAR_11->sq.prod].wr_id = VAR_8->wr_id;
  VAR_11->wqe_wr_id[VAR_11->sq.prod].signaled =
   !!(VAR_8->send_flags & VAR_3);
  VAR_11->wqe_wr_id[VAR_11->sq.prod].opcode = VAR_4;
  FUNC_4(&VAR_11->sq);
  FUNC_0(VAR_12->ha, "packet sent over gsi qp\n");
 } else {
  FUNC_0(VAR_12->ha, "qlnxr_ll2_post_tx failed\n");
  VAR_14 = -VAR_0;
  *VAR_9 = VAR_8;
 }

 FUNC_7(&VAR_11->q_lock, VAR_13);

 if (VAR_8->next != ((void*)0)) {
  *VAR_9 = VAR_8->next;
  VAR_14=-VAR_2;
 }

 FUNC_1(VAR_12->ha, "exit\n");
 return VAR_14;

err:
 *VAR_9 = VAR_8;
 FUNC_1(VAR_12->ha, "exit error\n");
 return VAR_14;
}
