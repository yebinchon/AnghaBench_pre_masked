
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {TYPE_1__* mdev; } ;
struct mlx4_en_cq {int mcq; int timer; int is_tx; int cq_task; int tq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct mlx4_en_priv *VAR_0, struct mlx4_en_cq *VAR_1)
{
 FUNC_3(VAR_1->tq, &VAR_1->cq_task);
 if (!VAR_1->is_tx) {
  FUNC_2();
 } else {
  FUNC_0(&VAR_1->timer);
 }

 FUNC_1(VAR_0->mdev->dev, &VAR_1->mcq);
}
