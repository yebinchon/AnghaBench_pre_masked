
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_mr_cache {TYPE_1__* ent; } ;
struct mlx5_ib_dev {struct mlx5_mr_cache cache; } ;
struct TYPE_2__ {int order; } ;



__attribute__((used)) static int FUNC_0(struct mlx5_ib_dev *VAR_0, int VAR_1)
{
 struct mlx5_mr_cache *VAR_2 = &VAR_0->cache;

 if (VAR_1 < VAR_2->ent[0].order)
  return 0;
 else
  return VAR_1 - VAR_2->ent[0].order;
}
