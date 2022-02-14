
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_inl_data_seg {int dummy; } ;
struct mlx5_wqe_data_seg {int dummy; } ;
struct mlx5_qp {int max_tso_header; } ;
struct mlx5_context {int max_sq_desc_sz; } ;
struct TYPE_2__ {int max_inline_data; int max_send_sge; } ;
struct ibv_qp_init_attr_ex {int comp_mask; int max_tso_header; TYPE_1__ cap; int qp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_context *VAR_3,
         struct ibv_qp_init_attr_ex *VAR_4,
         struct mlx5_qp *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_4->qp_type);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->cap.max_inline_data) {
  VAR_7 = VAR_6 + FUNC_0(sizeof(struct mlx5_wqe_inl_data_seg) +
   VAR_4->cap.max_inline_data, 16);
 }

 if (VAR_4->comp_mask & VAR_1) {
  VAR_6 += FUNC_0(VAR_4->max_tso_header, 16);
  VAR_5->max_tso_header = VAR_4->max_tso_header;
 }

 VAR_8 = (VAR_3->max_sq_desc_sz - VAR_6) /
  sizeof(struct mlx5_wqe_data_seg);
 if (VAR_4->cap.max_send_sge > VAR_8)
  return -VAR_0;

 VAR_6 += VAR_4->cap.max_send_sge * sizeof(struct mlx5_wqe_data_seg);
 VAR_9 = FUNC_1(VAR_6, VAR_7);

 if (VAR_9 > VAR_3->max_sq_desc_sz)
  return -VAR_0;

 return FUNC_0(VAR_9, VAR_2);
}
