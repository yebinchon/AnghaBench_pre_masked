
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ixl_vsi {int seid; scalar_t__ enable_head_writeback; TYPE_2__* shared; int ifp; } ;
struct TYPE_3__ {int * addr; } ;
struct i40e_hw {TYPE_1__ mac; } ;
struct ixl_pf {scalar_t__ iw_enabled; struct i40e_hw hw; struct ixl_vsi vsi; } ;
struct ifnet {int dummy; } ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ isc_intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct i40e_hw*,int ,int *,int *) ;
 int FUNC_5 (struct i40e_hw*,int ,int *) ;
 int FUNC_6 (struct i40e_hw*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int ) ;
 struct ifnet* FUNC_10 (int ) ;
 struct ixl_pf* FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct ixl_vsi*,int *,int ) ;
 int FUNC_14 (struct ixl_pf*) ;
 int FUNC_15 (struct ixl_pf*) ;
 int FUNC_16 (struct ixl_pf*) ;
 int FUNC_17 (struct ixl_pf*) ;
 int FUNC_18 (struct ixl_vsi*,int *,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_19 (struct ixl_vsi*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct ixl_vsi*) ;
 int FUNC_23 (struct ixl_vsi*) ;
 scalar_t__ FUNC_24 (struct ixl_vsi*) ;
 int FUNC_25 (struct ixl_pf*) ;
 int FUNC_26 (struct ixl_pf*) ;
 int FUNC_27 (struct ixl_vsi*) ;
 int FUNC_28 (struct ixl_pf*) ;

void
FUNC_29(if_ctx_t VAR_7)
{
 struct ixl_pf *VAR_8 = FUNC_11(VAR_7);
 struct ixl_vsi *VAR_9 = &VAR_8->vsi;
 struct i40e_hw *VAR_10 = &VAR_8->hw;
 struct ifnet *VAR_11 = FUNC_10(VAR_7);
 device_t VAR_12 = FUNC_9(VAR_7);
 u8 VAR_13[VAR_0];
 int VAR_14;






 if (!FUNC_6(&VAR_8->hw)) {
  FUNC_3(VAR_12, "Admin Queue is down; resetting...\n");
  FUNC_28(VAR_8);
  FUNC_26(VAR_8);
 }


 FUNC_1(FUNC_0(VAR_9->ifp), VAR_13, VAR_1);
 if (!FUNC_2(VAR_10->mac.addr, VAR_13) &&
     (FUNC_7(VAR_13) == VAR_3)) {
  FUNC_18(VAR_9, VAR_10->mac.addr, VAR_5);
  FUNC_1(VAR_13, VAR_10->mac.addr, VAR_1);
  VAR_14 = FUNC_4(VAR_10,
      VAR_2,
      VAR_10->mac.addr, ((void*)0));
  if (VAR_14) {
   FUNC_3(VAR_12, "LLA address change failed!!\n");
   return;
  }
  FUNC_13(VAR_9, VAR_10->mac.addr, VAR_5);
 }

 FUNC_12(VAR_7, VAR_10->mac.addr);


 if (FUNC_24(VAR_9)) {
  FUNC_3(VAR_12, "initialize vsi failed!!\n");
  return;
 }


 FUNC_20(VAR_7);


 FUNC_14(VAR_8);


 if (VAR_9->shared->isc_intr == VAR_4) {
  FUNC_17(VAR_8);
  FUNC_15(VAR_8);
 } else
  FUNC_16(VAR_8);

 if (VAR_9->enable_head_writeback)
  FUNC_22(VAR_9);
 else
  FUNC_23(VAR_9);

 FUNC_19(VAR_9);

 FUNC_5(VAR_10, VAR_9->seid, ((void*)0));


 FUNC_27(VAR_9);


 FUNC_21(VAR_7, FUNC_8(VAR_11));
}
