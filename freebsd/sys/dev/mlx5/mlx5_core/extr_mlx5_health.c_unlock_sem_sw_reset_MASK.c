
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_1)
{
 int VAR_2;


 VAR_2 = -FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1, "Timed out locking gateway %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = -FUNC_3(VAR_1, VAR_0);


 FUNC_2(VAR_1);

 return VAR_2;
}
