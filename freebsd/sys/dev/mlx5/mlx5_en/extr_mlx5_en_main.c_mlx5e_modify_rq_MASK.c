
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int rqn; struct mlx5e_channel* channel; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_channel {struct mlx5e_priv* priv; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_5 (int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct mlx5e_rq *VAR_6, int VAR_7, int VAR_8)
{
 struct mlx5e_channel *VAR_9 = VAR_6->channel;
 struct mlx5e_priv *VAR_10 = VAR_9->priv;
 struct mlx5_core_dev *VAR_11 = VAR_10->mdev;

 void *VAR_12;
 void *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_2);
 VAR_12 = FUNC_5(VAR_14);
 if (VAR_12 == ((void*)0))
  return (-VAR_0);

 VAR_13 = FUNC_0(VAR_2, VAR_12, VAR_1);

 FUNC_1(VAR_2, VAR_12, VAR_4, VAR_6->rqn);
 FUNC_1(VAR_2, VAR_12, VAR_3, VAR_7);
 FUNC_1(VAR_13, VAR_13, VAR_5, VAR_8);

 VAR_15 = FUNC_4(VAR_11, VAR_12, VAR_14);

 FUNC_3(VAR_12);

 return (VAR_15);
}
