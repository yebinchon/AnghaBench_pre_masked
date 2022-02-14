
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mlx5_wqe_raddr_seg {int dummy; } ;
struct mlx5_wqe_data_seg {int addr; } ;
struct mlx5_wqe_ctrl_seg {int dummy; } ;
struct mlx5_wqe_atomic_seg {int dummy; } ;
struct mlx5_qp {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct mlx5_wqe_data_seg* FUNC_1 (struct mlx5_qp*,int ) ;

void *FUNC_2(struct mlx5_qp *VAR_0, uint16_t VAR_1, int *VAR_2)
{
 struct mlx5_wqe_data_seg *VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1) + sizeof(struct mlx5_wqe_ctrl_seg) +
  sizeof(struct mlx5_wqe_raddr_seg) +
  sizeof(struct mlx5_wqe_atomic_seg);
 VAR_4 = (void *)(unsigned long)FUNC_0(VAR_3->addr);





 *VAR_2 = 8;
 return VAR_4;
}
