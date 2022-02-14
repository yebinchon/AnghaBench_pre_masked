
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int VAR_0 ;

int FUNC_8(struct mlx5_core_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1, VAR_0)) {
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2)
   goto err;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto err;

 return 0;
err:
 FUNC_7(VAR_1);
 return VAR_2;
}
