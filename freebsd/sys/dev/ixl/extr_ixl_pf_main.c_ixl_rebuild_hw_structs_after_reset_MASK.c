
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ixl_vsi {TYPE_3__* shared; int num_tx_queues; } ;
struct TYPE_5__ {int asq_last_status; } ;
struct TYPE_4__ {int num_rx_qp; int num_tx_qp; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ func_caps; } ;
struct ixl_pf {int qtag; int qmgr; int dev; struct ixl_vsi vsi; struct i40e_hw hw; } ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ isc_intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct i40e_hw*,int ,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,int *) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (struct i40e_hw*,int ,int ,int ,int ) ;
 int FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (struct i40e_hw*,int *,int) ;
 int FUNC_9 (struct i40e_hw*,int) ;
 scalar_t__ FUNC_10 (struct ixl_pf*) ;
 int FUNC_11 (struct ixl_pf*) ;
 int FUNC_12 (struct ixl_vsi*) ;
 int FUNC_13 (struct i40e_hw*) ;
 int FUNC_14 (struct ixl_pf*) ;
 int FUNC_15 (struct ixl_pf*) ;
 int FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (struct ixl_pf*) ;

int
FUNC_18(struct ixl_pf *VAR_7)
{
 struct i40e_hw *VAR_8 = &VAR_7->hw;
 struct ixl_vsi *VAR_9 = &VAR_7->vsi;
 device_t VAR_10 = VAR_7->dev;
 int VAR_11 = 0;

 FUNC_0(VAR_10, "Rebuilding driver state...\n");

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_10, "PF reset failure %s\n",
      FUNC_9(VAR_8, VAR_11));
  goto ixl_rebuild_hw_structs_after_reset_err;
 }


 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11 != 0 && VAR_11 != VAR_2) {
  FUNC_0(VAR_10, "Unable to initialize Admin Queue, error %d\n",
      VAR_11);
  goto ixl_rebuild_hw_structs_after_reset_err;
 }

 FUNC_3(VAR_8);

 VAR_11 = FUNC_15(VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_10, "ixl_get_hw_capabilities failed: %d\n", VAR_11);
  goto ixl_rebuild_hw_structs_after_reset_err;
 }

 VAR_11 = FUNC_6(VAR_8, VAR_8->func_caps.num_tx_qp,
     VAR_8->func_caps.num_rx_qp, 0, 0);
 if (VAR_11) {
  FUNC_0(VAR_10, "init_lan_hmc failed: %d\n", VAR_11);
  goto ixl_rebuild_hw_structs_after_reset_err;
 }

 VAR_11 = FUNC_4(VAR_8, VAR_3);
 if (VAR_11) {
  FUNC_0(VAR_10, "configure_lan_hmc failed: %d\n", VAR_11);
  goto ixl_rebuild_hw_structs_after_reset_err;
 }


 VAR_11 = FUNC_16(&VAR_7->qmgr, VAR_9->num_tx_queues, &VAR_7->qtag);
 if (VAR_11) {
  FUNC_0(VAR_10, "Failed to reserve queues for PF LAN VSI, error %d\n",
      VAR_11);

 }

 VAR_11 = FUNC_17(VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_10, "ixl_rebuild_hw_structs_after_reset: ixl_switch_config() failed: %d\n",
       VAR_11);
  VAR_11 = VAR_1;
  goto ixl_rebuild_hw_structs_after_reset_err;
 }

 VAR_11 = FUNC_2(VAR_8, VAR_5,
     ((void*)0));
        if (VAR_11) {
  FUNC_0(VAR_10, "init: i40e_aq_set_phy_mask() failed: err %d,"
      " aq_err %d\n", VAR_11, VAR_8->aq.asq_last_status);
  VAR_11 = VAR_1;
  goto ixl_rebuild_hw_structs_after_reset_err;
 }

 u8 VAR_12;
 VAR_11 = FUNC_8(VAR_8, &VAR_12, 1);
 if (VAR_11) {
  FUNC_0(VAR_10, "init: setting link flow control failed; retcode %d,"
      " fc_err_mask 0x%02x\n", VAR_11, VAR_12);
  VAR_11 = VAR_1;
  goto ixl_rebuild_hw_structs_after_reset_err;
 }


 FUNC_12(VAR_9);


 if (FUNC_10(VAR_7)) {
  VAR_11 = VAR_0;

 }

 FUNC_1(VAR_8, VAR_6, ((void*)0));
 FUNC_14(VAR_7);


 if (VAR_9->shared->isc_intr == VAR_4) {
   FUNC_11(VAR_7);
   FUNC_13(VAR_8);
 }

 FUNC_0(VAR_10, "Rebuilding driver state done.\n");
 return (0);

ixl_rebuild_hw_structs_after_reset_err:
 FUNC_0(VAR_10, "Reload the driver to recover\n");
 return (VAR_11);
}
