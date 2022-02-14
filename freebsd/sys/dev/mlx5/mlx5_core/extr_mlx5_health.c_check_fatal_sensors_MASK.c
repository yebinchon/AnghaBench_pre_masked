
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*) ;

__attribute__((used)) static u32 FUNC_5(struct mlx5_core_dev *VAR_6)
{
 if (FUNC_4(VAR_6))
  return VAR_4;
 if (FUNC_0(VAR_6->pdev))
  return VAR_5;
 if (FUNC_2(VAR_6))
  return VAR_1;
 if (FUNC_3(VAR_6))
  return VAR_2;
 if (FUNC_1(VAR_6))
  return VAR_0;

 return VAR_3;
}
