
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; int if_snd; int if_init; int if_ioctl; int if_start; struct emac_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct emac_softc {scalar_t__ emac_rx_process_limit; int emac_intrhand; int * emac_irq; int emac_miibus; struct ifnet* emac_ifp; int * emac_res; int emac_handle; int emac_tag; int emac_mtx; int emac_tick_ch; int emac_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,int ,int ,char*,int,scalar_t__*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct emac_softc*,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct emac_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct emac_softc*,int *) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_15 (struct emac_softc*) ;
 int VAR_31 ;
 int FUNC_16 (struct emac_softc*) ;
 int FUNC_17 (struct ifnet*,int *) ;
 int FUNC_18 (struct ifnet*) ;
 struct ifnet* FUNC_19 (int ) ;
 int FUNC_20 (struct ifnet*,int ,int ) ;
 int FUNC_21 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_22 (int *,int ,int ,int ) ;
 int FUNC_23 (int ,int ,char*,scalar_t__*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int VAR_32 ;

__attribute__((used)) static int
FUNC_26(device_t VAR_33)
{
 struct emac_softc *VAR_34;
 struct ifnet *VAR_35;
 int VAR_36, VAR_37;
 uint8_t VAR_38[VAR_8];

 VAR_34 = FUNC_8(VAR_33);
 VAR_34->emac_dev = VAR_33;

 VAR_36 = 0;
 FUNC_22(&VAR_34->emac_mtx, FUNC_7(VAR_33), VAR_20,
     VAR_19);
 FUNC_5(&VAR_34->emac_tick_ch, &VAR_34->emac_mtx, 0);

 VAR_37 = 0;
 VAR_34->emac_res = FUNC_3(VAR_33, VAR_25, &VAR_37,
     VAR_22);
 if (VAR_34->emac_res == ((void*)0)) {
  FUNC_12(VAR_33, "unable to map memory\n");
  VAR_36 = VAR_7;
  goto fail;
 }

 VAR_34->emac_tag = FUNC_25(VAR_34->emac_res);
 VAR_34->emac_handle = FUNC_24(VAR_34->emac_res);

 VAR_37 = 0;
 VAR_34->emac_irq = FUNC_3(VAR_33, VAR_24, &VAR_37,
     VAR_23 | VAR_22);
 if (VAR_34->emac_irq == ((void*)0)) {
  FUNC_12(VAR_33, "cannot allocate IRQ resources.\n");
  VAR_36 = VAR_7;
  goto fail;
 }

 FUNC_1(FUNC_9(VAR_33),
     FUNC_2(FUNC_10(VAR_33)),
     VAR_21, "process_limit", VAR_2 | VAR_1,
     &VAR_34->emac_rx_process_limit, 0, VAR_32, "I",
     "max number of Rx events to process");

 VAR_34->emac_rx_process_limit = VAR_3;
 VAR_36 = FUNC_23(FUNC_6(VAR_33), FUNC_11(VAR_33),
     "process_limit", &VAR_34->emac_rx_process_limit);
 if (VAR_36 == 0) {
  if (VAR_34->emac_rx_process_limit < VAR_5 ||
      VAR_34->emac_rx_process_limit > VAR_4) {
   FUNC_12(VAR_33, "process_limit value out of range; "
       "using default: %d\n", VAR_3);
   VAR_34->emac_rx_process_limit = VAR_3;
  }
 }

 VAR_36 = FUNC_16(VAR_34);
 if (VAR_36 != 0)
  goto fail;

 FUNC_15(VAR_34);

 VAR_35 = VAR_34->emac_ifp = FUNC_19(VAR_14);
 if (VAR_35 == ((void*)0)) {
  FUNC_12(VAR_33, "unable to allocate ifp\n");
  VAR_36 = VAR_6;
  goto fail;
 }
 VAR_35->if_softc = VAR_34;


 VAR_36 = FUNC_21(VAR_33, &VAR_34->emac_miibus, VAR_35, VAR_27,
     VAR_26, VAR_0, VAR_18, VAR_17, 0);
 if (VAR_36 != 0) {
  FUNC_12(VAR_33, "PHY probe failed\n");
  goto fail;
 }

 FUNC_20(VAR_35, FUNC_6(VAR_33), FUNC_11(VAR_33));
 VAR_35->if_flags = VAR_10 | VAR_12 | VAR_11;
 VAR_35->if_start = VAR_31;
 VAR_35->if_ioctl = VAR_30;
 VAR_35->if_init = VAR_28;
 FUNC_0(&VAR_35->if_snd, VAR_13);


 FUNC_14(VAR_34, VAR_38);
 FUNC_17(VAR_35, VAR_38);


 VAR_35->if_capabilities |= VAR_9;
 VAR_35->if_capenable = VAR_35->if_capabilities;

 VAR_35->if_hdrlen = sizeof(struct ether_vlan_header);

 VAR_36 = FUNC_4(VAR_33, VAR_34->emac_irq, VAR_16 | VAR_15,
     ((void*)0), VAR_29, VAR_34, &VAR_34->emac_intrhand);
 if (VAR_36 != 0) {
  FUNC_12(VAR_33, "could not set up interrupt handler.\n");
  FUNC_18(VAR_35);
  goto fail;
 }

fail:
 if (VAR_36 != 0)
  FUNC_13(VAR_33);
 return (VAR_36);
}
