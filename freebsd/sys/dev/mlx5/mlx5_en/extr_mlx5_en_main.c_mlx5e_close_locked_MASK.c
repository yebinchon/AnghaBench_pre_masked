
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int counter_set_id; int mdev; int ifp; int state; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int FUNC_8 (struct mlx5e_priv*) ;
 int FUNC_9 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

int
FUNC_11(struct ifnet *VAR_3)
{
 struct mlx5e_priv *VAR_4 = VAR_3->if_softc;


 if (FUNC_10(VAR_1, &VAR_4->state) == 0)
  return (0);

 FUNC_0(VAR_1, &VAR_4->state);

 FUNC_9(VAR_4);
 FUNC_8(VAR_4);
 FUNC_1(VAR_4->ifp, VAR_0);
 FUNC_4(VAR_4);
 FUNC_6(VAR_4);
 FUNC_5(VAR_4);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4->mdev,
     VAR_2, VAR_4->counter_set_id);
 FUNC_7(VAR_4);

 return (0);
}
