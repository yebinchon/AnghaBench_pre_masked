
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; } ;
struct mlx4_priv {TYPE_2__ eq_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 size_t FUNC_0 (int) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->eq_table.eq[FUNC_0(VAR_1)].irq;
}
