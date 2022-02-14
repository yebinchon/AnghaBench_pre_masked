
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int wq_cmd; int wq_watchdog; int wq; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_core_health *VAR_1 = &VAR_0->priv.health;

 FUNC_0(VAR_1->wq);
 FUNC_0(VAR_1->wq_watchdog);
 FUNC_0(VAR_1->wq_cmd);
}
