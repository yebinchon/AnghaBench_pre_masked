
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ibv_wq {int post_recv; } ;
struct TYPE_7__ {scalar_t__ rsn; int type; } ;
struct TYPE_6__ {int wqe_shift; int wqe_cnt; scalar_t__ offset; int lock; } ;
struct TYPE_5__ {scalar_t__ buf; } ;
struct mlx5_rwq {int buf_size; scalar_t__* db; struct ibv_wq wq; TYPE_3__ rsc; TYPE_2__ rq; TYPE_1__ buf; scalar_t__* recv_db; scalar_t__ pbuff; scalar_t__ wq_sig; } ;
struct TYPE_8__ {uintptr_t buf_addr; uintptr_t db_addr; scalar_t__ user_index; int rq_wqe_shift; int rq_wqe_count; int flags; } ;
struct mlx5_create_wq_resp {TYPE_4__ drv; int ibv_resp; int ibv_cmd; } ;
struct mlx5_create_wq {TYPE_4__ drv; int ibv_resp; int ibv_cmd; } ;
struct mlx5_context {int * dbg_fp; } ;
struct ibv_wq_init_attr {scalar_t__ wq_type; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef scalar_t__ int32_t ;
typedef int cmd ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct mlx5_rwq* FUNC_0 (int,int) ;
 int VAR_6 ;
 int FUNC_1 (struct mlx5_rwq*) ;
 int FUNC_2 (struct ibv_context*,struct ibv_wq_init_attr*,struct ibv_wq*,int *,int,int,int *,int,int) ;
 int FUNC_3 (struct mlx5_create_wq_resp*,int ,int) ;
 scalar_t__* FUNC_4 (struct mlx5_context*) ;
 scalar_t__ FUNC_5 (struct ibv_context*,struct mlx5_rwq*,int) ;
 int FUNC_6 (struct mlx5_context*,struct mlx5_rwq*,struct ibv_wq_init_attr*) ;
 int FUNC_7 (struct mlx5_context*,scalar_t__) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (struct mlx5_context*,scalar_t__*) ;
 int FUNC_10 (struct mlx5_rwq*,struct ibv_context*) ;
 int FUNC_11 (struct mlx5_rwq*) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct mlx5_context*,struct mlx5_rwq*) ;
 scalar_t__ FUNC_14 (struct ibv_context*) ;
 struct mlx5_context* FUNC_15 (struct ibv_context*) ;

struct ibv_wq *FUNC_16(struct ibv_context *VAR_8,
         struct ibv_wq_init_attr *VAR_9)
{
 struct mlx5_create_wq VAR_10;
 struct mlx5_create_wq_resp VAR_11;
 int VAR_12;
 struct mlx5_rwq *VAR_13;
 struct mlx5_context *VAR_14 = FUNC_15(VAR_8);
 int VAR_15;
 int32_t VAR_16 = 0;
 FILE *VAR_17 = VAR_14->dbg_fp;

 if (VAR_9->wq_type != VAR_0)
  return ((void*)0);

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_3(&VAR_11, 0, sizeof(VAR_11));

 VAR_13 = FUNC_0(1, sizeof(*VAR_13));
 if (!VAR_13)
  return ((void*)0);

 VAR_13->wq_sig = FUNC_14(VAR_8);
 if (VAR_13->wq_sig)
  VAR_10.drv.flags = VAR_4;

 VAR_15 = FUNC_6(VAR_14, VAR_13, VAR_9);
 if (VAR_15 < 0) {
  VAR_6 = -VAR_15;
  goto err;
 }

 VAR_13->buf_size = VAR_15;
 if (FUNC_5(VAR_8, VAR_13, VAR_15))
  goto err;

 FUNC_11(VAR_13);

 if (FUNC_12(&VAR_13->rq.lock))
  goto err_free_rwq_buf;

 VAR_13->db = FUNC_4(VAR_14);
 if (!VAR_13->db)
  goto err_free_rwq_buf;

 VAR_13->db[VAR_2] = 0;
 VAR_13->db[VAR_5] = 0;
 VAR_13->pbuff = VAR_13->buf.buf + VAR_13->rq.offset;
 VAR_13->recv_db = &VAR_13->db[VAR_2];
 VAR_10.drv.buf_addr = (uintptr_t)VAR_13->buf.buf;
 VAR_10.drv.db_addr = (uintptr_t)VAR_13->db;
 VAR_10.drv.rq_wqe_count = VAR_13->rq.wqe_cnt;
 VAR_10.drv.rq_wqe_shift = VAR_13->rq.wqe_shift;
 VAR_16 = FUNC_13(VAR_14, VAR_13);
 if (VAR_16 < 0) {
  FUNC_8(VAR_17, VAR_1, "Couldn't find free user index\n");
  goto err_free_db_rec;
 }

 VAR_10.drv.user_index = VAR_16;
 VAR_12 = FUNC_2(VAR_8, VAR_9, &VAR_13->wq, &VAR_10.ibv_cmd,
    sizeof(VAR_10.ibv_cmd),
    sizeof(VAR_10),
    &VAR_11.ibv_resp, sizeof(VAR_11.ibv_resp),
    sizeof(VAR_11));
 if (VAR_12)
  goto err_create;

 VAR_13->rsc.type = VAR_3;
 VAR_13->rsc.rsn = VAR_10.drv.user_index;

 VAR_13->wq.post_recv = VAR_7;
 return &VAR_13->wq;

err_create:
 FUNC_7(VAR_14, VAR_10.drv.user_index);
err_free_db_rec:
 FUNC_9(FUNC_15(VAR_8), VAR_13->db);
err_free_rwq_buf:
 FUNC_10(VAR_13, VAR_8);
err:
 FUNC_1(VAR_13);
 return ((void*)0);
}
