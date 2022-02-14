
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int,int *,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_2,
         u32 *VAR_3, u8 *VAR_4,
         u8 *VAR_5)
{
 u32 VAR_6[FUNC_2(VAR_1)];
 u32 VAR_7[FUNC_2(VAR_1)];
 int VAR_8;

 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 FUNC_3(VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_1, VAR_7, VAR_3, *VAR_3);

 VAR_8 = FUNC_4(VAR_2, VAR_7, sizeof(VAR_7), VAR_6,
       sizeof(VAR_6), VAR_0, 0, 0);
 if (VAR_8)
  goto out;

 *VAR_3 = FUNC_0(VAR_1, VAR_6, VAR_3);
 *VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_4);
 *VAR_5 = FUNC_0(VAR_1, VAR_6, VAR_5);

out:
 return VAR_8;
}
