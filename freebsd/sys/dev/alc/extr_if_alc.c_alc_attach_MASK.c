
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hwassist; int if_capenable; int if_hdrlen; TYPE_2__ if_snd; int if_init; int if_start; int if_ioctl; struct alc_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct alc_softc {int alc_flags; int alc_chip_rev; int alc_dma_rd_burst; int alc_dma_wr_burst; int alc_expcap; int alc_pmcap; int * alc_tq; int * alc_intrhand; int * alc_irq; int alc_dev; int alc_eaddr; int alc_phyaddr; int alc_miibus; struct ifnet* alc_ifp; int alc_irq_spec; int alc_rcb; int alc_rev; TYPE_1__* alc_ident; int * alc_res; int alc_res_spec; int alc_int_task; int alc_mtx; int alc_tick_ch; } ;
typedef int device_t ;
struct TYPE_4__ {int deviceid; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ) ;
 int VAR_20 ;
 int FUNC_1 (struct alc_softc*,scalar_t__) ;
 int FUNC_2 (struct alc_softc*,int ) ;
 int VAR_21 ;
 int FUNC_3 (struct ifnet*,int ) ;
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
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_6 (int *,int ,int ,struct alc_softc*) ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_7 (struct alc_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct alc_softc*) ;
 int* VAR_52 ;
 TYPE_1__* FUNC_10 (int ) ;
 int FUNC_11 (struct alc_softc*) ;
 int VAR_53 ;
 int FUNC_12 (struct alc_softc*) ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_13 (struct alc_softc*) ;
 int VAR_62 ;
 int FUNC_14 (struct alc_softc*) ;
 int VAR_63 ;
 int FUNC_15 (struct alc_softc*) ;
 int FUNC_16 (struct alc_softc*) ;
 scalar_t__ VAR_64 ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,int ,int,int ,int *,struct alc_softc*,int *) ;
 int FUNC_19 (int *,int *,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 struct alc_softc* FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,char*,...) ;
 int FUNC_25 (struct ifnet*,int ) ;
 int FUNC_26 (struct ifnet*) ;
 struct ifnet* FUNC_27 (int ) ;
 int FUNC_28 (struct ifnet*,int ,int ) ;
 int FUNC_29 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 int FUNC_30 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_31 (int ,int*) ;
 scalar_t__ FUNC_32 (int ,int*) ;
 int FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (int ,int ,int*) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 int * FUNC_41 (char*,int ,int ,int **) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int **,int,int ,char*,int ) ;
 int VAR_67 ;

