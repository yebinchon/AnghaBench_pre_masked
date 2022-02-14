
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mlx5_core_dev*,int *,int,int,int) ;
 int VAR_3 ;

int FUNC_3(struct mlx5_core_dev *VAR_4,
         u32 *VAR_5, int VAR_6)
{
 u32 VAR_7[FUNC_1(VAR_3)];
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_7, sizeof(VAR_7), VAR_6, 1);
 if (VAR_8)
  return VAR_8;

 if (VAR_6 == VAR_0)
  *VAR_5 = FUNC_0(VAR_3, VAR_7, VAR_1);
 else
  *VAR_5 = FUNC_0(VAR_3, VAR_7, VAR_2);

 return 0;
}
