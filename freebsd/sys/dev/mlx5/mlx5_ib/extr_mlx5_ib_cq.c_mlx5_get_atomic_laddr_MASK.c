
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mlx5_wqe_raddr_seg {int dummy; } ;
struct mlx5_wqe_data_seg {int addr; } ;
struct mlx5_wqe_ctrl_seg {int dummy; } ;
struct mlx5_wqe_atomic_seg {int dummy; } ;
struct mlx5_ib_qp {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct mlx5_wqe_data_seg* FUNC_1 (struct mlx5_ib_qp*,int ) ;

__attribute__((used)) static void *FUNC_2(struct mlx5_ib_qp *VAR_0, uint16_t VAR_1)
{
 struct mlx5_wqe_data_seg *VAR_2;
 void *VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1) + sizeof(struct mlx5_wqe_ctrl_seg) +
  sizeof(struct mlx5_wqe_raddr_seg) +
  sizeof(struct mlx5_wqe_atomic_seg);
 VAR_3 = (void *)(unsigned long)FUNC_0(VAR_2->addr);
 return VAR_3;
}