__attribute__((used)) static int
FUNC_44(device_t VAR_68)
{
 struct alc_softc *VAR_69;
 struct ifnet *VAR_70;
 int VAR_71, VAR_72, VAR_73, VAR_74, VAR_75;
 uint16_t VAR_76;

 VAR_72 = 0;
 VAR_69 = FUNC_22(VAR_68);
 VAR_69->alc_dev = VAR_68;
 VAR_69->alc_rev = FUNC_35(VAR_68);

 FUNC_30(&VAR_69->alc_mtx, FUNC_21(VAR_68), VAR_42,
     VAR_41);
 FUNC_19(&VAR_69->alc_tick_ch, &VAR_69->alc_mtx, 0);
 FUNC_6(&VAR_69->alc_int_task, 0, VAR_54, VAR_69);
 VAR_69->alc_ident = FUNC_10(VAR_68);


 FUNC_33(VAR_68);
 VAR_69->alc_res_spec = VAR_62;
 VAR_69->alc_irq_spec = VAR_57;
 VAR_72 = FUNC_17(VAR_68, VAR_69->alc_res_spec, VAR_69->alc_res);
 if (VAR_72 != 0) {
  FUNC_24(VAR_68, "cannot allocate memory resources.\n");
  goto fail;
 }


 VAR_69->alc_phyaddr = VAR_16;
 switch (VAR_69->alc_ident->deviceid) {
 case 130:
 case 129:
 case 128:
  VAR_69->alc_flags |= VAR_4;

 case 134:
  if (FUNC_37(VAR_68) == VAR_50 &&
      FUNC_36(VAR_68) == 0x0091 && VAR_69->alc_rev == 0)
   VAR_69->alc_flags |= VAR_7;

 case 132:
  VAR_69->alc_flags |= VAR_2;
  break;
 case 133:
 case 131:
  VAR_69->alc_flags |= VAR_5 | VAR_2;
  break;
 case 136:
 case 135:
  VAR_69->alc_flags |= VAR_1;

 case 139:
  VAR_69->alc_flags |= VAR_5;
  break;
 case 138:
 case 137:
  VAR_69->alc_flags |= VAR_1;

 default:
  break;
 }
 VAR_69->alc_flags |= VAR_6;







 VAR_69->alc_flags |= VAR_12;



 VAR_69->alc_flags |= VAR_3;
 VAR_69->alc_chip_rev = FUNC_2(VAR_69, VAR_13) >>
     VAR_38;
 if (VAR_64) {
  FUNC_24(VAR_68, "PCI device revision : 0x%04x\n",
      VAR_69->alc_rev);
  FUNC_24(VAR_68, "Chip id/revision : 0x%04x\n",
      VAR_69->alc_chip_rev);
  if ((VAR_69->alc_flags & VAR_2) != 0)
   FUNC_24(VAR_68, "AR816x revision : 0x%x\n",
       FUNC_0(VAR_69->alc_rev));
 }
 FUNC_24(VAR_68, "%u Tx FIFO, %u Rx FIFO\n",
     FUNC_2(VAR_69, VAR_18) * 8,
     FUNC_2(VAR_69, VAR_17) * 8);


 VAR_69->alc_dma_rd_burst = 0;
 VAR_69->alc_dma_wr_burst = 0;
 VAR_69->alc_rcb = VAR_22;
 if (FUNC_34(VAR_68, VAR_47, &VAR_71) == 0) {
  VAR_69->alc_flags |= VAR_10;
  VAR_69->alc_expcap = VAR_71;
  VAR_76 = FUNC_1(VAR_69, VAR_71 + VAR_46);
  VAR_69->alc_dma_rd_burst =
      (VAR_76 & VAR_45) >> 12;
  VAR_69->alc_dma_wr_burst = (VAR_76 & VAR_44) >> 5;
  if (VAR_64) {
   FUNC_24(VAR_68, "Read request size : %u bytes.\n",
       VAR_52[VAR_69->alc_dma_rd_burst]);
   FUNC_24(VAR_68, "TLP payload size : %u bytes.\n",
       VAR_52[VAR_69->alc_dma_wr_burst]);
  }
  if (VAR_52[VAR_69->alc_dma_rd_burst] > 1024)
   VAR_69->alc_dma_rd_burst = 3;
  if (VAR_52[VAR_69->alc_dma_wr_burst] > 1024)
   VAR_69->alc_dma_wr_burst = 3;





  if ((VAR_69->alc_flags & VAR_4) != 0)
   VAR_69->alc_dma_wr_burst = 0;
  FUNC_12(VAR_69);
 }


 FUNC_13(VAR_69);


 FUNC_15(VAR_69);
 FUNC_14(VAR_69);


 VAR_75 = FUNC_39(VAR_68);
 VAR_74 = FUNC_38(VAR_68);
 if (VAR_64) {
  FUNC_24(VAR_68, "MSIX count : %d\n", VAR_75);
  FUNC_24(VAR_68, "MSI count : %d\n", VAR_74);
 }
 if (VAR_75 > 1)
  VAR_75 = 1;
 if (VAR_74 > 1)
  VAR_74 = 1;






 if (VAR_66 == 0 || VAR_65 == 0) {
  if (VAR_66 == 0 && VAR_75 > 0 &&
      FUNC_32(VAR_68, &VAR_75) == 0) {
   if (VAR_74 == 1) {
    FUNC_24(VAR_68,
        "Using %d MSIX message(s).\n", VAR_75);
    VAR_69->alc_flags |= VAR_9;
    VAR_69->alc_irq_spec = VAR_59;
   } else
    FUNC_40(VAR_68);
  }
  if (VAR_65 == 0 && (VAR_69->alc_flags & VAR_9) == 0 &&
      VAR_74 > 0 && FUNC_31(VAR_68, &VAR_74) == 0) {
   if (VAR_74 == 1) {
    FUNC_24(VAR_68,
        "Using %d MSI message(s).\n", VAR_74);
    VAR_69->alc_flags |= VAR_8;
    VAR_69->alc_irq_spec = VAR_58;
   } else
    FUNC_40(VAR_68);
  }
 }

 VAR_72 = FUNC_17(VAR_68, VAR_69->alc_irq_spec, VAR_69->alc_irq);
 if (VAR_72 != 0) {
  FUNC_24(VAR_68, "cannot allocate IRQ resources.\n");
  goto fail;
 }


 FUNC_16(VAR_69);

 if ((VAR_72 = FUNC_9(VAR_69)) != 0)
  goto fail;


 FUNC_11(VAR_69);

 VAR_70 = VAR_69->alc_ifp = FUNC_27(VAR_35);
 if (VAR_70 == ((void*)0)) {
  FUNC_24(VAR_68, "cannot allocate ifnet structure.\n");
  VAR_72 = VAR_23;
  goto fail;
 }

 VAR_70->if_softc = VAR_69;
 FUNC_28(VAR_70, FUNC_20(VAR_68), FUNC_23(VAR_68));
 VAR_70->if_flags = VAR_32 | VAR_34 | VAR_33;
 VAR_70->if_ioctl = VAR_56;
 VAR_70->if_start = VAR_63;
 VAR_70->if_init = VAR_53;
 VAR_70->if_snd.ifq_drv_maxlen = VAR_19 - 1;
 FUNC_4(&VAR_70->if_snd, VAR_70->if_snd.ifq_drv_maxlen);
 FUNC_5(&VAR_70->if_snd);
 VAR_70->if_capabilities = VAR_25 | VAR_24;
 VAR_70->if_hwassist = VAR_0 | VAR_21;
 if (FUNC_34(VAR_68, VAR_48, &VAR_71) == 0) {
  VAR_70->if_capabilities |= VAR_30 | VAR_31;
  VAR_69->alc_flags |= VAR_11;
  VAR_69->alc_pmcap = VAR_71;
 }
 VAR_70->if_capenable = VAR_70->if_capabilities;


 VAR_72 = FUNC_29(VAR_68, &VAR_69->alc_miibus, VAR_70, VAR_60,
     VAR_61, VAR_20, VAR_69->alc_phyaddr, VAR_40,
     VAR_39);
 if (VAR_72 != 0) {
  FUNC_24(VAR_68, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_25(VAR_70, VAR_69->alc_eaddr);


 VAR_70->if_capabilities |= VAR_29 | VAR_27 |
     VAR_26 | VAR_28;
 VAR_70->if_capenable = VAR_70->if_capabilities;
 if ((VAR_69->alc_flags & VAR_2) == 0) {
  VAR_70->if_capenable &= ~VAR_25;
  VAR_70->if_hwassist &= ~VAR_0;
 }


 VAR_70->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_69->alc_tq = FUNC_41("alc_taskq", VAR_43,
     VAR_67, &VAR_69->alc_tq);
 if (VAR_69->alc_tq == ((void*)0)) {
  FUNC_24(VAR_68, "could not create taskqueue.\n");
  FUNC_26(VAR_70);
  VAR_72 = VAR_23;
  goto fail;
 }
 FUNC_43(&VAR_69->alc_tq, 1, VAR_49, "%s taskq",
     FUNC_21(VAR_69->alc_dev));

 FUNC_7(VAR_69);
 if ((VAR_69->alc_flags & VAR_9) != 0)
  VAR_74 = VAR_14;
 else if ((VAR_69->alc_flags & VAR_8) != 0)
  VAR_74 = VAR_15;
 else
  VAR_74 = 1;
 for (VAR_73 = 0; VAR_73 < VAR_74; VAR_73++) {
  VAR_72 = FUNC_18(VAR_68, VAR_69->alc_irq[VAR_73],
      VAR_37 | VAR_36, VAR_55, ((void*)0), VAR_69,
      &VAR_69->alc_intrhand[VAR_73]);
  if (VAR_72 != 0)
   break;
 }
 if (VAR_72 != 0) {
  FUNC_24(VAR_68, "could not set up interrupt handler.\n");
  FUNC_42(VAR_69->alc_tq);
  VAR_69->alc_tq = ((void*)0);
  FUNC_26(VAR_70);
  goto fail;
 }


 FUNC_3(VAR_70, VAR_51);

fail:
 if (VAR_72 != 0)
  FUNC_8(VAR_68);

 return (VAR_72);
}
