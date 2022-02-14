
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_qflush; int if_transmit; int if_ioctl; struct atse_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct atse_softc {int atse_phy_addr; int * xchan_rx; int atse_eth_addr; int atse_miibus; struct ifnet* atse_ifp; int atse_bmcr1; int atse_bmcr0; int atse_mtx; int atse_tick; int * br; int br_mtx; int dev; int ih_rx; int * xdma_rx; int * xchan_tx; int ih_tx; int * xdma_tx; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atse_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (struct atse_softc*) ;
 int FUNC_6 (struct atse_softc*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int * FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int ) ;
 struct atse_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (struct ifnet*,int ) ;
 struct ifnet* FUNC_16 (int ) ;
 int FUNC_17 (struct ifnet*,int ,int) ;
 int FUNC_18 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_19 (int *,char*,int *,int ) ;
 void* FUNC_20 (int *,int ) ;
 void* FUNC_21 (int ,char*) ;
 int FUNC_22 (int *,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,struct atse_softc*,int *) ;

int
FUNC_25(device_t VAR_36)
{
 struct atse_softc *VAR_37;
 struct ifnet *VAR_38;
 uint32_t VAR_39;
 int VAR_40;

 VAR_37 = FUNC_12(VAR_36);
 VAR_37->dev = VAR_36;


 VAR_37->xdma_tx = FUNC_21(VAR_37->dev, "tx");
 if (VAR_37->xdma_tx == ((void*)0)) {
  FUNC_14(VAR_36, "Can't find DMA controller.\n");
  return (VAR_9);
 }







 VAR_39 = VAR_27;


 VAR_37->xchan_tx = FUNC_20(VAR_37->xdma_tx, VAR_39);
 if (VAR_37->xchan_tx == ((void*)0)) {
  FUNC_14(VAR_36, "Can't alloc virtual DMA channel.\n");
  return (VAR_9);
 }


 VAR_40 = FUNC_24(VAR_37->xchan_tx, VAR_35, VAR_37, &VAR_37->ih_tx);
 if (VAR_40) {
  FUNC_14(VAR_37->dev,
      "Can't setup xDMA interrupt handler.\n");
  return (VAR_9);
 }

 FUNC_22(VAR_37->xchan_tx,
     VAR_26,
     VAR_15,
     8,
     16,
     0,
     VAR_6,
     VAR_5);


 VAR_37->xdma_rx = FUNC_21(VAR_37->dev, "rx");
 if (VAR_37->xdma_rx == ((void*)0)) {
  FUNC_14(VAR_36, "Can't find DMA controller.\n");
  return (VAR_9);
 }


 VAR_37->xchan_rx = FUNC_20(VAR_37->xdma_rx, VAR_39);
 if (VAR_37->xchan_rx == ((void*)0)) {
  FUNC_14(VAR_36, "Can't alloc virtual DMA channel.\n");
  return (VAR_9);
 }


 VAR_40 = FUNC_24(VAR_37->xchan_rx, VAR_34, VAR_37, &VAR_37->ih_rx);
 if (VAR_40) {
  FUNC_14(VAR_37->dev,
      "Can't setup xDMA interrupt handler.\n");
  return (VAR_9);
 }

 FUNC_22(VAR_37->xchan_rx,
     VAR_25,
     VAR_15,
     1,
     16,
     0,
     VAR_6,
     VAR_5);

 FUNC_19(&VAR_37->br_mtx, "buf ring mtx", ((void*)0), VAR_20);
 VAR_37->br = FUNC_8(VAR_4, VAR_22,
     VAR_23, &VAR_37->br_mtx);
 if (VAR_37->br == ((void*)0)) {
  return (VAR_7);
 }

 FUNC_4(VAR_36);

 FUNC_19(&VAR_37->atse_mtx, FUNC_11(VAR_36), VAR_21,
     VAR_20);

 FUNC_9(&VAR_37->atse_tick, &VAR_37->atse_mtx, 0);
 VAR_37->atse_phy_addr = FUNC_13(VAR_36);
 VAR_37->atse_bmcr1 = VAR_17;
 FUNC_0(VAR_37, VAR_2, VAR_37->atse_phy_addr);


 FUNC_5(VAR_37);


 VAR_38 = VAR_37->atse_ifp = FUNC_16(VAR_14);
 if (VAR_38 == ((void*)0)) {
  FUNC_14(VAR_36, "if_alloc() failed\n");
  VAR_40 = VAR_8;
  goto err;
 }
 VAR_38->if_softc = VAR_37;
 FUNC_17(VAR_38, FUNC_10(VAR_36), FUNC_13(VAR_36));
 VAR_38->if_flags = VAR_11 | VAR_13 | VAR_12;
 VAR_38->if_ioctl = VAR_31;
 VAR_38->if_transmit = VAR_33;
 VAR_38->if_qflush = VAR_32;
 VAR_38->if_init = VAR_30;
 FUNC_1(&VAR_38->if_snd, VAR_0 - 1);
 VAR_38->if_snd.ifq_drv_maxlen = VAR_0 - 1;
 FUNC_2(&VAR_38->if_snd);


 VAR_40 = FUNC_18(VAR_36, &VAR_37->atse_miibus, VAR_38, VAR_29,
     VAR_28, VAR_3, VAR_19, VAR_18, 0);
 if (VAR_40 != 0) {
  FUNC_14(VAR_36, "attaching PHY failed: %d\n", VAR_40);
  goto err;
 }


 FUNC_15(VAR_38, VAR_37->atse_eth_addr);


 VAR_38->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_38->if_capabilities |= VAR_10;
 VAR_38->if_capenable = VAR_38->if_capabilities;

err:
 if (VAR_40 != 0) {
  FUNC_3(VAR_36);
 }

 if (VAR_40 == 0) {
  FUNC_7(VAR_36);
 }

 FUNC_6(VAR_37, VAR_24);
 FUNC_23(VAR_37->xchan_rx);

 return (VAR_40);
}
