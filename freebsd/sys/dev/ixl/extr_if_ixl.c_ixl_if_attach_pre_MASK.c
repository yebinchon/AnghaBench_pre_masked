
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union i40e_32byte_rx_desc {int dummy; } i40e_32byte_rx_desc ;
typedef int u32 ;
struct ixl_vsi {scalar_t__ enable_head_writeback; TYPE_4__* shared; int media; int ctx; scalar_t__ num_vlans; scalar_t__ id; struct i40e_hw* hw; void* dev; struct ixl_pf* back; } ;
struct TYPE_8__ {int rss_table_size; int num_rx_qp; int num_tx_qp; } ;
struct TYPE_10__ {scalar_t__ type; int port_addr; int addr; int perm_addr; } ;
struct TYPE_9__ {int api_maj_ver; int api_min_ver; int fw_maj_ver; int fw_min_ver; void* asq_buf_size; void* arq_buf_size; void* num_asq_entries; void* num_arq_entries; } ;
struct i40e_hw {TYPE_1__ func_caps; TYPE_3__ mac; TYPE_2__ aq; } ;
struct ixl_pf {struct i40e_hw hw; int state; void* dev; struct ixl_vsi vsi; } ;
struct i40e_tx_desc {int dummy; } ;
struct i40e_filter_control_settings {int hash_lut_size; int enable_fdir; void* enable_macvlan; void* enable_ethtype; } ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef int filter ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef void* device_t ;
struct TYPE_12__ {int ift_legacy_intr; } ;
struct TYPE_11__ {int isc_ntxqsets_max; int isc_nrxqsets_max; int* isc_ntxd; int* isc_nrxd; int isc_capenable; int isc_capabilities; int isc_tx_csum_flags; int isc_rss_table_size; int isc_tx_tso_segsize_max; int isc_tx_tso_size_max; int isc_tx_tso_segments_max; int isc_tx_nsegments; int isc_msix_bar; void** isc_rxqsizes; TYPE_5__* isc_txrx; void** isc_txqsizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i40e_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (void*,char*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 void* VAR_20 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct i40e_filter_control_settings*,int) ;
 int FUNC_5 (void*,char*,...) ;
 int FUNC_6 (struct i40e_hw*,int,int *) ;
 int FUNC_7 (struct i40e_hw*,void*,int *) ;
 int FUNC_8 (struct i40e_hw*) ;
 int FUNC_9 (struct i40e_hw*) ;
 int FUNC_10 (struct i40e_hw*,int ) ;
 int FUNC_11 (struct i40e_hw*,int ) ;
 int FUNC_12 (struct i40e_hw*,int ) ;
 int FUNC_13 (struct i40e_hw*) ;
 int FUNC_14 (struct i40e_hw*,int ,int ,int ,int ) ;
 int FUNC_15 (struct i40e_hw*) ;
 int FUNC_16 (struct i40e_hw*) ;
 scalar_t__ FUNC_17 (struct i40e_hw*,struct i40e_filter_control_settings*) ;
 int FUNC_18 (struct i40e_hw*) ;
 int FUNC_19 (struct i40e_hw*) ;
 int FUNC_20 (struct i40e_hw*,int) ;
 int FUNC_21 (int ) ;
 void* FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 struct ixl_pf* FUNC_24 (int ) ;
 TYPE_4__* FUNC_25 (int ) ;
 int FUNC_26 (int ,int ) ;
 scalar_t__ FUNC_27 (struct ixl_pf*) ;
 int FUNC_28 (struct ixl_pf*) ;
 int FUNC_29 (struct ixl_pf*) ;
 int FUNC_30 (struct ixl_pf*) ;
 int VAR_21 ;
 int FUNC_31 (struct ixl_pf*) ;
 int FUNC_32 (struct ixl_pf*) ;
 TYPE_5__ VAR_22 ;
 TYPE_5__ VAR_23 ;
 void* FUNC_33 (int,int ) ;

__attribute__((used)) static int
FUNC_34(if_ctx_t VAR_24)
{
 device_t VAR_25;
 struct ixl_pf *VAR_26;
 struct i40e_hw *VAR_27;
 struct ixl_vsi *VAR_28;
 if_softc_ctx_t VAR_29;
 struct i40e_filter_control_settings VAR_30;
 enum i40e_status_code VAR_31;
 int VAR_32 = 0;

 FUNC_1(VAR_25, "begin");

 VAR_25 = FUNC_22(VAR_24);
 VAR_26 = FUNC_24(VAR_24);

 VAR_28 = &VAR_26->vsi;
 VAR_28->back = VAR_26;
 VAR_26->dev = VAR_25;
 VAR_27 = &VAR_26->hw;

 VAR_28->dev = VAR_25;
 VAR_28->hw = &VAR_26->hw;
 VAR_28->id = 0;
 VAR_28->num_vlans = 0;
 VAR_28->ctx = VAR_24;
 VAR_28->media = FUNC_23(VAR_24);
 VAR_28->shared = VAR_29 = FUNC_25(VAR_24);


 FUNC_32(VAR_26);


 if (FUNC_27(VAR_26)) {
  FUNC_5(VAR_25, "Allocation of PCI resources failed\n");
  VAR_32 = VAR_3;
  goto err_pci_res;
 }


 FUNC_8(VAR_27);
 VAR_31 = FUNC_16(VAR_27);
 if (VAR_31) {
  FUNC_5(VAR_25, "PF reset failure %s\n",
      FUNC_20(VAR_27, VAR_31));
  VAR_32 = VAR_2;
  goto err_out;
 }


 VAR_31 = FUNC_15(VAR_27);
 if (VAR_31) {
  FUNC_5(VAR_25, "Unable to initialize shared code, error %s\n",
      FUNC_20(VAR_27, VAR_31));
  VAR_32 = VAR_2;
  goto err_out;
 }


 VAR_27->aq.num_arq_entries = VAR_12;
 VAR_27->aq.num_asq_entries = VAR_12;
 VAR_27->aq.arq_buf_size = VAR_11;
 VAR_27->aq.asq_buf_size = VAR_11;

 VAR_31 = FUNC_13(VAR_27);
 if (VAR_31 != 0 && VAR_31 != VAR_6) {
  FUNC_5(VAR_25, "Unable to initialize Admin Queue, error %s\n",
      FUNC_20(VAR_27, VAR_31));
  VAR_32 = VAR_2;
  goto err_out;
 }
 FUNC_31(VAR_26);

 if (VAR_31 == VAR_6) {
  FUNC_5(VAR_25, "The driver for the device stopped "
      "because the NVM image is newer than expected.\n");
  FUNC_5(VAR_25, "You must install the most recent version of "
      "the network driver.\n");
  VAR_32 = VAR_2;
  goto err_out;
 }

        if (VAR_27->aq.api_maj_ver == VAR_7 &&
     VAR_27->aq.api_min_ver > FUNC_0(VAR_27)) {
  FUNC_5(VAR_25, "The driver for the device detected "
      "a newer version of the NVM image than expected.\n");
  FUNC_5(VAR_25, "Please install the most recent version "
      "of the network driver.\n");
 } else if (VAR_27->aq.api_maj_ver == 1 && VAR_27->aq.api_min_ver < 4) {
  FUNC_5(VAR_25, "The driver for the device detected "
      "an older version of the NVM image than expected.\n");
  FUNC_5(VAR_25, "Please update the NVM image.\n");
 }


 FUNC_9(VAR_27);


 VAR_32 = FUNC_30(VAR_26);
 if (VAR_32) {
  FUNC_5(VAR_25, "get_hw_capabilities failed: %d\n",
      VAR_32);
  goto err_get_cap;
 }


 VAR_31 = FUNC_14(VAR_27, VAR_27->func_caps.num_tx_qp,
     VAR_27->func_caps.num_rx_qp, 0, 0);
 if (VAR_31) {
  FUNC_5(VAR_25, "init_lan_hmc failed: %s\n",
      FUNC_20(VAR_27, VAR_31));
  goto err_get_cap;
 }
 VAR_31 = FUNC_10(VAR_27, VAR_9);
 if (VAR_31) {
  FUNC_5(VAR_25, "configure_lan_hmc failed: %s\n",
      FUNC_20(VAR_27, VAR_31));
  goto err_mac_hmc;
 }


 if (((VAR_26->hw.aq.fw_maj_ver == 4) && (VAR_26->hw.aq.fw_min_ver < 3)) ||
     (VAR_26->hw.aq.fw_maj_ver < 4)) {
  FUNC_7(VAR_27, VAR_20, ((void*)0));
  VAR_26->state |= VAR_18;
 }


 FUNC_11(VAR_27, VAR_27->mac.addr);
 VAR_32 = FUNC_21(VAR_27->mac.addr);
 if (VAR_32) {
  FUNC_5(VAR_25, "validate_mac_addr failed: %d\n", VAR_32);
  goto err_mac_hmc;
 }
 FUNC_3(VAR_27->mac.addr, VAR_27->mac.perm_addr, VAR_4);
 FUNC_26(VAR_24, VAR_27->mac.addr);
 FUNC_12(VAR_27, VAR_27->mac.port_addr);


 FUNC_4(&VAR_30, sizeof(VAR_30));
 VAR_30.enable_ethtype = VAR_20;
 VAR_30.enable_macvlan = VAR_20;
 VAR_30.enable_fdir = VAR_5;
 VAR_30.hash_lut_size = VAR_8;
 if (FUNC_17(VAR_27, &VAR_30))
  FUNC_5(VAR_25, "i40e_set_filter_control() failed\n");


 FUNC_29(VAR_26);

 FUNC_6(VAR_27, 1, ((void*)0));


 if (VAR_27->mac.type == VAR_10)
  VAR_29->isc_ntxqsets_max = VAR_29->isc_nrxqsets_max = 128;
 else
  VAR_29->isc_ntxqsets_max = VAR_29->isc_nrxqsets_max = 64;
 if (VAR_28->enable_head_writeback) {
  VAR_29->isc_txqsizes[0] = FUNC_33(VAR_29->isc_ntxd[0]
      * sizeof(struct i40e_tx_desc) + sizeof(u32), VAR_1);
  VAR_29->isc_txrx = &VAR_23;
 } else {
  VAR_29->isc_txqsizes[0] = FUNC_33(VAR_29->isc_ntxd[0]
      * sizeof(struct i40e_tx_desc), VAR_1);
  VAR_29->isc_txrx = &VAR_22;
 }
 VAR_29->isc_txrx->ift_legacy_intr = VAR_21;
 VAR_29->isc_rxqsizes[0] = FUNC_33(VAR_29->isc_nrxd[0]
     * sizeof(union i40e_32byte_rx_desc), VAR_1);
 VAR_29->isc_msix_bar = FUNC_2(VAR_17);
 VAR_29->isc_tx_nsegments = VAR_16;
 VAR_29->isc_tx_tso_segments_max = VAR_15;
 VAR_29->isc_tx_tso_size_max = VAR_19;
 VAR_29->isc_tx_tso_segsize_max = VAR_14;
 VAR_29->isc_rss_table_size = VAR_26->hw.func_caps.rss_table_size;
 VAR_29->isc_tx_csum_flags = VAR_0;
 VAR_29->isc_capabilities = VAR_29->isc_capenable = VAR_13;

 FUNC_1(VAR_25, "end");
 return (0);

err_mac_hmc:
 FUNC_19(VAR_27);
err_get_cap:
 FUNC_18(VAR_27);
err_out:
 FUNC_28(VAR_26);
err_pci_res:
 return (VAR_32);
}
