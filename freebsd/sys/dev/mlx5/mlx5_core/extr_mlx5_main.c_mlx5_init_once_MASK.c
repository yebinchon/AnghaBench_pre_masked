
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_priv {int cq_uar_lock; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,char*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (struct mlx5_core_dev*) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (struct mlx5_core_dev*) ;
 int FUNC_14 (struct mlx5_core_dev*) ;
 int FUNC_15 (struct mlx5_core_dev*) ;
 int FUNC_16 (struct mlx5_core_dev*) ;
 int FUNC_17 (struct mlx5_core_dev*) ;

__attribute__((used)) static int FUNC_18(struct mlx5_core_dev *VAR_0, struct mlx5_priv *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_17(VAR_0);
 if (VAR_2)
  FUNC_5(VAR_0, "Unable to find vendor specific capabilities\n");

 VAR_2 = FUNC_16(VAR_0);
 if (VAR_2) {
  FUNC_5(VAR_0, "query hca failed\n");
  goto out;
 }

 VAR_2 = FUNC_15(VAR_0);
 if (VAR_2) {
  FUNC_5(VAR_0, "query board id failed\n");
  goto out;
 }

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2) {
  FUNC_5(VAR_0, "failed to initialize eq\n");
  goto out;
 }

 FUNC_0(&VAR_1->cq_uar_lock);

 VAR_2 = FUNC_9(VAR_0);
 if (VAR_2) {
  FUNC_5(VAR_0, "failed to initialize cq table\n");
  goto err_eq_cleanup;
 }

 FUNC_11(VAR_0);
 FUNC_14(VAR_0);
 FUNC_10(VAR_0);

 FUNC_12(VAR_0);
 FUNC_8(VAR_0);
 return 0;
err_eq_cleanup:
 FUNC_6(VAR_0);

out:
 return VAR_2;
}
