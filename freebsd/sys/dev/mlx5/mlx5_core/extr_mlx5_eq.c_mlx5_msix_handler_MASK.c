
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq {struct mlx5_core_dev* dev; } ;
struct TYPE_2__ {scalar_t__ disable_irqs; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_eq*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct mlx5_eq *VAR_3 = VAR_2;
 struct mlx5_core_dev *VAR_4 = VAR_3->dev;


 if (FUNC_0(VAR_4->priv.disable_irqs == 0))
  FUNC_1(VAR_4, VAR_3);


 return VAR_0;
}
