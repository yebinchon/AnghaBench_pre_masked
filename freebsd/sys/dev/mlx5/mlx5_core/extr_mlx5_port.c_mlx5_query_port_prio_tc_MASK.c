
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int,int *,int,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct mlx5_core_dev *VAR_4,
       u8 VAR_5, u8 *VAR_6)
{
 u32 VAR_7[FUNC_2(VAR_2)];
 u32 VAR_8[FUNC_2(VAR_2)];
 int VAR_9;

 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 FUNC_3(VAR_8, 0, sizeof(VAR_8));

 FUNC_1(VAR_2, VAR_7, VAR_1, 1);
 FUNC_1(VAR_2, VAR_7, VAR_5, VAR_5);

 VAR_9 = FUNC_4(VAR_4, VAR_7, sizeof(VAR_7), VAR_8,
       sizeof(VAR_8), VAR_0, 0, 0);
 if (!VAR_9)
  *VAR_6 = FUNC_0(VAR_2, VAR_8, VAR_3);

 return VAR_9;
}
