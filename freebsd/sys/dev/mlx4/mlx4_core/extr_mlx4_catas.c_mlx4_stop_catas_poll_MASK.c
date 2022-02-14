
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * map; int timer; } ;
struct mlx4_priv {TYPE_1__ catas_err; } ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct TYPE_4__ {int interface_state; int catas_wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

void FUNC_4(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->catas_err.timer);

 if (VAR_2->catas_err.map) {
  FUNC_2(VAR_2->catas_err.map);
  VAR_2->catas_err.map = ((void*)0);
 }

 if (VAR_1->persist->interface_state & VAR_0)
  FUNC_1(VAR_1->persist->catas_wq);
}
