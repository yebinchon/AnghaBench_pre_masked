
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_priv {int * tirn; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int,int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (struct mlx5e_priv*,void*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct mlx5e_priv *VAR_3, int VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_3->mdev;
 u32 *VAR_6;
 void *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_1);
 VAR_6 = FUNC_4(VAR_8);
 if (VAR_6 == ((void*)0))
  return (-VAR_0);
 VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_2);

 FUNC_5(VAR_3, VAR_7, VAR_4);

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_8, &VAR_3->tirn[VAR_4]);

 FUNC_2(VAR_6);

 return (VAR_9);
}
