
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wq_cmd; } ;
struct TYPE_4__ {TYPE_1__ health; } ;
struct mlx5_cmd {int dummy; } ;
struct mlx5_core_dev {TYPE_2__ priv; struct mlx5_cmd cmd; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5_cmd*) ;

void FUNC_4(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_cmd *VAR_1 = &VAR_0->cmd;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0->priv.health.wq_cmd);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0, VAR_1);
}
