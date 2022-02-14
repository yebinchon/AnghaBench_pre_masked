
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int (* reset_hw ) (struct ixgbe_hw*) ;int (* init_hw ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int type; int addr; int perm_addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; struct adapter* back; } ;
struct adapter {struct ixgbe_hw hw; int media; TYPE_3__* shared; int ctx; int dev; } ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef int device_t ;
typedef int addr ;
struct TYPE_7__ {int isc_ntxqsets_max; int isc_nrxqsets_max; int* isc_ntxd; int* isc_nrxd; int isc_tx_csum_flags; int isc_capabilities; int isc_capenable; int * isc_txrx; int isc_tx_tso_segsize_max; int isc_tx_tso_size_max; int isc_tx_nsegments; int isc_tx_tso_segments_max; int isc_msix_bar; void** isc_rxqsizes; void** isc_txqsizes; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int ,int ,char*,int,struct adapter*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int**,int,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct adapter* FUNC_10 (int ) ;
 TYPE_3__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct ixgbe_hw*) ;
 int FUNC_14 (struct ixgbe_hw*) ;



 int VAR_20 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct adapter*) ;
 int FUNC_20 (struct adapter*) ;
 int VAR_21 ;
 int FUNC_21 (int ) ;
 void* FUNC_22 (int,int ) ;
 int FUNC_23 (struct ixgbe_hw*) ;
 int FUNC_24 (struct ixgbe_hw*) ;

__attribute__((used)) static int
FUNC_25(if_ctx_t VAR_22)
{
 struct adapter *VAR_23;
 device_t VAR_24;
 if_softc_ctx_t VAR_25;
 struct ixgbe_hw *VAR_26;
 int VAR_27 = 0;

 FUNC_0("ixv_attach: begin");


 VAR_24 = FUNC_8(VAR_22);
 VAR_23 = FUNC_10(VAR_22);
 VAR_23->dev = VAR_24;
 VAR_23->ctx = VAR_22;
 VAR_23->hw.back = VAR_23;
 VAR_25 = VAR_23->shared = FUNC_11(VAR_22);
 VAR_23->media = FUNC_9(VAR_22);
 VAR_26 = &VAR_23->hw;


 if (FUNC_15(VAR_22)) {
  FUNC_7(VAR_24, "ixv_allocate_pci_resources() failed!\n");
  VAR_27 = VAR_11;
  goto err_out;
 }


 FUNC_1(FUNC_5(VAR_24),
     FUNC_2(FUNC_6(VAR_24)), VAR_18, "debug",
     VAR_8 | VAR_7, VAR_23, 0, VAR_21, "I",
     "Debug Info");


 FUNC_18(VAR_22);
 FUNC_19(VAR_23);


 VAR_27 = FUNC_14(VAR_26);
 if (VAR_27) {
  FUNC_7(VAR_24, "ixgbe_init_ops_vf() failed!\n");
  VAR_27 = VAR_10;
  goto err_out;
 }


 FUNC_13(VAR_26);

 VAR_27 = VAR_26->mac.ops.reset_hw(VAR_26);
 if (VAR_27 == VAR_16)
  FUNC_7(VAR_24, "...reset_hw() failure: Reset Failed!\n");
 else if (VAR_27)
  FUNC_7(VAR_24, "...reset_hw() failed with error %d\n",
      VAR_27);
 if (VAR_27) {
  VAR_27 = VAR_10;
  goto err_out;
 }

 VAR_27 = VAR_26->mac.ops.init_hw(VAR_26);
 if (VAR_27) {
  FUNC_7(VAR_24, "...init_hw() failed with error %d\n",
      VAR_27);
  VAR_27 = VAR_10;
  goto err_out;
 }


 VAR_27 = FUNC_20(VAR_23);
 if (VAR_27) {
  FUNC_7(VAR_24,
      "Mailbox API negotiation failed during attach!\n");
  goto err_out;
 }


 if (!FUNC_16(VAR_26->mac.addr)) {
  u8 VAR_28[VAR_12];
  FUNC_3(&VAR_28, sizeof(VAR_28), 0);
  VAR_28[0] &= 0xFE;
  VAR_28[0] |= 0x02;
  FUNC_4(VAR_28, VAR_26->mac.addr, sizeof(VAR_28));
  FUNC_4(VAR_28, VAR_26->mac.perm_addr, sizeof(VAR_28));
 }



 FUNC_12(VAR_22, VAR_26->mac.addr);
 switch (VAR_23->hw.mac.type) {
 case 128:
 case 129:
 case 130:
  VAR_25->isc_ntxqsets_max = VAR_25->isc_nrxqsets_max = 2;
  break;
 default:
  VAR_25->isc_ntxqsets_max = VAR_25->isc_nrxqsets_max = 1;
 }
 VAR_25->isc_txqsizes[0] =
     FUNC_22(VAR_25->isc_ntxd[0] * sizeof(union ixgbe_adv_tx_desc) +
     sizeof(u32), VAR_9);
 VAR_25->isc_rxqsizes[0] =
     FUNC_22(VAR_25->isc_nrxd[0] * sizeof(union ixgbe_adv_rx_desc),
     VAR_9);

 VAR_25->isc_tx_csum_flags = VAR_0 | VAR_4 | VAR_6 | VAR_5 |
     VAR_1 | VAR_3 | VAR_2;
 VAR_25->isc_tx_nsegments = VAR_14;
 VAR_25->isc_msix_bar = FUNC_21(VAR_24);
 VAR_25->isc_tx_tso_segments_max = VAR_25->isc_tx_nsegments;
 VAR_25->isc_tx_tso_size_max = VAR_17;
 VAR_25->isc_tx_tso_segsize_max = VAR_19;

 VAR_25->isc_txrx = &VAR_20;






 VAR_25->isc_capabilities = VAR_15;
 VAR_25->isc_capabilities ^= VAR_13;
 VAR_25->isc_capenable = VAR_25->isc_capabilities;

 FUNC_0("ixv_if_attach_pre: end");

 return (0);

err_out:
 FUNC_17(VAR_22);

 return (VAR_27);
}
