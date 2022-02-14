
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hwassist; int if_capenable; int if_hdrlen; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct age_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct age_softc {int age_chip_rev; int age_flags; int age_dma_rd_burst; int age_dma_wr_burst; int * age_tq; int * age_intrhand; int * age_irq; int age_dev; int age_eaddr; int age_phyaddr; int age_miibus; struct ifnet* age_ifp; int age_irq_spec; int age_rev; int * age_res; int age_res_spec; int age_link_task; int age_int_task; int age_mtx; int age_tick_ch; } ;
typedef int device_t ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct age_softc*,int ) ;
 int VAR_13 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_3 (int *,int ,int ,struct age_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct age_softc*) ;
 int FUNC_6 (struct age_softc*) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_7 (struct age_softc*) ;
 int VAR_51 ;
 int FUNC_8 (struct age_softc*) ;
 int VAR_52 ;
 int FUNC_9 (struct age_softc*) ;
 scalar_t__ VAR_53 ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int,int ,int *,struct age_softc*,int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct age_softc* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (struct ifnet*,int ) ;
 int FUNC_19 (struct ifnet*) ;
 struct ifnet* FUNC_20 (int ) ;
 int FUNC_21 (struct ifnet*,int ,int ) ;
 int FUNC_22 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int FUNC_23 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_24 (int ,int*) ;
 scalar_t__ FUNC_25 (int ,int*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int ,int*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ,int,int) ;
 int FUNC_32 (int ) ;
 int * FUNC_33 (char*,int ,int ,int **) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int **,int,int ,char*,int ) ;
 int VAR_56 ;

