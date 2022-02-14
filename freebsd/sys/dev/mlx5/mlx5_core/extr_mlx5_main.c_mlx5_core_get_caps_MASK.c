
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_cap_type { ____Placeholder_mlx5_cap_type } mlx5_cap_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int,int ) ;

int FUNC_1(struct mlx5_core_dev *VAR_2, enum mlx5_cap_type VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_3, VAR_1);
}
