
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uar {int index; int map; int bf_map; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;

void FUNC_3(struct mlx5_core_dev *VAR_0, struct mlx5_uar *VAR_1)
{
 FUNC_0(VAR_1->bf_map);
 FUNC_1(VAR_1->map);
 FUNC_2(VAR_0, VAR_1->index);
}
