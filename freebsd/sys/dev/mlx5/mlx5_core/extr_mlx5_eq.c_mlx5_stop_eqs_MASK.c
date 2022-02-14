
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq_table {int cmd_eq; int async_eq; int pages_eq; } ;
struct TYPE_2__ {struct mlx5_eq_table eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;

int FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_eq_table *VAR_1 = &VAR_0->priv.eq_table;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, &VAR_1->pages_eq);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0, &VAR_1->async_eq);
 FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_0, &VAR_1->cmd_eq);
 if (VAR_2)
  FUNC_0(VAR_0);

 return VAR_2;
}
