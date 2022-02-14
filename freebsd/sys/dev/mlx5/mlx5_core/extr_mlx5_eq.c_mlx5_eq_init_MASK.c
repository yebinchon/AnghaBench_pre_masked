
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ eq_table; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->priv.eq_table.lock);

 VAR_1 = 0;

 return VAR_1;
}
