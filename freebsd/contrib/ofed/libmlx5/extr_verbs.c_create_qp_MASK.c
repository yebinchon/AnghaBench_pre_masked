
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


typedef int uint32_t ;
struct TYPE_9__ {void* rsn; int type; } ;
struct TYPE_8__ {int max_gs; scalar_t__ max_post; scalar_t__ wqe_cnt; int wqe_shift; int lock; } ;
struct TYPE_12__ {int offset; int qend; int wqe_cnt; int wqe_shift; int max_post; int lock; } ;
struct TYPE_10__ {int buf; } ;
struct TYPE_11__ {int buf; } ;
struct mlx5_qp {int buf_size; int sq_buf_size; int sq_start; int atomics_enabled; scalar_t__* db; TYPE_3__ rsc; TYPE_2__ rq; TYPE_6__ sq; scalar_t__ sq_signal_bits; int verbs_qp; TYPE_4__ sq_buf; TYPE_5__ buf; scalar_t__ wq_sig; struct ibv_qp* ibv_qp; } ;
struct mlx5_create_qp_resp_ex {uintptr_t buf_addr; uintptr_t sq_buf_addr; uintptr_t db_addr; int sq_wqe_count; int uidx; int uuar_index; int ibv_resp; int ibv_cmd; int rq_wqe_shift; scalar_t__ rq_wqe_count; int flags; } ;
struct mlx5_create_qp_resp {uintptr_t buf_addr; uintptr_t sq_buf_addr; uintptr_t db_addr; int sq_wqe_count; int uidx; int uuar_index; int ibv_resp; int ibv_cmd; int rq_wqe_shift; scalar_t__ rq_wqe_count; int flags; } ;
struct mlx5_create_qp {uintptr_t buf_addr; uintptr_t sq_buf_addr; uintptr_t db_addr; int sq_wqe_count; int uidx; int uuar_index; int ibv_resp; int ibv_cmd; int rq_wqe_shift; scalar_t__ rq_wqe_count; int flags; } ;
struct mlx5_context {scalar_t__ atomic_cap; int qp_table_mutex; scalar_t__ cqe_version; int * dbg_fp; } ;
struct TYPE_7__ {int max_recv_sge; scalar_t__ max_recv_wr; int max_send_wr; } ;
struct ibv_qp_init_attr_ex {int comp_mask; scalar_t__ qp_type; TYPE_1__ cap; scalar_t__ sq_sig_all; } ;
struct ibv_qp {void* qp_num; } ;
struct ibv_context {int dummy; } ;
typedef int resp_ex ;
typedef int resp ;
typedef void* int32_t ;
typedef int cmd ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 struct mlx5_qp* FUNC_0 (int,int) ;
 int VAR_13 ;
 int FUNC_1 (struct mlx5_qp*) ;
 int FUNC_2 (struct ibv_context*,int *,int,struct ibv_qp_init_attr_ex*,int *,int,int *,int) ;
 int FUNC_3 (struct ibv_qp*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ibv_context*,struct mlx5_qp*,int ) ;
 int FUNC_6 (struct mlx5_create_qp_resp_ex*,int ,int) ;
 scalar_t__* FUNC_7 (struct mlx5_context*) ;
 scalar_t__ FUNC_8 (struct ibv_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*,int) ;
 int FUNC_9 (struct mlx5_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*) ;
 int FUNC_10 (struct mlx5_context*,void*) ;
 int FUNC_11 (struct ibv_context*,struct ibv_qp_init_attr_ex*,struct mlx5_create_qp_resp_ex*,struct mlx5_qp*,struct mlx5_create_qp_resp_ex*) ;
 int FUNC_12 (struct ibv_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*) ;
 int FUNC_13 (int *,int ,char*,...) ;
 int FUNC_14 (struct mlx5_context*,scalar_t__*) ;
 int FUNC_15 (struct mlx5_qp*) ;
 int FUNC_16 (struct mlx5_qp*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (struct mlx5_context*,void*,struct mlx5_qp*) ;
 void* FUNC_19 (struct mlx5_context*,struct mlx5_qp*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 () ;
 struct mlx5_context* FUNC_23 (struct ibv_context*) ;
 scalar_t__ FUNC_24 () ;

__attribute__((used)) static struct ibv_qp *FUNC_25(struct ibv_context *VAR_14,
    struct ibv_qp_init_attr_ex *VAR_15)
{
 struct mlx5_create_qp VAR_16;
 struct mlx5_create_qp_resp VAR_17;
 struct mlx5_create_qp_resp_ex VAR_18;
 struct mlx5_qp *VAR_19;
 int VAR_20;
 struct mlx5_context *VAR_21 = FUNC_23(VAR_14);
 struct ibv_qp *VAR_22;
 int32_t VAR_23 = 0;
 uint32_t VAR_24;
 FILE *VAR_25 = VAR_21->dbg_fp;

 if (VAR_15->comp_mask & ~VAR_5)
  return ((void*)0);

 if ((VAR_15->comp_mask & VAR_2) &&
     (VAR_15->qp_type != VAR_1))
  return ((void*)0);

 VAR_19 = FUNC_0(1, sizeof(*VAR_19));
 if (!VAR_19) {
  FUNC_13(VAR_25, VAR_6, "\n");
  return ((void*)0);
 }
 VAR_22 = (struct ibv_qp *)&VAR_19->verbs_qp;
 VAR_19->ibv_qp = VAR_22;

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 FUNC_6(&VAR_17, 0, sizeof(VAR_17));
 FUNC_6(&VAR_18, 0, sizeof(VAR_18));

 if (VAR_15->comp_mask & VAR_3) {
  VAR_20 = FUNC_12(VAR_14, VAR_15, VAR_19);
  if (VAR_20)
   goto err;

  return VAR_22;
 }

 VAR_19->wq_sig = FUNC_22();
 if (VAR_19->wq_sig)
  VAR_16.flags |= VAR_8;

 if (FUNC_24())
  VAR_16.flags |= VAR_7;

 VAR_20 = FUNC_9(VAR_21, VAR_15, VAR_19);
 if (VAR_20 < 0) {
  VAR_13 = -VAR_20;
  goto err;
 }

 if (VAR_15->qp_type == VAR_1) {
  VAR_19->buf_size = VAR_19->sq.offset;
  VAR_19->sq_buf_size = VAR_20 - VAR_19->buf_size;
  VAR_19->sq.offset = 0;
 } else {
  VAR_19->buf_size = VAR_20;
  VAR_19->sq_buf_size = 0;
 }

 if (FUNC_8(VAR_14, VAR_15, VAR_19, VAR_20)) {
  FUNC_13(VAR_25, VAR_6, "\n");
  goto err;
 }

 if (VAR_15->qp_type == VAR_1) {
  VAR_19->sq_start = VAR_19->sq_buf.buf;
  VAR_19->sq.qend = VAR_19->sq_buf.buf +
    (VAR_19->sq.wqe_cnt << VAR_19->sq.wqe_shift);
 } else {
  VAR_19->sq_start = VAR_19->buf.buf + VAR_19->sq.offset;
  VAR_19->sq.qend = VAR_19->buf.buf + VAR_19->sq.offset +
    (VAR_19->sq.wqe_cnt << VAR_19->sq.wqe_shift);
 }

 FUNC_16(VAR_19);

 if (FUNC_17(&VAR_19->sq.lock) ||
     FUNC_17(&VAR_19->rq.lock))
  goto err_free_qp_buf;

 VAR_19->db = FUNC_7(VAR_21);
 if (!VAR_19->db) {
  FUNC_13(VAR_25, VAR_6, "\n");
  goto err_free_qp_buf;
 }

 VAR_19->db[VAR_9] = 0;
 VAR_19->db[VAR_11] = 0;

 VAR_16.buf_addr = (uintptr_t) VAR_19->buf.buf;
 VAR_16.sq_buf_addr = (VAR_15->qp_type == VAR_1) ?
     (uintptr_t) VAR_19->sq_buf.buf : 0;
 VAR_16.db_addr = (uintptr_t) VAR_19->db;
 VAR_16.sq_wqe_count = VAR_19->sq.wqe_cnt;
 VAR_16.rq_wqe_count = VAR_19->rq.wqe_cnt;
 VAR_16.rq_wqe_shift = VAR_19->rq.wqe_shift;

 if (VAR_21->atomic_cap == VAR_0)
  VAR_19->atomics_enabled = 1;

 if (!VAR_21->cqe_version) {
  VAR_16.uidx = 0xffffff;
  FUNC_20(&VAR_21->qp_table_mutex);
 } else if (!FUNC_4(VAR_15->qp_type)) {
  VAR_23 = FUNC_19(VAR_21, VAR_19);
  if (VAR_23 < 0) {
   FUNC_13(VAR_25, VAR_6, "Couldn't find free user index\n");
   goto err_rq_db;
  }

  VAR_16.uidx = VAR_23;
 }

 if (VAR_15->comp_mask & VAR_4)
  VAR_20 = FUNC_11(VAR_14, VAR_15, &VAR_16, VAR_19, &VAR_18);
 else
  VAR_20 = FUNC_2(VAR_14, &VAR_19->verbs_qp, sizeof(VAR_19->verbs_qp),
        VAR_15, &VAR_16.ibv_cmd, sizeof(VAR_16),
        &VAR_17.ibv_resp, sizeof(VAR_17));
 if (VAR_20) {
  FUNC_13(VAR_25, VAR_6, "ret %d\n", VAR_20);
  goto err_free_uidx;
 }

 VAR_24 = (VAR_15->comp_mask & VAR_4) ?
   VAR_18.uuar_index : VAR_17.uuar_index;
 if (!VAR_21->cqe_version) {
  if (VAR_19->sq.wqe_cnt || VAR_19->rq.wqe_cnt) {
   VAR_20 = FUNC_18(VAR_21, VAR_22->qp_num, VAR_19);
   if (VAR_20) {
    FUNC_13(VAR_25, VAR_6, "ret %d\n", VAR_20);
    goto err_destroy;
   }
  }

  FUNC_21(&VAR_21->qp_table_mutex);
 }

 FUNC_5(VAR_14, VAR_19, VAR_24);

 VAR_19->rq.max_post = VAR_19->rq.wqe_cnt;
 if (VAR_15->sq_sig_all)
  VAR_19->sq_signal_bits = VAR_12;
 else
  VAR_19->sq_signal_bits = 0;

 VAR_15->cap.max_send_wr = VAR_19->sq.max_post;
 VAR_15->cap.max_recv_wr = VAR_19->rq.max_post;
 VAR_15->cap.max_recv_sge = VAR_19->rq.max_gs;

 VAR_19->rsc.type = VAR_10;
 VAR_19->rsc.rsn = (VAR_21->cqe_version && !FUNC_4(VAR_15->qp_type)) ?
        VAR_23 : VAR_22->qp_num;

 return VAR_22;

err_destroy:
 FUNC_3(VAR_22);

err_free_uidx:
 if (!VAR_21->cqe_version)
  FUNC_21(&FUNC_23(VAR_14)->qp_table_mutex);
 else if (!FUNC_4(VAR_15->qp_type))
  FUNC_10(VAR_21, VAR_23);

err_rq_db:
 FUNC_14(FUNC_23(VAR_14), VAR_19->db);

err_free_qp_buf:
 FUNC_15(VAR_19);

err:
 FUNC_1(VAR_19);

 return ((void*)0);
}
