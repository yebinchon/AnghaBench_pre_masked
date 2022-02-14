
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ns; } ;
struct mlx5e_priv {int mdev; TYPE_1__ fts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;

int
FUNC_6(struct mlx5e_priv *VAR_1)
{
 int VAR_2;

 VAR_1->fts.ns = FUNC_0(VAR_1->mdev,
            VAR_0);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return (VAR_2);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto err_destroy_vlan_flow_table;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto err_destroy_main_flow_table;

 return (0);

err_destroy_main_flow_table:
 FUNC_4(VAR_1);
err_destroy_vlan_flow_table:
 FUNC_5(VAR_1);

 return (VAR_2);
}
