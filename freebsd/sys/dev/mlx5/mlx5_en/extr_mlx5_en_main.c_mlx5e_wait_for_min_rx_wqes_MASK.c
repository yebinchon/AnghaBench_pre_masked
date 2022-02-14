
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wq_ll {scalar_t__ cur_sz; } ;
struct mlx5e_rq {struct mlx5_wq_ll wq; struct mlx5e_channel* channel; } ;
struct TYPE_2__ {scalar_t__ min_rx_wqes; } ;
struct mlx5e_priv {TYPE_1__ params; } ;
struct mlx5e_channel {struct mlx5e_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct mlx5e_rq *VAR_1)
{
 struct mlx5e_channel *VAR_2 = VAR_1->channel;
 struct mlx5e_priv *VAR_3 = VAR_2->priv;
 struct mlx5_wq_ll *VAR_4 = &VAR_1->wq;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  if (VAR_4->cur_sz >= VAR_3->params.min_rx_wqes)
   return (0);

  FUNC_0(4);
 }
 return (-VAR_0);
}
