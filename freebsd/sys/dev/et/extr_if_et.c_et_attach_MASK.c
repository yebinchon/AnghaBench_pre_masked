
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hdrlen; TYPE_1__ if_snd; int if_get_counter; int if_start; int if_ioctl; int if_init; struct et_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct et_softc {int sc_mem_rid; int sc_expcap; int sc_flags; int sc_irq_rid; int sc_irq_handle; int * sc_irq_res; int sc_miibus; int * sc_mem_res; int sc_timer; int sc_tx_intr_nsegs; int sc_rx_intr_delay; int sc_rx_intr_npkts; struct ifnet* ifp; int sc_mtx; int sc_tick; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct et_softc*,int ,int) ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int ) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct et_softc*,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct et_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct et_softc*) ;
 int FUNC_13 (struct et_softc*) ;
 int FUNC_14 (struct et_softc*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct et_softc*) ;
 int VAR_33 ;
 int FUNC_17 (int ,int *) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_18 (struct et_softc*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_19 (struct ifnet*,int *) ;
 int FUNC_20 (struct ifnet*) ;
 struct ifnet* FUNC_21 (int ) ;
 int FUNC_22 (struct ifnet*,int ,int ) ;
 int FUNC_23 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_44 ;
 int FUNC_24 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_25 (int ,int*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int ,int*) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;

__attribute__((used)) static int
FUNC_31(device_t VAR_45)
{
 struct et_softc *VAR_46;
 struct ifnet *VAR_47;
 uint8_t VAR_48[VAR_4];
 uint32_t VAR_49;
 int VAR_50, VAR_51, VAR_52;

 VAR_46 = FUNC_9(VAR_45);
 VAR_46->dev = VAR_45;
 FUNC_24(&VAR_46->sc_mtx, FUNC_8(VAR_45), VAR_25,
     VAR_24);
 FUNC_6(&VAR_46->sc_tick, &VAR_46->sc_mtx, 0);

 VAR_47 = VAR_46->ifp = FUNC_21(VAR_18);
 if (VAR_47 == ((void*)0)) {
  FUNC_11(VAR_45, "can not if_alloc()\n");
  VAR_51 = VAR_2;
  goto fail;
 }




 VAR_46->sc_rx_intr_npkts = VAR_40;
 VAR_46->sc_rx_intr_delay = VAR_39;
 VAR_46->sc_tx_intr_nsegs = VAR_43;
 VAR_46->sc_timer = VAR_42;


 FUNC_26(VAR_45);




 VAR_46->sc_mem_rid = FUNC_3(0);
 VAR_46->sc_mem_res = FUNC_4(VAR_45, VAR_31,
     &VAR_46->sc_mem_rid, VAR_28);
 if (VAR_46->sc_mem_res == ((void*)0)) {
  FUNC_11(VAR_45, "can't allocate IO memory\n");
  return (VAR_3);
 }

 VAR_52 = 0;
 if (FUNC_27(VAR_45, VAR_26, &VAR_50) == 0) {
  VAR_46->sc_expcap = VAR_50;
  VAR_46->sc_flags |= VAR_7;
  VAR_52 = FUNC_29(VAR_45);
  if (VAR_32)
   FUNC_11(VAR_45, "MSI count: %d\n", VAR_52);
 }
 if (VAR_52 > 0 && VAR_44 == 0) {
  VAR_52 = 1;
  if (FUNC_25(VAR_45, &VAR_52) == 0) {
   if (VAR_52 == 1) {
    FUNC_11(VAR_45, "Using %d MSI message\n",
        VAR_52);
    VAR_46->sc_flags |= VAR_6;
   } else
    FUNC_30(VAR_45);
  }
 }




 if ((VAR_46->sc_flags & VAR_6) == 0) {
  VAR_46->sc_irq_rid = 0;
  VAR_46->sc_irq_res = FUNC_4(VAR_45, VAR_30,
      &VAR_46->sc_irq_rid, VAR_29 | VAR_28);
 } else {
  VAR_46->sc_irq_rid = 1;
  VAR_46->sc_irq_res = FUNC_4(VAR_45, VAR_30,
      &VAR_46->sc_irq_rid, VAR_28);
 }
 if (VAR_46->sc_irq_res == ((void*)0)) {
  FUNC_11(VAR_45, "can't allocate irq\n");
  VAR_51 = VAR_3;
  goto fail;
 }

 if (FUNC_28(VAR_45) == VAR_27)
  VAR_46->sc_flags |= VAR_5;

 VAR_51 = FUNC_13(VAR_46);
 if (VAR_51)
  goto fail;

 FUNC_17(VAR_45, VAR_48);


 VAR_49 = VAR_10 | VAR_11 | VAR_9;
 if ((VAR_46->sc_flags & VAR_5) == 0)
  VAR_49 |= VAR_1;
 FUNC_0(VAR_46, VAR_8, VAR_49);

 FUNC_18(VAR_46);

 VAR_51 = FUNC_16(VAR_46);
 if (VAR_51)
  goto fail;

 VAR_47->if_softc = VAR_46;
 FUNC_22(VAR_47, FUNC_7(VAR_45), FUNC_10(VAR_45));
 VAR_47->if_flags = VAR_15 | VAR_17 | VAR_16;
 VAR_47->if_init = VAR_36;
 VAR_47->if_ioctl = VAR_38;
 VAR_47->if_start = VAR_41;
 VAR_47->if_get_counter = VAR_33;
 VAR_47->if_capabilities = VAR_13 | VAR_14;
 VAR_47->if_capenable = VAR_47->if_capabilities;
 VAR_47->if_snd.ifq_drv_maxlen = VAR_12 - 1;
 FUNC_1(&VAR_47->if_snd, VAR_12 - 1);
 FUNC_2(&VAR_47->if_snd);

 FUNC_14(VAR_46);

 VAR_51 = FUNC_23(VAR_45, &VAR_46->sc_miibus, VAR_47, VAR_35,
     VAR_34, VAR_0, VAR_23, VAR_22,
     VAR_21);
 if (VAR_51) {
  FUNC_11(VAR_45, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_19(VAR_47, VAR_48);


 VAR_47->if_hdrlen = sizeof(struct ether_vlan_header);

 VAR_51 = FUNC_5(VAR_45, VAR_46->sc_irq_res, VAR_20 | VAR_19,
     ((void*)0), VAR_37, VAR_46, &VAR_46->sc_irq_handle);
 if (VAR_51) {
  FUNC_20(VAR_47);
  FUNC_11(VAR_45, "can't setup intr\n");
  goto fail;
 }

 FUNC_12(VAR_46);

 return (0);
fail:
 FUNC_15(VAR_45);
 return (VAR_51);
}
