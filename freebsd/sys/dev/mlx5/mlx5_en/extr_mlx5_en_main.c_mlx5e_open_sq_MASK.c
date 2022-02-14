
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_sq_param {int dummy; } ;
struct mlx5e_sq {int cev_factor; int running; } ;
struct mlx5e_channel {TYPE_2__* priv; } ;
struct TYPE_3__ {int tx_completion_fact; } ;
struct TYPE_4__ {int * tisn; TYPE_1__ params_ethtool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mlx5e_channel*,int,struct mlx5e_sq_param*,struct mlx5e_sq*) ;
 int FUNC_2 (struct mlx5e_sq*) ;
 int FUNC_3 (struct mlx5e_sq*) ;
 int FUNC_4 (struct mlx5e_sq*,struct mlx5e_sq_param*,int ) ;
 int FUNC_5 (struct mlx5e_sq*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct mlx5e_channel *VAR_2,
    int VAR_3,
    struct mlx5e_sq_param *VAR_4,
    struct mlx5e_sq *VAR_5)
{
 int VAR_6;

 VAR_5->cev_factor = VAR_2->priv->params_ethtool.tx_completion_fact;


 if (VAR_5->cev_factor == 0)
  VAR_5->cev_factor = 1;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return (VAR_6);

 VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_2->priv->tisn[VAR_3]);
 if (VAR_6)
  goto err_destroy_sq;

 VAR_6 = FUNC_5(VAR_5, VAR_1, VAR_0);
 if (VAR_6)
  goto err_disable_sq;

 FUNC_0(VAR_5->running, 1);

 return (0);

err_disable_sq:
 FUNC_3(VAR_5);
err_destroy_sq:
 FUNC_2(VAR_5);

 return (VAR_6);
}
