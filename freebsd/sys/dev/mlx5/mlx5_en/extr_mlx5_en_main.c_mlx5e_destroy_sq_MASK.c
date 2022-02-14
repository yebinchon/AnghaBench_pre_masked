
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
struct mlx5e_sq {int dma_tag; int uar; TYPE_2__* priv; int wq_ctrl; TYPE_1__ stats; } ;
struct TYPE_4__ {int mdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_sq*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct mlx5e_sq *VAR_0)
{

 FUNC_4(&VAR_0->stats.ctx);

 FUNC_3(VAR_0);
 FUNC_2(&VAR_0->wq_ctrl);
 FUNC_1(VAR_0->priv->mdev, &VAR_0->uar);
 FUNC_0(VAR_0->dma_tag);
}
