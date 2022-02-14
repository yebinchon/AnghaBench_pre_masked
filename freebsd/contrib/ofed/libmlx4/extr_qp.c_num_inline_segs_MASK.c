
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_wqe_raddr_seg {int dummy; } ;
struct mlx4_wqe_inline_seg {int dummy; } ;
struct mlx4_wqe_datagram_seg {int dummy; } ;
struct mlx4_wqe_ctrl_seg {int dummy; } ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, enum ibv_qp_type VAR_3)
{
 if (VAR_3 == VAR_0)
  VAR_2 += (sizeof (struct mlx4_wqe_ctrl_seg) +
    sizeof (struct mlx4_wqe_datagram_seg)) %
   VAR_1;
 else
  VAR_2 += (sizeof (struct mlx4_wqe_ctrl_seg) +
    sizeof (struct mlx4_wqe_raddr_seg)) %
   VAR_1;

 return (VAR_2 + VAR_1 - sizeof (struct mlx4_wqe_inline_seg) - 1) /
  (VAR_1 - sizeof (struct mlx4_wqe_inline_seg));
}
