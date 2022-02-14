
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int rqn; struct mlx5e_channel* channel; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_channel {struct mlx5e_priv* priv; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_rq *VAR_0)
{
 struct mlx5e_channel *VAR_1 = VAR_0->channel;
 struct mlx5e_priv *VAR_2 = VAR_1->priv;
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;

 FUNC_0(VAR_3, VAR_0->rqn);
}
