
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int work_watchdog; int work; int recover_work; int wq_lock; int flags; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_core_health *VAR_4 = &VAR_3->priv.health;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->wq_lock, VAR_5);
 FUNC_2(VAR_0, &VAR_4->flags);
 FUNC_2(VAR_1, &VAR_4->flags);
 FUNC_2(VAR_2, &VAR_4->flags);
 FUNC_4(&VAR_4->wq_lock, VAR_5);
 FUNC_0(&VAR_4->recover_work);
 FUNC_1(&VAR_4->work);
 FUNC_1(&VAR_4->work_watchdog);
}
