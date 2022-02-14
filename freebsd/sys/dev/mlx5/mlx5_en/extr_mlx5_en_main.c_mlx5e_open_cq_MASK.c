
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_cq_param {int dummy; } ;
struct mlx5e_cq {int dummy; } ;
typedef int mlx5e_cq_comp_t ;


 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_cq_param*,struct mlx5e_cq*,int *,int) ;
 int FUNC_1 (struct mlx5e_cq*) ;
 int FUNC_2 (struct mlx5e_cq*,struct mlx5e_cq_param*,int) ;

int
FUNC_3(struct mlx5e_priv *VAR_0,
    struct mlx5e_cq_param *VAR_1,
    struct mlx5e_cq *VAR_2,
    mlx5e_cq_comp_t *VAR_3,
    int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_4);
 if (VAR_5)
  goto err_destroy_cq;

 return (0);

err_destroy_cq:
 FUNC_1(VAR_2);

 return (VAR_5);
}
