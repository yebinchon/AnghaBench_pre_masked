
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,scalar_t__,scalar_t__*) ;

int FUNC_3(struct mlx5_core_dev *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;
 if (VAR_4 != 0)
  return VAR_0;

 return 0;
}
