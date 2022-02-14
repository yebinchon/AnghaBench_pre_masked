
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int u32 ;
struct TYPE_13__ {int type; int addr; } ;
struct TYPE_12__ {void* reset_if_overtemp; int smart_speed; } ;
struct TYPE_11__ {int requested_mode; } ;
struct TYPE_9__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_10__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_5__ mac; TYPE_4__ phy; TYPE_3__ fc; int allow_unsupported_sfp; TYPE_2__ mbx; int subsystem_device_id; int subsystem_vendor_id; int revision_id; int device_id; int vendor_id; struct adapter* back; } ;
struct adapter {int feat_en; struct ixgbe_hw hw; void* sfp_probe; int media; TYPE_6__* shared; int dev; int ctx; } ;
typedef TYPE_6__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_15__ {int ift_legacy_intr; } ;
struct TYPE_14__ {int isc_rss_table_size; int isc_ntxqsets_max; int isc_nrxqsets_max; int* isc_ntxd; int* isc_nrxd; int isc_tx_csum_flags; int isc_capenable; int isc_capabilities; TYPE_7__* isc_txrx; int isc_tx_tso_segsize_max; int isc_tx_tso_size_max; int isc_tx_nsegments; int isc_tx_tso_segments_max; int isc_msix_bar; void** isc_rxqsizes; void** isc_txqsizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_20 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 TYPE_6__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct adapter*,int ,void*) ;
 int FUNC_11 (struct adapter*) ;
 int VAR_24 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct adapter*) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*) ;
 int VAR_25 ;
 int VAR_26 ;



 int FUNC_16 (struct ixgbe_hw*) ;
 int VAR_27 ;
 int FUNC_17 (struct ixgbe_hw*) ;
 TYPE_7__ VAR_28 ;
 scalar_t__ FUNC_18 (struct ixgbe_hw*,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 void* FUNC_25 (int,int ) ;
 int FUNC_26 (struct ixgbe_hw*) ;

__attribute__((used)) static int
FUNC_27(if_ctx_t VAR_29)
{
 struct adapter *VAR_30;
 device_t VAR_31;
 if_softc_ctx_t VAR_32;
 struct ixgbe_hw *VAR_33;
 int VAR_34 = 0;
 u32 VAR_35;

 FUNC_0("ixgbe_attach: begin");


 VAR_31 = FUNC_4(VAR_29);
 VAR_30 = FUNC_6(VAR_29);
 VAR_30->hw.back = VAR_30;
 VAR_30->ctx = VAR_29;
 VAR_30->dev = VAR_31;
 VAR_32 = VAR_30->shared = FUNC_7(VAR_29);
 VAR_30->media = FUNC_5(VAR_29);
 VAR_33 = &VAR_30->hw;


 VAR_33->vendor_id = FUNC_23(VAR_31);
 VAR_33->device_id = FUNC_19(VAR_31);
 VAR_33->revision_id = FUNC_20(VAR_31);
 VAR_33->subsystem_vendor_id = FUNC_22(VAR_31);
 VAR_33->subsystem_device_id = FUNC_21(VAR_31);


 if (FUNC_9(VAR_29)) {
  FUNC_3(VAR_31, "Allocation of PCI resources failed\n");
  return (VAR_11);
 }


 VAR_35 = FUNC_1(VAR_33, VAR_16);
 VAR_35 |= VAR_17;
 FUNC_2(VAR_33, VAR_16, VAR_35);




 if (FUNC_14(VAR_33) != 0) {
  FUNC_3(VAR_31, "Unable to initialize the shared code\n");
  VAR_34 = VAR_11;
  goto err_pci;
 }

 if (VAR_33->mbx.ops.init_params)
  VAR_33->mbx.ops.init_params(VAR_33);

 VAR_33->allow_unsupported_sfp = VAR_23;

 if (VAR_33->mac.type != VAR_26)
  VAR_33->phy.smart_speed = VAR_27;

 FUNC_13(VAR_30);


 FUNC_11(VAR_30);


 if (VAR_30->feat_en & VAR_19) {
  u32 VAR_36 = FUNC_1(VAR_33, VAR_18);
  FUNC_10(VAR_30, VAR_36, VAR_12);
 }


 FUNC_15(VAR_33);


 VAR_33->fc.requested_mode = VAR_24;

 VAR_33->phy.reset_if_overtemp = VAR_22;
 VAR_34 = FUNC_16(VAR_33);
 VAR_33->phy.reset_if_overtemp = VAR_12;
 if (VAR_34 == 132) {





  VAR_30->sfp_probe = VAR_22;
  VAR_34 = 0;
 } else if (VAR_34 == 131) {
  FUNC_3(VAR_31, "Unsupported SFP+ module detected!\n");
  VAR_34 = VAR_10;
  goto err_pci;
 } else if (VAR_34) {
  FUNC_3(VAR_31, "Hardware initialization failed\n");
  VAR_34 = VAR_10;
  goto err_pci;
 }


 if (FUNC_18(&VAR_30->hw, ((void*)0)) < 0) {
  FUNC_3(VAR_31, "The EEPROM Checksum Is Not Valid\n");
  VAR_34 = VAR_10;
  goto err_pci;
 }

 VAR_34 = FUNC_17(VAR_33);
 switch (VAR_34) {
 case 133:
  FUNC_3(VAR_31, "This device is a pre-production adapter/LOM.  Please be aware there may be issues associated with your hardware.\nIf you are experiencing problems please contact your Intel or hardware representative who provided you with this hardware.\n");
  break;
 case 131:
  FUNC_3(VAR_31, "Unsupported SFP+ Module\n");
  VAR_34 = VAR_10;
  goto err_pci;
 case 132:
  FUNC_3(VAR_31, "No SFP+ Module found\n");

 default:
  break;
 }



 FUNC_8(VAR_29, VAR_33->mac.addr);
 switch (VAR_30->hw.mac.type) {
 case 130:
 case 128:
 case 129:
  VAR_32->isc_rss_table_size = 512;
  VAR_32->isc_ntxqsets_max = VAR_32->isc_nrxqsets_max = 64;
  break;
 default:
  VAR_32->isc_rss_table_size = 128;
  VAR_32->isc_ntxqsets_max = VAR_32->isc_nrxqsets_max = 16;
 }


 VAR_28.ift_legacy_intr = VAR_25;

 VAR_32->isc_txqsizes[0] =
     FUNC_25(VAR_32->isc_ntxd[0] * sizeof(union ixgbe_adv_tx_desc) +
     sizeof(u32), VAR_9),
 VAR_32->isc_rxqsizes[0] =
     FUNC_25(VAR_32->isc_nrxd[0] * sizeof(union ixgbe_adv_rx_desc),
     VAR_9);


 VAR_32->isc_tx_csum_flags = VAR_0 | VAR_6 | VAR_8 | VAR_7 |
     VAR_2 | VAR_4 | VAR_3;
 if (VAR_30->hw.mac.type == VAR_26) {
  VAR_32->isc_tx_nsegments = VAR_13;
 } else {
  VAR_32->isc_tx_csum_flags |= VAR_5 |VAR_1;
  VAR_32->isc_tx_nsegments = VAR_14;
 }

 VAR_32->isc_msix_bar = FUNC_24(VAR_31);

 VAR_32->isc_tx_tso_segments_max = VAR_32->isc_tx_nsegments;
 VAR_32->isc_tx_tso_size_max = VAR_20;
 VAR_32->isc_tx_tso_segsize_max = VAR_21;

 VAR_32->isc_txrx = &VAR_28;

 VAR_32->isc_capabilities = VAR_32->isc_capenable = VAR_15;

 return (0);

err_pci:
 VAR_35 = FUNC_1(&VAR_30->hw, VAR_16);
 VAR_35 &= ~VAR_17;
 FUNC_2(&VAR_30->hw, VAR_16, VAR_35);
 FUNC_12(VAR_29);

 return (VAR_34);
}
