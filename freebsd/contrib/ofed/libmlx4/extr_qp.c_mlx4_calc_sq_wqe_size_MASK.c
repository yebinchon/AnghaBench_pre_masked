
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
struct mlx4_wqe_bind_seg {int dummy; } ;
struct mlx4_wqe_atomic_seg {int dummy; } ;
struct TYPE_2__ {int wqe_shift; } ;
struct mlx4_qp {TYPE_1__ sq; } ;
struct ibv_qp_cap {int max_send_sge; scalar_t__ max_inline_data; } ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;






 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;

void FUNC_2(struct ibv_qp_cap *VAR_0, enum ibv_qp_type VAR_1,
      struct mlx4_qp *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->max_inline_data +
     FUNC_1(VAR_0->max_inline_data, VAR_1) *
     sizeof (struct mlx4_wqe_inline_seg),
     sizeof (struct mlx4_wqe_data_seg)) /
  sizeof (struct mlx4_wqe_data_seg);
 if (VAR_4 < VAR_0->max_send_sge)
  VAR_4 = VAR_0->max_send_sge;

 VAR_3 = VAR_4 * sizeof (struct mlx4_wqe_data_seg);
 switch (VAR_1) {
 case 129:
  VAR_3 += sizeof (struct mlx4_wqe_datagram_seg);
  break;

 case 130:
  VAR_3 += sizeof (struct mlx4_wqe_raddr_seg);
  break;

 case 128:
 case 131:
  VAR_3 += sizeof (struct mlx4_wqe_raddr_seg);




  if (VAR_3 < (sizeof (struct mlx4_wqe_atomic_seg) +
       sizeof (struct mlx4_wqe_raddr_seg) +
       sizeof (struct mlx4_wqe_data_seg)))
   VAR_3 = (sizeof (struct mlx4_wqe_atomic_seg) +
    sizeof (struct mlx4_wqe_raddr_seg) +
    sizeof (struct mlx4_wqe_data_seg));
  break;

 default:
  break;
 }


 if (VAR_3 < sizeof (struct mlx4_wqe_bind_seg))
  VAR_3 = sizeof (struct mlx4_wqe_bind_seg);

 VAR_3 += sizeof (struct mlx4_wqe_ctrl_seg);

 for (VAR_2->sq.wqe_shift = 6; 1 << VAR_2->sq.wqe_shift < VAR_3;
      VAR_2->sq.wqe_shift++)
  ;
}
