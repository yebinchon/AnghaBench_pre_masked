
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;


 int FUNC_1 (struct mlx5_core_dev*,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int VAR_1 ;

int FUNC_3(struct mlx5_core_dev *VAR_2,
           u64 *VAR_3)
{
 switch (FUNC_0(VAR_2, VAR_1)) {
 case 128:
  return FUNC_1(VAR_2,
             VAR_3);

 case 129:
  return FUNC_2(VAR_2,
             VAR_3);

 default:
  return -VAR_0;
 }
}
