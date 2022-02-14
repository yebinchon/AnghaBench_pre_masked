
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_inl_data_seg {int dummy; } ;
struct TYPE_4__ {int wqe_cnt; int max_post; int max_gs; int wqe_shift; } ;
struct mlx5_qp {int max_inline_data; TYPE_2__ sq; } ;
struct mlx5_context {int max_sq_desc_sz; int max_send_wqebb; int * dbg_fp; } ;
struct TYPE_3__ {int max_send_wr; int max_inline_data; int max_send_sge; } ;
struct ibv_qp_init_attr_ex {TYPE_1__ cap; int qp_type; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_context *VAR_3,
        struct ibv_qp_init_attr_ex *VAR_4,
        struct mlx5_qp *VAR_5)
{
 int VAR_6;
 int VAR_7;
 FILE *VAR_8 = VAR_3->dbg_fp;

 if (!VAR_4->cap.max_send_wr)
  return 0;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_8, VAR_1, "\n");
  return VAR_6;
 }

 if (VAR_6 > VAR_3->max_sq_desc_sz) {
  FUNC_1(VAR_8, VAR_1, "\n");
  return -VAR_0;
 }

 VAR_5->max_inline_data = VAR_6 - FUNC_4(VAR_4->qp_type) -
  sizeof(struct mlx5_wqe_inl_data_seg);
 VAR_4->cap.max_inline_data = VAR_5->max_inline_data;





 if (VAR_4->cap.max_send_wr > 0x7fffffff / VAR_3->max_sq_desc_sz) {
  FUNC_1(VAR_8, VAR_1, "\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_4->cap.max_send_wr * VAR_6);
 VAR_5->sq.wqe_cnt = VAR_7 / VAR_2;
 if (VAR_5->sq.wqe_cnt > VAR_3->max_send_wqebb) {
  FUNC_1(VAR_8, VAR_1, "\n");
  return -VAR_0;
 }

 VAR_5->sq.wqe_shift = FUNC_2(VAR_2);
 VAR_5->sq.max_gs = VAR_4->cap.max_send_sge;
 VAR_5->sq.max_post = VAR_7 / VAR_6;

 return VAR_7;
}
