
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_2)
{
 int VAR_3;


 VAR_3 = -FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2, "Timed out locking gateway %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = -FUNC_3(VAR_2, VAR_1);
 if (VAR_3) {
  if (VAR_3 == -VAR_0)
   FUNC_0(VAR_2,
       "SW reset FW semaphore already locked, another function will handle the reset\n");
  else
   FUNC_1(VAR_2,
       "SW reset semaphore lock return %d\n", VAR_3);
 }


 FUNC_4(VAR_2);

 return VAR_3;
}
