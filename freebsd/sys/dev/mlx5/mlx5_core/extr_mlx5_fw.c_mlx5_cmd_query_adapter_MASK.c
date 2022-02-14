
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_3, u32 *VAR_4,
      int VAR_5)
{
 u32 VAR_6[FUNC_1(VAR_2)];
 int VAR_7;

 FUNC_2(VAR_6, 0, sizeof(VAR_6));

 FUNC_0(VAR_2, VAR_6, VAR_1, VAR_0);

 VAR_7 = FUNC_3(VAR_3, VAR_6, sizeof(VAR_6), VAR_4, VAR_5);
 return VAR_7;
}
