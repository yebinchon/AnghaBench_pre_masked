
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int prev; } ;
struct TYPE_3__ {scalar_t__ active; } ;
struct mlx5_flow_table {TYPE_2__ fgs; TYPE_1__ autogroup; int base; } ;
struct mlx5_flow_group {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_flow_group* FUNC_0 (int ) ;
 struct mlx5_flow_group* FUNC_1 (struct mlx5_core_dev*,struct mlx5_flow_table*,int ,int *,int) ;
 struct mlx5_core_dev* FUNC_2 (int *) ;

struct mlx5_flow_group *FUNC_3(struct mlx5_flow_table *VAR_2,
            u32 *VAR_3)
{
 struct mlx5_flow_group *VAR_4;
 struct mlx5_core_dev *VAR_5 = FUNC_2(&VAR_2->base);

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (VAR_2->autogroup.active)
  return FUNC_0(-VAR_1);

 VAR_4 = FUNC_1(VAR_5, VAR_2, VAR_2->fgs.prev, VAR_3, 1);

 return VAR_4;
}
