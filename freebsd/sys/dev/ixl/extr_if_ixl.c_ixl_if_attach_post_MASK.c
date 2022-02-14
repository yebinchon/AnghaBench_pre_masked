
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ixl_vsi {TYPE_2__* shared; int num_tx_queues; int num_rx_queues; int ifp; } ;
struct TYPE_10__ {int num_active; int num_allocated; } ;
struct TYPE_9__ {scalar_t__ iwarp; int num_tx_qp; } ;
struct TYPE_8__ {int get_link_info; } ;
struct TYPE_6__ {int asq_last_status; } ;
struct i40e_hw {TYPE_4__ func_caps; TYPE_3__ phy; TYPE_1__ aq; } ;
struct ixl_pf {int iw_enabled; scalar_t__ iw_msix; int link_up; TYPE_5__ qtag; int qmgr; struct i40e_hw hw; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;
struct TYPE_7__ {scalar_t__ isc_intr; int isc_ntxqsets; int isc_nrxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct i40e_hw*,int ,int *) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int *) ;
 int FUNC_6 (struct i40e_hw*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ixl_pf* FUNC_9 (int ) ;
 int FUNC_10 (struct ixl_pf*) ;
 int FUNC_11 (struct ixl_pf*) ;
 scalar_t__ FUNC_12 (struct ixl_pf*) ;
 int FUNC_13 (struct ixl_pf*) ;
 int FUNC_14 (struct i40e_hw*) ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (struct ixl_pf*) ;
 int FUNC_16 (struct ixl_vsi*) ;
 int FUNC_17 (struct ixl_pf*) ;
 int FUNC_18 (struct ixl_pf*) ;
 int FUNC_19 (int *,int ,TYPE_5__*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (struct ixl_pf*) ;
 int FUNC_22 (struct ixl_pf*) ;
 scalar_t__ FUNC_23 (int ,struct ixl_pf*) ;
 int FUNC_24 (struct ixl_pf*) ;
 int FUNC_25 (struct ixl_pf*) ;
 int FUNC_26 (struct ixl_pf*) ;
 int FUNC_27 (int ,int ) ;

__attribute__((used)) static int
FUNC_28(if_ctx_t VAR_5)
{
 device_t VAR_6;
 struct ixl_pf *VAR_7;
 struct i40e_hw *VAR_8;
 struct ixl_vsi *VAR_9;
 int VAR_10 = 0;
 enum i40e_status_code VAR_11;

 FUNC_0(VAR_6, "begin");

 VAR_6 = FUNC_7(VAR_5);
 VAR_7 = FUNC_9(VAR_5);
 VAR_9 = &VAR_7->vsi;
 VAR_9->ifp = FUNC_8(VAR_5);
 VAR_8 = &VAR_7->hw;


 VAR_9->num_rx_queues = VAR_9->shared->isc_nrxqsets;
 VAR_9->num_tx_queues = VAR_9->shared->isc_ntxqsets;


 if (FUNC_23(VAR_6, VAR_7)) {
  FUNC_2(VAR_6, "interface setup failed!\n");
  VAR_10 = VAR_1;
  goto err;
 }


 if (FUNC_12(VAR_7)) {
  VAR_10 = VAR_0;
  goto err;
 }

 VAR_10 = FUNC_24(VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_6, "Initial ixl_switch_config() failed: %d\n",
       VAR_10);
  goto err;
 }


 FUNC_16(VAR_9);


 VAR_10 = FUNC_20(&VAR_7->qmgr, VAR_8->func_caps.num_tx_qp);
 if (VAR_10) {
  FUNC_2(VAR_6, "Failed to init queue manager for PF queues, error %d\n",
      VAR_10);
  goto err;
 }

 VAR_10 = FUNC_19(&VAR_7->qmgr,
     FUNC_27(VAR_9->num_rx_queues, VAR_9->num_tx_queues), &VAR_7->qtag);
 if (VAR_10) {
  FUNC_2(VAR_6, "Failed to reserve queues for PF LAN VSI, error %d\n",
      VAR_10);
  goto err;
 }
 FUNC_2(VAR_6, "Allocating %d queues for PF LAN VSI; %d queues active\n",
     VAR_7->qtag.num_allocated, VAR_7->qtag.num_active);


 VAR_11 = FUNC_3(VAR_8, VAR_3,
     ((void*)0));
        if (VAR_11) {
  FUNC_2(VAR_6, "i40e_aq_set_phy_mask() failed: err %s,"
      " aq_err %s\n", FUNC_6(VAR_8, VAR_11),
      FUNC_4(VAR_8, VAR_8->aq.asq_last_status));
  goto err;
 }


 FUNC_15(VAR_7);


 if (VAR_9->shared->isc_intr == VAR_2) {
   FUNC_13(VAR_7);
   FUNC_14(VAR_8);
 }


 FUNC_22(VAR_7);


 FUNC_10(VAR_7);
 FUNC_21(VAR_7);
 FUNC_26(VAR_7);
 FUNC_11(VAR_7);

 VAR_8->phy.get_link_info = 1;
 FUNC_5(VAR_8, &VAR_7->link_up);
 FUNC_25(VAR_7);
 FUNC_0(VAR_6, "end");
 return (0);

err:
 FUNC_1("end: error %d", VAR_10);

 return (VAR_10);
}
