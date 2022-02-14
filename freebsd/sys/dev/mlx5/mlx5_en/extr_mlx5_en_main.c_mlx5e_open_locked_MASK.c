
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ num_channels; } ;
struct mlx5e_priv {int counter_set_id; int mdev; int state; struct ifnet* ifp; TYPE_1__ params; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,char*,int) ;
 int FUNC_1 (struct ifnet*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int FUNC_8 (struct mlx5e_priv*) ;
 int FUNC_9 (struct mlx5e_priv*) ;
 int FUNC_10 (struct mlx5e_priv*) ;
 int FUNC_11 (struct mlx5e_priv*) ;
 int FUNC_12 (struct mlx5e_priv*) ;
 int FUNC_13 (struct mlx5e_priv*) ;
 int FUNC_14 (struct mlx5e_priv*) ;
 int FUNC_15 (struct mlx5e_priv*) ;
 int FUNC_16 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;

int
FUNC_20(struct ifnet *VAR_2)
{
 struct mlx5e_priv *VAR_3 = VAR_2->if_softc;
 int VAR_4;
 u16 VAR_5;


 if (FUNC_19(VAR_0, &VAR_3->state) != 0)
  return (0);
 VAR_4 = FUNC_14(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, "mlx5e_open_tises failed, %d\n", VAR_4);
  return (VAR_4);
 }
 VAR_4 = FUNC_2(VAR_3->mdev,
     VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3->ifp,
      "mlx5_vport_alloc_q_counter failed: %d\n", VAR_4);
  goto err_close_tises;
 }

 VAR_3->counter_set_id = VAR_5;

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2,
      "mlx5e_open_channels failed, %d\n", VAR_4);
  goto err_dalloc_q_counter;
 }
 VAR_4 = FUNC_12(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, "mlx5e_open_rqt failed, %d\n", VAR_4);
  goto err_close_channels;
 }
 VAR_4 = FUNC_13(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, "mlx5e_open_tir failed, %d\n", VAR_4);
  goto err_close_rqls;
 }
 VAR_4 = FUNC_11(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2,
      "mlx5e_open_flow_table failed, %d\n", VAR_4);
  goto err_close_tirs;
 }
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2,
      "mlx5e_add_all_vlan_rules failed, %d\n", VAR_4);
  goto err_close_flow_table;
 }
 FUNC_18(VAR_0, &VAR_3->state);

 FUNC_16(VAR_3);
 FUNC_15(VAR_3);

 return (0);

err_close_flow_table:
 FUNC_6(VAR_3);

err_close_tirs:
 FUNC_8(VAR_3);

err_close_rqls:
 FUNC_7(VAR_3);

err_close_channels:
 FUNC_5(VAR_3);

err_dalloc_q_counter:
 FUNC_3(VAR_3->mdev,
     VAR_1, VAR_3->counter_set_id);

err_close_tises:
 FUNC_9(VAR_3);

 return (VAR_4);
}
