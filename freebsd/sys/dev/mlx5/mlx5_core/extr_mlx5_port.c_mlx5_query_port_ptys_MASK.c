
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int,int *,int,int ,int ,int ) ;
 int VAR_1 ;

int FUNC_4(struct mlx5_core_dev *VAR_2, u32 *VAR_3,
    int VAR_4, int VAR_5, u8 VAR_6)
{
 u32 VAR_7[FUNC_1(VAR_1)];
 int VAR_8;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 FUNC_0(VAR_1, VAR_7, VAR_6, VAR_6);
 FUNC_0(VAR_1, VAR_7, VAR_5, VAR_5);

 VAR_8 = FUNC_3(VAR_2, VAR_7, sizeof(VAR_7), VAR_3,
       VAR_4, VAR_0, 0, 0);

 return VAR_8;
}
