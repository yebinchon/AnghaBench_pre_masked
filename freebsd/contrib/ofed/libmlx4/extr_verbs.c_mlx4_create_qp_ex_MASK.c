
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ buf; } ;
struct TYPE_9__ {int wqe_cnt; scalar_t__ max_post; scalar_t__ max_gs; struct mlx4_qp* wrid; int lock; } ;
struct TYPE_8__ {int wqe_cnt; int wqe_shift; struct mlx4_qp* wrid; int lock; } ;
struct ibv_qp {int qp_num; } ;
struct TYPE_12__ {struct ibv_qp qp; } ;
struct mlx4_qp {int sq_spare_wqes; TYPE_4__ buf; TYPE_2__ rq; TYPE_1__ sq; scalar_t__* db; TYPE_7__ verbs_qp; void* sq_signal_bits; void* doorbell_qpn; } ;
struct mlx4_create_qp {uintptr_t db_addr; uintptr_t buf_addr; int log_sq_stride; int log_sq_bb_count; int ibv_cmd; int reserved; scalar_t__ sq_no_prefetch; } ;
struct mlx4_context {scalar_t__ max_qp_wr; scalar_t__ max_sge; int qp_table_mutex; } ;
struct TYPE_10__ {scalar_t__ max_send_wr; scalar_t__ max_recv_wr; scalar_t__ max_send_sge; scalar_t__ max_recv_sge; int max_inline_data; } ;
struct ibv_qp_init_attr_ex {int comp_mask; TYPE_3__ cap; scalar_t__ sq_sig_all; int qp_type; scalar_t__ srq; } ;
struct ibv_create_qp_resp {int dummy; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 struct mlx4_qp* FUNC_1 (int,int) ;
 int FUNC_2 (struct mlx4_qp*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ibv_context*,TYPE_7__*,int,struct ibv_qp_init_attr_ex*,int *,int,struct ibv_create_qp_resp*,int) ;
 int FUNC_5 (struct ibv_qp*) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__* FUNC_7 (struct mlx4_context*,int ) ;
 scalar_t__ FUNC_8 (struct ibv_context*,TYPE_3__*,int ,struct mlx4_qp*) ;
 int FUNC_9 (TYPE_3__*,int ,struct mlx4_qp*) ;
 int FUNC_10 (struct ibv_context*,struct ibv_qp_init_attr_ex*,struct mlx4_create_qp*,struct mlx4_qp*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (struct mlx4_context*,int ,scalar_t__*) ;
 int FUNC_13 (struct mlx4_qp*) ;
 int FUNC_14 (struct mlx4_qp*,TYPE_3__*,int ) ;
 int FUNC_15 (struct mlx4_context*,int,struct mlx4_qp*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int ) ;
 struct mlx4_context* FUNC_19 (struct ibv_context*) ;

struct ibv_qp *FUNC_20(struct ibv_context *VAR_7,
     struct ibv_qp_init_attr_ex *VAR_8)
{
 struct mlx4_context *VAR_9 = FUNC_19(VAR_7);
 struct mlx4_create_qp VAR_10;
 struct ibv_create_qp_resp VAR_11;
 struct mlx4_qp *VAR_12;
 int VAR_13;


 if (VAR_9->max_qp_wr) {
  if (VAR_8->cap.max_send_wr > VAR_9->max_qp_wr ||
      VAR_8->cap.max_recv_wr > VAR_9->max_qp_wr ||
      VAR_8->cap.max_send_sge > VAR_9->max_sge ||
      VAR_8->cap.max_recv_sge > VAR_9->max_sge)
   return ((void*)0);
 } else {
  if (VAR_8->cap.max_send_wr > 65536 ||
      VAR_8->cap.max_recv_wr > 65536 ||
      VAR_8->cap.max_send_sge > 64 ||
      VAR_8->cap.max_recv_sge > 64)
   return ((void*)0);
 }
 if (VAR_8->cap.max_inline_data > 1024)
  return ((void*)0);

 if (VAR_8->comp_mask & ~VAR_3)
  return ((void*)0);

 VAR_12 = FUNC_1(1, sizeof *VAR_12);
 if (!VAR_12)
  return ((void*)0);

 if (VAR_8->qp_type == VAR_0) {
  VAR_8->cap.max_send_wr = VAR_12->sq.wqe_cnt = 0;
 } else {
  FUNC_9(&VAR_8->cap, VAR_8->qp_type, VAR_12);




  VAR_12->sq_spare_wqes = (2048 >> VAR_12->sq.wqe_shift) + 1;
  VAR_12->sq.wqe_cnt = FUNC_0(VAR_8->cap.max_send_wr + VAR_12->sq_spare_wqes);
 }

 if (VAR_8->srq || VAR_8->qp_type == VAR_1 ||
     VAR_8->qp_type == VAR_0) {
  VAR_8->cap.max_recv_wr = VAR_12->rq.wqe_cnt = VAR_8->cap.max_recv_sge = 0;
 } else {
  VAR_12->rq.wqe_cnt = FUNC_0(VAR_8->cap.max_recv_wr);
  if (VAR_8->cap.max_recv_sge < 1)
   VAR_8->cap.max_recv_sge = 1;
  if (VAR_8->cap.max_recv_wr < 1)
   VAR_8->cap.max_recv_wr = 1;
 }

 if (FUNC_8(VAR_7, &VAR_8->cap, VAR_8->qp_type, VAR_12))
  goto err;

 FUNC_13(VAR_12);

 if (FUNC_18(&VAR_12->sq.lock, VAR_6) ||
     FUNC_18(&VAR_12->rq.lock, VAR_6))
  goto err_free;

 if (VAR_8->cap.max_recv_sge) {
  VAR_12->db = FUNC_7(FUNC_19(VAR_7), VAR_4);
  if (!VAR_12->db)
   goto err_free;

  *VAR_12->db = 0;
  VAR_10.db_addr = (uintptr_t) VAR_12->db;
 } else {
  VAR_10.db_addr = 0;
 }

 VAR_10.buf_addr = (uintptr_t) VAR_12->buf.buf;
 VAR_10.log_sq_stride = VAR_12->sq.wqe_shift;
 for (VAR_10.log_sq_bb_count = 0;
      VAR_12->sq.wqe_cnt > 1 << VAR_10.log_sq_bb_count;
      ++VAR_10.log_sq_bb_count)
  ;
 VAR_10.sq_no_prefetch = 0;
 FUNC_6(VAR_10.reserved, 0, sizeof VAR_10.reserved);
 FUNC_16(&FUNC_19(VAR_7)->qp_table_mutex);

 if (VAR_8->comp_mask & VAR_2)
  VAR_13 = FUNC_10(VAR_7, VAR_8, &VAR_10, VAR_12);
 else
  VAR_13 = FUNC_4(VAR_7, &VAR_12->verbs_qp,
        sizeof(VAR_12->verbs_qp), VAR_8,
        &VAR_10.ibv_cmd, sizeof(VAR_10), &VAR_11,
        sizeof(VAR_11));
 if (VAR_13)
  goto err_rq_db;

 if (VAR_12->sq.wqe_cnt || VAR_12->rq.wqe_cnt) {
  VAR_13 = FUNC_15(FUNC_19(VAR_7), VAR_12->verbs_qp.qp.qp_num, VAR_12);
  if (VAR_13)
   goto err_destroy;
 }
 FUNC_17(&FUNC_19(VAR_7)->qp_table_mutex);

 VAR_12->rq.wqe_cnt = VAR_12->rq.max_post = VAR_8->cap.max_recv_wr;
 VAR_12->rq.max_gs = VAR_8->cap.max_recv_sge;
 if (VAR_8->qp_type != VAR_0)
  FUNC_14(VAR_12, &VAR_8->cap, VAR_8->qp_type);

 VAR_12->doorbell_qpn = FUNC_3(VAR_12->verbs_qp.qp.qp_num << 8);
 if (VAR_8->sq_sig_all)
  VAR_12->sq_signal_bits = FUNC_3(VAR_5);
 else
  VAR_12->sq_signal_bits = 0;

 return &VAR_12->verbs_qp.qp;

err_destroy:
 FUNC_5(&VAR_12->verbs_qp.qp);

err_rq_db:
 FUNC_17(&FUNC_19(VAR_7)->qp_table_mutex);
 if (VAR_8->cap.max_recv_sge)
  FUNC_12(FUNC_19(VAR_7), VAR_4, VAR_12->db);

err_free:
 FUNC_2(VAR_12->sq.wrid);
 if (VAR_12->rq.wqe_cnt)
  FUNC_2(VAR_12->rq.wrid);
 FUNC_11(&VAR_12->buf);

err:
 FUNC_2(VAR_12);

 return ((void*)0);
}
