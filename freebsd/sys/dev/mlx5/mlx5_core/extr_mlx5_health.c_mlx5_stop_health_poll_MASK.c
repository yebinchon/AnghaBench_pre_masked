
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int timer; int wq_lock; int flags; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mlx5_core_dev *VAR_3, bool VAR_4)
{
 struct mlx5_core_health *VAR_5 = &VAR_3->priv.health;
 unsigned long VAR_6;

 if (VAR_4) {
  FUNC_2(&VAR_5->wq_lock, VAR_6);
  FUNC_1(VAR_0, &VAR_5->flags);
  FUNC_1(VAR_1, &VAR_5->flags);
  FUNC_1(VAR_2, &VAR_5->flags);
  FUNC_3(&VAR_5->wq_lock, VAR_6);
 }

 FUNC_0(&VAR_5->timer);
}
