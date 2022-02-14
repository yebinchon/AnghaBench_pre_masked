
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,int) ;
 int VAR_3 ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct mlx5_core_dev *VAR_4)
{
 bool VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_3) {
  FUNC_3(VAR_4, "fast unload is disabled by user\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_5);
 VAR_6 = FUNC_0(VAR_4, VAR_6);

 FUNC_3(VAR_4, "force teardown firmware support=%d\n", VAR_6);
 FUNC_3(VAR_4, "fast teardown firmware support=%d\n", VAR_5);

 if (!VAR_5 && !VAR_6)
  return -VAR_1;

 if (VAR_4->state == VAR_2) {
  FUNC_3(VAR_4, "Device in internal error state, giving up\n");
  return -VAR_0;
 }




 FUNC_4(VAR_4);
 FUNC_7(VAR_4, 0);

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  goto done;

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7)
  goto done;

 FUNC_3(VAR_4, "Firmware couldn't do fast unload error: %d\n", VAR_7);
 FUNC_6(VAR_4);
 return VAR_7;
done:
 FUNC_5(VAR_4, 1);
 return 0;
}
