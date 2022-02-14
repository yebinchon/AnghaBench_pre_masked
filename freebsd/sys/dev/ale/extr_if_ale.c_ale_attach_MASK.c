
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hwassist; int if_capenable; int if_hdrlen; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct ale_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct ale_softc {int ale_rev; int ale_flags; int ale_chip_rev; int ale_dma_rd_burst; int ale_dma_wr_burst; int * ale_tq; int * ale_intrhand; int * ale_irq; int ale_dev; int ale_eaddr; int ale_phyaddr; int ale_miibus; struct ifnet* ale_ifp; int ale_irq_spec; int * ale_res; int ale_res_spec; int ale_int_task; int ale_mtx; int ale_tick_ch; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct ale_softc*,int ) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_3 (int *,int ,int ,struct ale_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ale_softc*) ;
 int FUNC_6 (struct ale_softc*) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_7 (struct ale_softc*) ;
 int VAR_59 ;
 int FUNC_8 (struct ale_softc*) ;
 int VAR_60 ;
 int FUNC_9 (struct ale_softc*) ;
 scalar_t__ VAR_61 ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int,int ,int *,struct ale_softc*,int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct ale_softc* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (struct ifnet*,int ) ;
 int FUNC_19 (struct ifnet*) ;
 struct ifnet* FUNC_20 (int ) ;
 int FUNC_21 (struct ifnet*,int ,int ) ;
 int FUNC_22 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
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
 int VAR_64 ;

