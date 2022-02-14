
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_data_seg {int dummy; } ;
struct mlx5_rwqe_sig {int dummy; } ;
struct TYPE_4__ {int wqe_cnt; int wqe_shift; int max_post; int max_gs; } ;
struct mlx5_qp {TYPE_2__ rq; scalar_t__ wq_sig; } ;
struct mlx5_context {scalar_t__ max_recv_wr; int max_rq_desc_sz; int * dbg_fp; } ;
struct TYPE_3__ {scalar_t__ max_recv_wr; } ;
struct ibv_qp_init_attr_ex {TYPE_1__ cap; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mlx5_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mlx5_context *VAR_3,
        struct ibv_qp_init_attr_ex *VAR_4,
        struct mlx5_qp *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 FILE *VAR_9 = VAR_3->dbg_fp;

 if (!VAR_4->cap.max_recv_wr)
  return 0;

 if (VAR_4->cap.max_recv_wr > VAR_3->max_recv_wr) {
  FUNC_2(VAR_9, VAR_1, "\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0 || VAR_6 > VAR_3->max_rq_desc_sz) {
  FUNC_2(VAR_9, VAR_1, "\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_4->cap.max_recv_wr) * VAR_6;
 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_7, VAR_2);
  VAR_5->rq.wqe_cnt = VAR_7 / VAR_6;
  VAR_5->rq.wqe_shift = FUNC_3(VAR_6);
  VAR_5->rq.max_post = 1 << FUNC_3(VAR_7 / VAR_6);
  VAR_8 = VAR_6 -
   (VAR_5->wq_sig ? sizeof(struct mlx5_rwqe_sig) : 0);
  VAR_5->rq.max_gs = VAR_8 / sizeof(struct mlx5_wqe_data_seg);
 } else {
  VAR_5->rq.wqe_cnt = 0;
  VAR_5->rq.wqe_shift = 0;
  VAR_5->rq.max_post = 0;
  VAR_5->rq.max_gs = 0;
 }
 return VAR_7;
}
