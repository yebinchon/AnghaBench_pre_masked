
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5dv_cq_init_attr {int comp_mask; int cqe_comp_res_format; } ;
struct mlx5_create_cq_resp {int cqn; int ibv_resp; } ;
struct mlx5_create_cq {uintptr_t buf_addr; uintptr_t db_addr; int cqe_size; int cqe_comp_en; int cqe_comp_res_format; int ibv_cmd; } ;
struct TYPE_5__ {scalar_t__ buf; } ;
struct ibv_cq_ex {int dummy; } ;
struct mlx5_cq {int cqe_sz; int flags; int lock; TYPE_2__ buf_a; scalar_t__* dbrec; struct ibv_cq_ex ibv_cq; int stall_cycles; int stall_adaptive_enable; int stall_enable; int cqn; int * resize_buf; TYPE_2__* active_buf; scalar_t__ arm_sn; scalar_t__ cons_index; } ;
struct TYPE_4__ {int supported_format; scalar_t__ max_num; } ;
struct mlx5_context {int stall_cycles; int stall_adaptive_enable; int stall_enable; TYPE_1__ cqe_comp_caps; int * dbg_fp; } ;
struct ibv_cq_init_attr_ex {int cqe; int comp_mask; int flags; int wc_flags; int comp_vector; int channel; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 struct mlx5_cq* FUNC_1 (int,int) ;
 int VAR_14 ;
 int FUNC_2 (struct mlx5_cq*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ibv_context*,int,int ,int ,int ,int *,int,int *,int) ;
 int FUNC_5 (struct ibv_cq_ex*) ;
 int FUNC_6 (struct mlx5_create_cq*,int ,int) ;
 scalar_t__ FUNC_7 (struct mlx5_context*,struct mlx5_cq*,TYPE_2__*,int,int) ;
 scalar_t__* FUNC_8 (struct mlx5_context*) ;
 int FUNC_9 (struct mlx5_cq*,struct ibv_cq_init_attr_ex const*) ;
 int FUNC_10 (int *,int ,char*,...) ;
 int FUNC_11 (struct mlx5_context*,TYPE_2__*) ;
 int FUNC_12 (struct mlx5_context*,scalar_t__*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 struct mlx5_context* FUNC_15 (struct ibv_context*) ;

__attribute__((used)) static struct ibv_cq_ex *FUNC_16(struct ibv_context *VAR_15,
       const struct ibv_cq_init_attr_ex *VAR_16,
       int VAR_17,
       struct mlx5dv_cq_init_attr *VAR_18)
{
 struct mlx5_create_cq VAR_19;
 struct mlx5_create_cq_resp VAR_20;
 struct mlx5_cq *VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 struct mlx5_context *VAR_25 = FUNC_15(VAR_15);
 FILE *VAR_26 = FUNC_15(VAR_15)->dbg_fp;

 if (!VAR_16->cqe) {
  FUNC_10(VAR_26, VAR_13, "CQE invalid\n");
  VAR_14 = VAR_3;
  return ((void*)0);
 }

 if (VAR_16->comp_mask & ~VAR_0) {
  FUNC_10(VAR_26, VAR_13,
    "Unsupported comp_mask for create_cq\n");
  VAR_14 = VAR_3;
  return ((void*)0);
 }

 if (VAR_16->comp_mask & VAR_5 &&
     VAR_16->flags & ~VAR_1) {
  FUNC_10(VAR_26, VAR_13,
    "Unsupported creation flags requested for create_cq\n");
  VAR_14 = VAR_3;
  return ((void*)0);
 }

 if (VAR_16->wc_flags & ~VAR_2) {
  FUNC_10(VAR_26, VAR_13, "\n");
  VAR_14 = VAR_4;
  return ((void*)0);
 }

 VAR_21 = FUNC_1(1, sizeof *VAR_21);
 if (!VAR_21) {
  FUNC_10(VAR_26, VAR_13, "\n");
  return ((void*)0);
 }

 FUNC_6(&VAR_19, 0, sizeof VAR_19);
 VAR_21->cons_index = 0;

 if (FUNC_14(&VAR_21->lock))
  goto err;

 VAR_24 = FUNC_0(VAR_16->cqe + 1);
 if ((VAR_24 > (1 << 24)) || (VAR_24 < (VAR_16->cqe + 1))) {
  FUNC_10(VAR_26, VAR_13, "ncqe %d\n", VAR_24);
  VAR_14 = VAR_3;
  goto err_spl;
 }

 VAR_22 = FUNC_3();
 if (VAR_22 < 0) {
  FUNC_10(VAR_26, VAR_13, "\n");
  VAR_14 = -VAR_22;
  goto err_spl;
 }

 if (FUNC_7(FUNC_15(VAR_15), VAR_21, &VAR_21->buf_a, VAR_24, VAR_22)) {
  FUNC_10(VAR_26, VAR_13, "\n");
  goto err_spl;
 }

 VAR_21->dbrec = FUNC_8(FUNC_15(VAR_15));
 if (!VAR_21->dbrec) {
  FUNC_10(VAR_26, VAR_13, "\n");
  goto err_buf;
 }

 VAR_21->dbrec[VAR_12] = 0;
 VAR_21->dbrec[VAR_9] = 0;
 VAR_21->arm_sn = 0;
 VAR_21->cqe_sz = VAR_22;
 VAR_21->flags = VAR_17;

 if (VAR_16->comp_mask & VAR_5 &&
     VAR_16->flags & VAR_6)
  VAR_21->flags |= VAR_11;
 VAR_19.buf_addr = (uintptr_t) VAR_21->buf_a.buf;
 VAR_19.db_addr = (uintptr_t) VAR_21->dbrec;
 VAR_19.cqe_size = VAR_22;

 if (VAR_18) {
  if (VAR_18->comp_mask & ~(VAR_8 - 1)) {
   FUNC_10(VAR_26, VAR_13,
       "Unsupported vendor comp_mask for create_cq\n");
   VAR_14 = VAR_3;
   goto err_db;
  }

  if (VAR_18->comp_mask & VAR_7) {
   if (VAR_25->cqe_comp_caps.max_num &&
       (VAR_18->cqe_comp_res_format &
        VAR_25->cqe_comp_caps.supported_format)) {
    VAR_19.cqe_comp_en = 1;
    VAR_19.cqe_comp_res_format = VAR_18->cqe_comp_res_format;
   } else {
    FUNC_10(VAR_26, VAR_13, "CQE Compression is not supported\n");
    VAR_14 = VAR_3;
    goto err_db;
   }
  }
 }

 VAR_23 = FUNC_4(VAR_15, VAR_24 - 1, VAR_16->channel,
    VAR_16->comp_vector,
    FUNC_5(&VAR_21->ibv_cq), &VAR_19.ibv_cmd,
    sizeof(VAR_19), &VAR_20.ibv_resp, sizeof(VAR_20));
 if (VAR_23) {
  FUNC_10(VAR_26, VAR_13, "ret %d\n", VAR_23);
  goto err_db;
 }

 VAR_21->active_buf = &VAR_21->buf_a;
 VAR_21->resize_buf = ((void*)0);
 VAR_21->cqn = VAR_20.cqn;
 VAR_21->stall_enable = FUNC_15(VAR_15)->stall_enable;
 VAR_21->stall_adaptive_enable = FUNC_15(VAR_15)->stall_adaptive_enable;
 VAR_21->stall_cycles = FUNC_15(VAR_15)->stall_cycles;

 if (VAR_17 & VAR_10)
  FUNC_9(VAR_21, VAR_16);

 return &VAR_21->ibv_cq;

err_db:
 FUNC_12(FUNC_15(VAR_15), VAR_21->dbrec);

err_buf:
 FUNC_11(FUNC_15(VAR_15), &VAR_21->buf_a);

err_spl:
 FUNC_13(&VAR_21->lock);

err:
 FUNC_2(VAR_21);

 return ((void*)0);
}
