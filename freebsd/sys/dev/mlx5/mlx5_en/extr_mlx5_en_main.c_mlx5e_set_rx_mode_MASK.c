
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int set_rx_mode_work; int wq; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_0)
{
 struct mlx5e_priv *VAR_1 = VAR_0->if_softc;

 FUNC_0(VAR_1->wq, &VAR_1->set_rx_mode_work);
}
