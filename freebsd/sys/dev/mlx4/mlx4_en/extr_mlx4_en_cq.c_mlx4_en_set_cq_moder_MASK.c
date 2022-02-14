
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {TYPE_1__* mdev; } ;
struct mlx4_en_cq {int moder_time; int moder_cnt; int mcq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int *,int ,int ) ;

int FUNC_1(struct mlx4_en_priv *VAR_0, struct mlx4_en_cq *VAR_1)
{
 return FUNC_0(VAR_0->mdev->dev, &VAR_1->mcq,
         VAR_1->moder_cnt, VAR_1->moder_time);
}