__attribute__((used)) static int
FUNC_36(device_t VAR_65)
{
 struct ale_softc *VAR_66;
 struct ifnet *VAR_67;
 uint16_t VAR_68;
 int VAR_69, VAR_70, VAR_71, VAR_72, VAR_73;
 uint32_t VAR_74, VAR_75;

 VAR_69 = 0;
 VAR_66 = FUNC_15(VAR_65);
 VAR_66->ale_dev = VAR_65;

 FUNC_23(&VAR_66->ale_mtx, FUNC_14(VAR_65), VAR_44,
     VAR_43);
 FUNC_12(&VAR_66->ale_tick_ch, &VAR_66->ale_mtx, 0);
 FUNC_3(&VAR_66->ale_int_task, 0, VAR_51, VAR_66);


 FUNC_26(VAR_65);
 VAR_66->ale_res_spec = VAR_59;
 VAR_66->ale_irq_spec = VAR_54;
 VAR_69 = FUNC_10(VAR_65, VAR_66->ale_res_spec, VAR_66->ale_res);
 if (VAR_69 != 0) {
  FUNC_17(VAR_65, "cannot allocate memory resources.\n");
  goto fail;
 }


 VAR_66->ale_phyaddr = VAR_13;


 FUNC_7(VAR_66);


 FUNC_8(VAR_66);


 VAR_66->ale_rev = FUNC_28(VAR_65);
 if (VAR_66->ale_rev >= 0xF0) {

  VAR_66->ale_flags |= VAR_1;
 } else {
  if ((FUNC_0(VAR_66, VAR_14) & VAR_48) != 0) {

   VAR_66->ale_flags |= VAR_2;
  } else {

   VAR_66->ale_flags |= VAR_1;
  }
 }





 VAR_66->ale_flags |= VAR_9;




 VAR_66->ale_flags |= VAR_7;






 VAR_66->ale_flags |= VAR_8;
 VAR_66->ale_chip_rev = FUNC_0(VAR_66, VAR_10) >>
     VAR_40;
 if (VAR_61) {
  FUNC_17(VAR_65, "PCI device revision : 0x%04x\n",
      VAR_66->ale_rev);
  FUNC_17(VAR_65, "Chip id/revision : 0x%04x\n",
      VAR_66->ale_chip_rev);
 }
 VAR_75 = FUNC_0(VAR_66, VAR_16);
 VAR_74 = FUNC_0(VAR_66, VAR_15);




 if (VAR_66->ale_chip_rev == 0xFFFF || VAR_75 == 0xFFFFFFFF ||
     VAR_74 == 0xFFFFFFF) {
  FUNC_17(VAR_65,"chip revision : 0x%04x, %u Tx FIFO "
      "%u Rx FIFO -- not initialized?\n", VAR_66->ale_chip_rev,
      VAR_75, VAR_74);
  VAR_69 = VAR_24;
  goto fail;
 }
 FUNC_17(VAR_65, "%u Tx FIFO, %u Rx FIFO\n", VAR_75, VAR_74);


 VAR_72 = FUNC_30(VAR_65);
 VAR_71 = FUNC_29(VAR_65);
 if (VAR_61) {
  FUNC_17(VAR_65, "MSIX count : %d\n", VAR_72);
  FUNC_17(VAR_65, "MSI count : %d\n", VAR_71);
 }


 if (VAR_63 == 0 || VAR_62 == 0) {
  if (VAR_63 == 0 && VAR_72 == VAR_11 &&
      FUNC_25(VAR_65, &VAR_72) == 0) {
   if (VAR_72 == VAR_11) {
    FUNC_17(VAR_65, "Using %d MSIX messages.\n",
        VAR_72);
    VAR_66->ale_flags |= VAR_4;
    VAR_66->ale_irq_spec = VAR_56;
   } else
    FUNC_32(VAR_65);
  }
  if (VAR_62 == 0 && (VAR_66->ale_flags & VAR_4) == 0 &&
      VAR_71 == VAR_12 &&
      FUNC_24(VAR_65, &VAR_71) == 0) {
   if (VAR_71 == VAR_12) {
    FUNC_17(VAR_65, "Using %d MSI messages.\n",
        VAR_71);
    VAR_66->ale_flags |= VAR_3;
    VAR_66->ale_irq_spec = VAR_55;
   } else
    FUNC_32(VAR_65);
  }
 }

 VAR_69 = FUNC_10(VAR_65, VAR_66->ale_irq_spec, VAR_66->ale_irq);
 if (VAR_69 != 0) {
  FUNC_17(VAR_65, "cannot allocate IRQ resources.\n");
  goto fail;
 }


 if (FUNC_27(VAR_65, VAR_46, &VAR_70) == 0) {
  VAR_66->ale_flags |= VAR_5;
  VAR_68 = FUNC_31(VAR_65, VAR_70 + 0x08, 2);

  VAR_66->ale_dma_rd_burst = ((VAR_68 >> 12) & 0x07) <<
      VAR_21;

  VAR_66->ale_dma_wr_burst = ((VAR_68 >> 5) & 0x07) <<
      VAR_23;
  if (VAR_61) {
   FUNC_17(VAR_65, "Read request size : %d bytes.\n",
       128 << ((VAR_68 >> 12) & 0x07));
   FUNC_17(VAR_65, "TLP payload size : %d bytes.\n",
       128 << ((VAR_68 >> 5) & 0x07));
  }
 } else {
  VAR_66->ale_dma_rd_burst = VAR_20;
  VAR_66->ale_dma_wr_burst = VAR_22;
 }


 FUNC_9(VAR_66);

 if ((VAR_69 = FUNC_5(VAR_66)) != 0)
  goto fail;


 FUNC_6(VAR_66);

 VAR_67 = VAR_66->ale_ifp = FUNC_20(VAR_37);
 if (VAR_67 == ((void*)0)) {
  FUNC_17(VAR_65, "cannot allocate ifnet structure.\n");
  VAR_69 = VAR_24;
  goto fail;
 }

 VAR_67->if_softc = VAR_66;
 FUNC_21(VAR_67, FUNC_13(VAR_65), FUNC_16(VAR_65));
 VAR_67->if_flags = VAR_34 | VAR_36 | VAR_35;
 VAR_67->if_ioctl = VAR_53;
 VAR_67->if_start = VAR_60;
 VAR_67->if_init = VAR_50;
 VAR_67->if_snd.ifq_drv_maxlen = VAR_17 - 1;
 FUNC_1(&VAR_67->if_snd, VAR_67->if_snd.ifq_drv_maxlen);
 FUNC_2(&VAR_67->if_snd);
 VAR_67->if_capabilities = VAR_25 | VAR_27 | VAR_26;
 VAR_67->if_hwassist = VAR_0 | VAR_19;
 if (FUNC_27(VAR_65, VAR_47, &VAR_73) == 0) {
  VAR_66->ale_flags |= VAR_6;
  VAR_67->if_capabilities |= VAR_32 | VAR_33;
 }
 VAR_67->if_capenable = VAR_67->if_capabilities;


 VAR_69 = FUNC_22(VAR_65, &VAR_66->ale_miibus, VAR_67, VAR_57,
     VAR_58, VAR_18, VAR_66->ale_phyaddr, VAR_42,
     VAR_41);
 if (VAR_69 != 0) {
  FUNC_17(VAR_65, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_18(VAR_67, VAR_66->ale_eaddr);


 VAR_67->if_capabilities |= VAR_31 | VAR_29 |
     VAR_28 | VAR_30;
 VAR_67->if_capenable = VAR_67->if_capabilities;







 VAR_67->if_capenable &= ~VAR_25;


 VAR_67->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_66->ale_tq = FUNC_33("ale_taskq", VAR_45,
     VAR_64, &VAR_66->ale_tq);
 if (VAR_66->ale_tq == ((void*)0)) {
  FUNC_17(VAR_65, "could not create taskqueue.\n");
  FUNC_19(VAR_67);
  VAR_69 = VAR_24;
  goto fail;
 }
 FUNC_35(&VAR_66->ale_tq, 1, VAR_49, "%s taskq",
     FUNC_14(VAR_66->ale_dev));

 if ((VAR_66->ale_flags & VAR_4) != 0)
  VAR_71 = VAR_11;
 else if ((VAR_66->ale_flags & VAR_3) != 0)
  VAR_71 = VAR_12;
 else
  VAR_71 = 1;
 for (VAR_70 = 0; VAR_70 < VAR_71; VAR_70++) {
  VAR_69 = FUNC_11(VAR_65, VAR_66->ale_irq[VAR_70],
      VAR_39 | VAR_38, VAR_52, ((void*)0), VAR_66,
      &VAR_66->ale_intrhand[VAR_70]);
  if (VAR_69 != 0)
   break;
 }
 if (VAR_69 != 0) {
  FUNC_17(VAR_65, "could not set up interrupt handler.\n");
  FUNC_34(VAR_66->ale_tq);
  VAR_66->ale_tq = ((void*)0);
  FUNC_19(VAR_67);
  goto fail;
 }

fail:
 if (VAR_69 != 0)
  FUNC_4(VAR_65);

 return (VAR_69);
}
