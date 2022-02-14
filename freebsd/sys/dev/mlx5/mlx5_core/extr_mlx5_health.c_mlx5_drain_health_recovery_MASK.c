
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int recover_work; int wq_lock; int flags; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_core_health *VAR_2 = &VAR_1->priv.health;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->wq_lock, VAR_3);
 FUNC_1(VAR_0, &VAR_2->flags);
 FUNC_3(&VAR_2->wq_lock, VAR_3);
 FUNC_0(&VAR_1->priv.health.recover_work);
}
