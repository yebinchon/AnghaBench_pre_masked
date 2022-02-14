
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct mlx5_core_dev*,int *,int,int *,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_4,
          u16 VAR_5,
          u32 *VAR_6,
          u8 *VAR_7,
          u16 *VAR_8)
{
 u32 VAR_9[FUNC_3(VAR_3) + FUNC_3(VAR_2)];
 int VAR_10 = FUNC_3(VAR_3);
 u32 VAR_11[FUNC_3(VAR_3)];
 int VAR_12;

 FUNC_4(VAR_11, 0, sizeof(VAR_11));
 FUNC_4(VAR_9, 0, sizeof(VAR_9));

 FUNC_1(VAR_3, VAR_11, VAR_5, VAR_5);
 FUNC_1(VAR_3, VAR_11, VAR_1, FUNC_2(VAR_2));

 VAR_12 = FUNC_5(VAR_4, VAR_11, sizeof(VAR_11), VAR_9,
       sizeof(VAR_9), VAR_0, 0, 0);
 if (VAR_12)
  goto out;

 *VAR_6 = FUNC_0(VAR_2, VAR_9 + VAR_10, VAR_6);
 *VAR_7 = FUNC_0(VAR_2, VAR_9 + VAR_10, VAR_7);
 *VAR_8 = FUNC_0(VAR_2, VAR_9 + VAR_10, VAR_8);

out:
 return VAR_12;
}
