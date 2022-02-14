
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_health {int timer; int * health_counter; int * health; int flags; int fatal_error; } ;
struct TYPE_3__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_2__* iseg; TYPE_1__ priv; } ;
struct TYPE_4__ {int health_counter; int health; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,unsigned long) ;

void FUNC_6(struct mlx5_core_dev *VAR_7)
{
 struct mlx5_core_health *VAR_8 = &VAR_7->priv.health;

 FUNC_1(&VAR_8->timer);
 VAR_8->fatal_error = VAR_4;
 FUNC_0(VAR_0, &VAR_8->flags);
 FUNC_0(VAR_1, &VAR_8->flags);
 FUNC_0(VAR_2, &VAR_8->flags);
 VAR_8->health = &VAR_7->iseg->health;
 VAR_8->health_counter = &VAR_7->iseg->health_counter;

 FUNC_5(&VAR_8->timer, VAR_6, (unsigned long)VAR_7);
 FUNC_3(&VAR_8->timer,
    FUNC_4(VAR_5 + VAR_3));


 FUNC_2(VAR_7);
}
