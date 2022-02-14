
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_mr_table {int tree; int lock; } ;
struct TYPE_2__ {struct mlx5_mr_table mr_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mlx5_mr_table*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_mr_table *VAR_2 = &VAR_1->priv.mr_table;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_2->tree, VAR_0);
}
