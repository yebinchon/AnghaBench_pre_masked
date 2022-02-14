
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_channel_param {int tx_cq; } ;
struct mlx5e_channel {TYPE_1__* sq; int ix; TYPE_2__* priv; } ;
struct TYPE_4__ {int num_tc; } ;
struct TYPE_3__ {int cq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct mlx5e_channel *VAR_1,
    struct mlx5e_channel_param *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->priv->num_tc; VAR_4++) {

  VAR_3 = FUNC_1(VAR_1->priv, &VAR_2->tx_cq, &VAR_1->sq[VAR_4].cq,
      &VAR_0, VAR_1->ix);
  if (VAR_3)
   goto err_close_tx_cqs;
 }
 return (0);

err_close_tx_cqs:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_0(&VAR_1->sq[VAR_4].cq);

 return (VAR_3);
}
