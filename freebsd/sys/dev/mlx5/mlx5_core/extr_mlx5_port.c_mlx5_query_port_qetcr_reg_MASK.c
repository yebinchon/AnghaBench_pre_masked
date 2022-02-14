
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int,int *,int,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_4, u32 *VAR_5,
         int VAR_6)
{
 u32 VAR_7[FUNC_1(VAR_3)];

 if (!FUNC_0(VAR_4, VAR_2))
  return -VAR_0;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 return FUNC_3(VAR_4, VAR_7, sizeof(VAR_7), VAR_5, VAR_6,
        VAR_1, 0, 0);
}
