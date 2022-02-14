
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_channel_param {int tx_cq; int rx_cq; int sq; int rq; } ;


 int FUNC_0 (struct mlx5e_channel_param*,int ,int) ;
 int FUNC_1 (struct mlx5e_priv*,int *) ;
 int FUNC_2 (struct mlx5e_priv*,int *) ;
 int FUNC_3 (struct mlx5e_priv*,int *) ;
 int FUNC_4 (struct mlx5e_priv*,int *) ;

__attribute__((used)) static void
FUNC_5(struct mlx5e_priv *VAR_0,
    struct mlx5e_channel_param *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 FUNC_1(VAR_0, &VAR_1->rq);
 FUNC_3(VAR_0, &VAR_1->sq);
 FUNC_2(VAR_0, &VAR_1->rx_cq);
 FUNC_4(VAR_0, &VAR_1->tx_cq);
}
