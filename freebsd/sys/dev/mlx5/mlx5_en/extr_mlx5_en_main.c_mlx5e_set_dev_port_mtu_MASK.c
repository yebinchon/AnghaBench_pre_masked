
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_mtu; } ;
struct mlx5e_priv {TYPE_1__ params_ethtool; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ifnet {int if_mtu; struct mlx5e_priv* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*,char*,...) ;
 int FUNC_3 (struct mlx5_core_dev*,int*) ;
 int FUNC_4 (struct mlx5_core_dev*,int*) ;
 int FUNC_5 (struct mlx5_core_dev*,int) ;
 int FUNC_6 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_2, int VAR_3)
{
 struct mlx5e_priv *VAR_4 = VAR_2->if_softc;
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3);

 VAR_7 = FUNC_5(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_2, "mlx5_set_port_mtu failed setting %d, err=%d\n",
      VAR_3, VAR_7);
  return (VAR_7);
 }


 VAR_7 = FUNC_6(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_2,
      "Failed updating vport context with MTU size, err=%d\n",
      VAR_7);
 }

 VAR_2->if_mtu = VAR_3;

 VAR_7 = FUNC_4(VAR_5, &VAR_6);
 if (VAR_7 || !VAR_6) {

  VAR_7 = FUNC_3(VAR_5, &VAR_6);
 }
 if (VAR_7) {
  FUNC_2(VAR_2,
      "Query port MTU, after setting new MTU value, failed\n");
  return (VAR_7);
 } else if (FUNC_0(VAR_6) < VAR_3) {
  VAR_7 = -VAR_0,
  FUNC_2(VAR_2,
      "Port MTU %d is smaller than ifp mtu %d\n",
      VAR_6, VAR_3);
 } else if (FUNC_0(VAR_6) > VAR_3) {
  VAR_7 = -VAR_1;
                FUNC_2(VAR_2,
      "Port MTU %d is bigger than ifp mtu %d\n",
      VAR_6, VAR_3);
 }
 VAR_4->params_ethtool.hw_mtu = VAR_6;

 return (VAR_7);
}
