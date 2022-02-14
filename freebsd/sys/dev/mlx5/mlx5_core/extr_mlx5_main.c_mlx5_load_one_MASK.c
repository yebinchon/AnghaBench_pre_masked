
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_priv {int uuari; } ;
struct mlx5_core_dev {int intf_state_mutex; int state; int intf_state; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_8 (struct mlx5_core_dev*) ;
 int FUNC_9 (struct mlx5_core_dev*,int *) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*) ;
 int FUNC_13 (struct mlx5_core_dev*) ;
 int FUNC_14 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_15 (struct mlx5_core_dev*) ;
 int FUNC_16 (struct mlx5_core_dev*,char*,int ,int ,int ) ;
 int FUNC_17 (struct mlx5_core_dev*) ;
 int FUNC_18 (struct mlx5_core_dev*) ;
 int FUNC_19 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_20 (struct mlx5_core_dev*) ;
 int FUNC_21 (struct mlx5_core_dev*,char*) ;
 int FUNC_22 (struct mlx5_core_dev*) ;
 int FUNC_23 (struct mlx5_core_dev*) ;
 int FUNC_24 (struct mlx5_core_dev*) ;
 int FUNC_25 (struct mlx5_core_dev*) ;
 int FUNC_26 (struct mlx5_core_dev*,int *) ;
 int FUNC_27 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_28 (struct mlx5_core_dev*,struct mlx5_priv*) ;
 int FUNC_29 (struct mlx5_core_dev*) ;
 int FUNC_30 (struct mlx5_core_dev*) ;
 int FUNC_31 (struct mlx5_core_dev*) ;
 int FUNC_32 (struct mlx5_core_dev*) ;
 int FUNC_33 (struct mlx5_core_dev*) ;
 int FUNC_34 (struct mlx5_core_dev*) ;
 int FUNC_35 (struct mlx5_core_dev*,int) ;
 int FUNC_36 (struct mlx5_core_dev*) ;
 int FUNC_37 (struct mlx5_core_dev*) ;
 int FUNC_38 (struct mlx5_core_dev*) ;
 int FUNC_39 (struct mlx5_core_dev*,int) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int ,int *) ;
 int FUNC_43 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_44 (int ,int *) ;
 int FUNC_45 (struct mlx5_core_dev*) ;
 int FUNC_46 (struct mlx5_core_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_47(struct mlx5_core_dev *VAR_6, struct mlx5_priv *VAR_7,
    bool VAR_8)
{
 int VAR_9;

 FUNC_40(&VAR_6->intf_state_mutex);
 if (FUNC_44(VAR_5, &VAR_6->intf_state)) {
  FUNC_21(VAR_6, "interface is up, NOP\n");
  goto out;
 }

 FUNC_16(VAR_6, "firmware version: %d.%d.%d\n",
     FUNC_3(VAR_6), FUNC_4(VAR_6), FUNC_5(VAR_6));





 VAR_6->state = VAR_4;



 VAR_9 = FUNC_46(VAR_6, VAR_2,
     VAR_1);
 if (VAR_9) {
  FUNC_1(&VAR_6->pdev->dev,
      "Firmware over %d MS in pre-initializing state, aborting\n",
      VAR_2);
  goto out_err;
 }

 VAR_9 = FUNC_13(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6,
      "Failed initializing command interface, aborting\n");
  goto out_err;
 }

 VAR_9 = FUNC_46(VAR_6, VAR_0, 0);
 if (VAR_9) {
  FUNC_19(VAR_6,
      "Firmware over %d MS in initializing state, aborting\n",
      VAR_0);
  goto err_cmd_cleanup;
 }

 VAR_9 = FUNC_18(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "enable hca failed\n");
  goto err_cmd_cleanup;
 }

 VAR_9 = FUNC_20(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "failed to set issi\n");
  goto err_disable_hca;
 }

 VAR_9 = FUNC_31(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "mlx5_pagealloc_start failed\n");
  goto err_disable_hca;
 }

 VAR_9 = FUNC_35(VAR_6, 1);
 if (VAR_9) {
  FUNC_19(VAR_6, "failed to allocate boot pages\n");
  goto err_pagealloc_stop;
 }

 VAR_9 = FUNC_43(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "set_hca_ctrl failed\n");
  goto reclaim_boot_pages;
 }

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "handle_hca_cap failed\n");
  goto reclaim_boot_pages;
 }

 VAR_9 = FUNC_7(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "handle_hca_cap_atomic failed\n");
  goto reclaim_boot_pages;
 }

 VAR_9 = FUNC_35(VAR_6, 0);
 if (VAR_9) {
  FUNC_19(VAR_6, "failed to allocate init pages\n");
  goto reclaim_boot_pages;
 }

 VAR_9 = FUNC_14(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "init hca failed\n");
  goto reclaim_boot_pages;
 }

 FUNC_37(VAR_6);

 if (VAR_8 && FUNC_28(VAR_6, VAR_7)) {
  FUNC_19(VAR_6, "sw objs init failed\n");
  goto err_stop_poll;
 }

 VAR_9 = FUNC_23(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "enable msix failed\n");
  goto err_cleanup_once;
 }

 VAR_9 = FUNC_9(VAR_6, &VAR_7->uuari);
 if (VAR_9) {
  FUNC_19(VAR_6, "Failed allocating uar, aborting\n");
  goto err_disable_msix;
 }

 VAR_9 = FUNC_36(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "Failed to start pages and async EQs\n");
  goto err_free_uar;
 }

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "Failed to alloc completion EQs\n");
  goto err_stop_eqs;
 }

 if (FUNC_8(VAR_6))
  FUNC_19(VAR_6, "Failed to map blue flame area\n");

 VAR_9 = FUNC_27(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "flow steering init %d\n", VAR_9);
  goto err_free_comp_eqs;
 }

 VAR_9 = FUNC_30(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "mpfs init failed %d\n", VAR_9);
  goto err_fs;
 }

 VAR_9 = FUNC_24(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "fpga device start failed %d\n", VAR_9);
  goto err_mpfs;
 }

 VAR_9 = FUNC_34(VAR_6);
 if (VAR_9) {
  FUNC_19(VAR_6, "mlx5_register_device failed %d\n", VAR_9);
  goto err_fpga;
 }

 FUNC_42(VAR_5, &VAR_6->intf_state);

out:
 FUNC_41(&VAR_6->intf_state_mutex);
 return 0;

err_fpga:
 FUNC_25(VAR_6);

err_mpfs:
 FUNC_29(VAR_6);

err_fs:
 FUNC_10(VAR_6);

err_free_comp_eqs:
 FUNC_2(VAR_6);
 FUNC_45(VAR_6);

err_stop_eqs:
 FUNC_38(VAR_6);

err_free_uar:
 FUNC_26(VAR_6, &VAR_7->uuari);

err_disable_msix:
 FUNC_22(VAR_6);

err_cleanup_once:
 if (VAR_8)
  FUNC_11(VAR_6);

err_stop_poll:
 FUNC_39(VAR_6, VAR_8);
 if (FUNC_15(VAR_6)) {
  FUNC_19(VAR_6, "tear_down_hca failed, skip cleanup\n");
  goto out_err;
 }

reclaim_boot_pages:
 FUNC_33(VAR_6);

err_pagealloc_stop:
 FUNC_32(VAR_6);

err_disable_hca:
 FUNC_17(VAR_6);

err_cmd_cleanup:
 FUNC_12(VAR_6);

out_err:
 VAR_6->state = VAR_3;
 FUNC_41(&VAR_6->intf_state_mutex);

 return VAR_9;
}
