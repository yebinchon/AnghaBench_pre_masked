
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_raddr_seg {int dummy; } ;
struct mlx4_wqe_inline_seg {int dummy; } ;
struct mlx4_wqe_datagram_seg {int dummy; } ;
struct mlx4_wqe_data_seg {int dummy; } ;
struct mlx4_wqe_ctrl_seg {int dummy; } ;
struct TYPE_2__ {int wqe_shift; int max_gs; scalar_t__ max_post; scalar_t__ wqe_cnt; } ;
struct mlx4_qp {int max_inline_data; TYPE_1__ sq; scalar_t__ sq_spare_wqes; } ;
struct ibv_qp_cap {int max_send_sge; int max_inline_data; scalar_t__ max_send_wr; } ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;






 int VAR_0 ;
 int FUNC_0 (int,int) ;

void FUNC_1(struct mlx4_qp *VAR_1, struct ibv_qp_cap *VAR_2,
         enum ibv_qp_type VAR_3)
{
 int VAR_4;

 VAR_4 = (1 << VAR_1->sq.wqe_shift) - sizeof (struct mlx4_wqe_ctrl_seg);
 switch (VAR_3) {
 case 129:
  VAR_4 -= sizeof (struct mlx4_wqe_datagram_seg);
  break;

 case 128:
 case 130:
 case 131:
  VAR_4 -= sizeof (struct mlx4_wqe_raddr_seg);
  break;

 default:
  break;
 }

 VAR_1->sq.max_gs = VAR_4 / sizeof (struct mlx4_wqe_data_seg);
 VAR_2->max_send_sge = VAR_1->sq.max_gs;
 VAR_1->sq.max_post = VAR_1->sq.wqe_cnt - VAR_1->sq_spare_wqes;
 VAR_2->max_send_wr = VAR_1->sq.max_post;







 VAR_1->max_inline_data = VAR_4 -
  sizeof (struct mlx4_wqe_inline_seg) *
  (FUNC_0(VAR_4, VAR_0) / VAR_0);
 VAR_2->max_inline_data = VAR_1->max_inline_data;
}
