
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_ib_cq {int cqe_size; } ;
struct ib_cq {int dummy; } ;


 struct mlx5_ib_cq* FUNC_0 (struct ib_cq*) ;

int FUNC_1(struct mlx5_ib_dev *VAR_0, struct ib_cq *VAR_1)
{
 struct mlx5_ib_cq *VAR_2;

 if (!VAR_1)
  return 128;

 VAR_2 = FUNC_0(VAR_1);
 return VAR_2->cqe_size;
}