__attribute__((used)) static int
FUNC_36(device_t VAR_57)
{
 struct age_softc *VAR_58;
 struct ifnet *VAR_59;
 uint16_t VAR_60;
 int VAR_61, VAR_62, VAR_63, VAR_64, VAR_65;

 VAR_61 = 0;
 VAR_58 = FUNC_15(VAR_57);
 VAR_58->age_dev = VAR_57;

 FUNC_23(&VAR_58->age_mtx, FUNC_14(VAR_57), VAR_36,
     VAR_35);
 FUNC_12(&VAR_58->age_tick_ch, &VAR_58->age_mtx, 0);
 FUNC_3(&VAR_58->age_int_task, 0, VAR_42, VAR_58);
 FUNC_3(&VAR_58->age_link_task, 0, VAR_48, VAR_58);


 FUNC_26(VAR_57);
 VAR_58->age_res_spec = VAR_51;
 VAR_58->age_irq_spec = VAR_45;
 VAR_61 = FUNC_10(VAR_57, VAR_58->age_res_spec, VAR_58->age_res);
 if (VAR_61 != 0) {
  FUNC_17(VAR_57, "cannot allocate memory resources.\n");
  goto fail;
 }


 VAR_58->age_phyaddr = VAR_8;


 FUNC_7(VAR_58);


 FUNC_8(VAR_58);


 VAR_58->age_rev = FUNC_28(VAR_57);
 VAR_58->age_chip_rev = FUNC_0(VAR_58, VAR_5) >>
     VAR_33;
 if (VAR_53) {
  FUNC_17(VAR_57, "PCI device revision : 0x%04x\n",
      VAR_58->age_rev);
  FUNC_17(VAR_57, "Chip id/revision : 0x%04x\n",
      VAR_58->age_chip_rev);
 }
 if (VAR_58->age_chip_rev == 0xFFFF) {
  FUNC_17(VAR_57,"invalid chip revision : 0x%04x -- "
      "not initialized?\n", VAR_58->age_chip_rev);
  VAR_61 = VAR_18;
  goto fail;
 }

 FUNC_17(VAR_57, "%d Tx FIFO, %d Rx FIFO\n",
     FUNC_0(VAR_58, VAR_10),
     FUNC_0(VAR_58, VAR_9));


 VAR_64 = FUNC_30(VAR_57);
 VAR_63 = FUNC_29(VAR_57);
 if (VAR_53) {
  FUNC_17(VAR_57, "MSIX count : %d\n", VAR_64);
  FUNC_17(VAR_57, "MSI count : %d\n", VAR_63);
 }


 if (VAR_55 == 0 || VAR_54 == 0) {
  if (VAR_55 == 0 && VAR_64 == VAR_6 &&
      FUNC_25(VAR_57, &VAR_64) == 0) {
   if (VAR_63 == VAR_6) {
    FUNC_17(VAR_57, "Using %d MSIX messages.\n",
        VAR_64);
    VAR_58->age_flags |= VAR_2;
    VAR_58->age_irq_spec = VAR_47;
   } else
    FUNC_32(VAR_57);
  }
  if (VAR_54 == 0 && (VAR_58->age_flags & VAR_2) == 0 &&
      VAR_63 == VAR_7 &&
      FUNC_24(VAR_57, &VAR_63) == 0) {
   if (VAR_63 == VAR_7) {
    FUNC_17(VAR_57, "Using %d MSI messages.\n",
        VAR_63);
    VAR_58->age_flags |= VAR_1;
    VAR_58->age_irq_spec = VAR_46;
   } else
    FUNC_32(VAR_57);
  }
 }

 VAR_61 = FUNC_10(VAR_57, VAR_58->age_irq_spec, VAR_58->age_irq);
 if (VAR_61 != 0) {
  FUNC_17(VAR_57, "cannot allocate IRQ resources.\n");
  goto fail;
 }



 if (FUNC_27(VAR_57, VAR_38, &VAR_62) == 0) {
  VAR_58->age_flags |= VAR_3;
  VAR_60 = FUNC_31(VAR_57, VAR_62 + 0x08, 2);

  VAR_58->age_dma_rd_burst = ((VAR_60 >> 12) & 0x07) <<
      VAR_15;

  VAR_58->age_dma_wr_burst = ((VAR_60 >> 5) & 0x07) <<
      VAR_17;
  if (VAR_53) {
   FUNC_17(VAR_57, "Read request size : %d bytes.\n",
       128 << ((VAR_60 >> 12) & 0x07));
   FUNC_17(VAR_57, "TLP payload size : %d bytes.\n",
       128 << ((VAR_60 >> 5) & 0x07));
  }
 } else {
  VAR_58->age_dma_rd_burst = VAR_14;
  VAR_58->age_dma_wr_burst = VAR_16;
 }


 FUNC_9(VAR_58);

 if ((VAR_61 = FUNC_5(VAR_58)) != 0)
  goto fail;


 FUNC_6(VAR_58);

 VAR_59 = VAR_58->age_ifp = FUNC_20(VAR_30);
 if (VAR_59 == ((void*)0)) {
  FUNC_17(VAR_57, "cannot allocate ifnet structure.\n");
  VAR_61 = VAR_18;
  goto fail;
 }

 VAR_59->if_softc = VAR_58;
 FUNC_21(VAR_59, FUNC_13(VAR_57), FUNC_16(VAR_57));
 VAR_59->if_flags = VAR_27 | VAR_29 | VAR_28;
 VAR_59->if_ioctl = VAR_44;
 VAR_59->if_start = VAR_52;
 VAR_59->if_init = VAR_41;
 VAR_59->if_snd.ifq_drv_maxlen = VAR_11 - 1;
 FUNC_1(&VAR_59->if_snd, VAR_59->if_snd.ifq_drv_maxlen);
 FUNC_2(&VAR_59->if_snd);
 VAR_59->if_capabilities = VAR_19 | VAR_20;
 VAR_59->if_hwassist = VAR_0 | VAR_13;
 if (FUNC_27(VAR_57, VAR_39, &VAR_65) == 0) {
  VAR_58->age_flags |= VAR_4;
  VAR_59->if_capabilities |= VAR_25 | VAR_26;
 }
 VAR_59->if_capenable = VAR_59->if_capabilities;


 VAR_61 = FUNC_22(VAR_57, &VAR_58->age_miibus, VAR_59, VAR_49,
     VAR_50, VAR_12, VAR_58->age_phyaddr, VAR_34,
     0);
 if (VAR_61 != 0) {
  FUNC_17(VAR_57, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_18(VAR_59, VAR_58->age_eaddr);


 VAR_59->if_capabilities |= VAR_24 | VAR_22 |
     VAR_21 | VAR_23;
 VAR_59->if_capenable = VAR_59->if_capabilities;


 VAR_59->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_58->age_tq = FUNC_33("age_taskq", VAR_37,
     VAR_56, &VAR_58->age_tq);
 if (VAR_58->age_tq == ((void*)0)) {
  FUNC_17(VAR_57, "could not create taskqueue.\n");
  FUNC_19(VAR_59);
  VAR_61 = VAR_18;
  goto fail;
 }
 FUNC_35(&VAR_58->age_tq, 1, VAR_40, "%s taskq",
     FUNC_14(VAR_58->age_dev));

 if ((VAR_58->age_flags & VAR_2) != 0)
  VAR_63 = VAR_6;
 else if ((VAR_58->age_flags & VAR_1) != 0)
  VAR_63 = VAR_7;
 else
  VAR_63 = 1;
 for (VAR_62 = 0; VAR_62 < VAR_63; VAR_62++) {
  VAR_61 = FUNC_11(VAR_57, VAR_58->age_irq[VAR_62],
      VAR_32 | VAR_31, VAR_43, ((void*)0), VAR_58,
      &VAR_58->age_intrhand[VAR_62]);
  if (VAR_61 != 0)
   break;
 }
 if (VAR_61 != 0) {
  FUNC_17(VAR_57, "could not set up interrupt handler.\n");
  FUNC_34(VAR_58->age_tq);
  VAR_58->age_tq = ((void*)0);
  FUNC_19(VAR_59);
  goto fail;
 }

fail:
 if (VAR_61 != 0)
  FUNC_4(VAR_57);

 return (VAR_61);
}
