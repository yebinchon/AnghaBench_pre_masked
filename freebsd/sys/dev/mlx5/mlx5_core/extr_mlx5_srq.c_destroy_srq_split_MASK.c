
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ res; } ;
struct mlx5_core_srq {TYPE_1__ common; } ;
struct mlx5_core_dev {int issi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_core_srq*) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_core_srq*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_core_srq*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_1, struct mlx5_core_srq *VAR_2)
{
 if (!VAR_1->issi)
  return FUNC_1(VAR_1, VAR_2);
 else if (VAR_2->common.res == VAR_0)
  return FUNC_2(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
