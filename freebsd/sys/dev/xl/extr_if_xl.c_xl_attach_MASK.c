
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int16_t ;
typedef int u_char ;
struct TYPE_4__ {int * xl_tx_tag; int xl_tx_dmamap; int xl_tx_list; int xl_tx_dmaaddr; int * xl_rx_tag; int xl_rx_dmamap; int xl_rx_list; int xl_rx_dmaaddr; } ;
struct xl_softc {int xl_flags; int xl_caps; scalar_t__ xl_type; int xl_pmcap; int xl_media; int xl_xcvr; int xl_intrhand; int * xl_irq; int ifmedia; int * xl_miibus; int xl_tx_thresh; int xl_tmpmap; int * xl_mtag; TYPE_1__ xl_ldata; int xl_task; int xl_mtx; int xl_tick_callout; struct ifnet* xl_ifp; int * xl_fres; void* xl_fhandle; void* xl_ftag; int * xl_res; void* xl_bhandle; void* xl_btag; int xl_dev; } ;
struct TYPE_5__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; TYPE_2__ if_snd; int if_init; int if_start; int if_capabilities; int if_capenable; int if_hwassist; int if_ioctl; struct xl_softc* if_softc; } ;
typedef int device_t ;
typedef char* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int ) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_4 (int *,int ,int ,struct xl_softc*) ;

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
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_5 (struct xl_softc*) ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int FUNC_6 (int) ;
 int VAR_86 ;
 scalar_t__ VAR_87 ;
 int VAR_88 ;
 scalar_t__ VAR_89 ;
 scalar_t__ VAR_90 ;
 int FUNC_7 (struct xl_softc*) ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 scalar_t__ VAR_94 ;
 void* FUNC_8 (int ,int,int*,int) ;
 int FUNC_9 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int ,int ,int,int ,int *,int) ;
 int FUNC_13 (int *,void**,int,int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *,int,int *,int ,struct xl_softc*,int *) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct xl_softc* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (struct ifnet*,int *) ;
 int FUNC_24 (struct ifnet*) ;
 struct ifnet* FUNC_25 (int ) ;
 int FUNC_26 (struct ifnet*,int ,int) ;
 int FUNC_27 (int *,int,int ,int *) ;
 int FUNC_28 (int *,int ,int ,int ) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int ,int **,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_31 (int *,int ,int ,int ) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (int ,int ,int*) ;
 int FUNC_34 (int ) ;
 void* FUNC_35 (int *) ;
 void* FUNC_36 (int *) ;
 int FUNC_37 (struct xl_softc*,int*) ;
 int FUNC_38 (struct xl_softc*,scalar_t__) ;
 int FUNC_39 (int ) ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int FUNC_40 (struct xl_softc*) ;
 scalar_t__ FUNC_41 (struct xl_softc*,char*,int ,int,int) ;
 int FUNC_42 (struct xl_softc*) ;
 int VAR_101 ;
 int FUNC_43 (struct xl_softc*) ;
 int VAR_102 ;

__attribute__((used)) static int
FUNC_44(device_t VAR_103)
{
 u_char VAR_104[VAR_8];
 u_int16_t VAR_105, VAR_106[2];
 struct xl_softc *VAR_107;
 struct ifnet *VAR_108;
 int VAR_109, VAR_110;
 int VAR_111 = 0, VAR_112, VAR_113, VAR_114, VAR_115;
 uint16_t VAR_116;

 VAR_107 = FUNC_20(VAR_103);
 VAR_107->xl_dev = VAR_103;

 VAR_115 = FUNC_21(VAR_103);

 FUNC_31(&VAR_107->xl_mtx, FUNC_19(VAR_103), VAR_34,
     VAR_33);
 FUNC_28(&VAR_107->ifmedia, 0, VAR_97, VAR_96);

 VAR_116 = FUNC_34(VAR_103);

 VAR_107->xl_flags = 0;
 if (VAR_116 == VAR_41)
  VAR_107->xl_flags |= VAR_59 | VAR_65;
 if (VAR_116 == VAR_42 ||
     VAR_116 == VAR_43)
  VAR_107->xl_flags |= VAR_60 | VAR_65 |
      VAR_59 | VAR_67 |
      VAR_61 | VAR_62;
 if (VAR_116 == VAR_41 ||
     VAR_116 == VAR_42)
  VAR_107->xl_flags |= VAR_58;
 if (VAR_116 == VAR_43)
  VAR_107->xl_flags |= VAR_64;

 if (VAR_116 == 129 ||
     VAR_116 == 128 ||
     VAR_116 == VAR_45 ||
     VAR_116 == VAR_48)
  VAR_107->xl_flags |= VAR_60;
 if (VAR_116 == 130 ||
     VAR_116 == 129 ||
     VAR_116 == 128 ||
     VAR_116 == VAR_45 ||
     VAR_116 == VAR_48)
  VAR_107->xl_flags |= VAR_65 | VAR_59 |
    VAR_58;
 if (VAR_116 == VAR_44)
  VAR_107->xl_flags |= VAR_60 | VAR_65;
 if (VAR_116 == 129)
  VAR_107->xl_flags |= VAR_61;
 if (VAR_116 == 128)
  VAR_107->xl_flags |= VAR_62;
 if (VAR_116 == VAR_48)
  VAR_107->xl_flags |= VAR_62;
 if (VAR_116 == VAR_44 ||
     VAR_116 == VAR_45)
  VAR_107->xl_flags |= VAR_62 |
      VAR_61;
 if (VAR_116 == VAR_46 ||
     VAR_116 == VAR_47)
  VAR_107->xl_flags |= VAR_65;

 switch (VAR_116) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_107->xl_flags |= VAR_63;
  break;
 default:
  break;
 }




 FUNC_32(VAR_103);

 if ((VAR_107->xl_flags & VAR_63) == 0) {
  VAR_113 = VAR_84;
  VAR_114 = VAR_40;

  VAR_107->xl_res = FUNC_8(VAR_103, VAR_114, &VAR_113, VAR_36);
 }

 if (VAR_107->xl_res != ((void*)0)) {
  VAR_107->xl_flags |= VAR_66;
  if (VAR_94)
   FUNC_22(VAR_103, "using memory mapped I/O\n");
 } else {
  VAR_113 = VAR_83;
  VAR_114 = VAR_38;
  VAR_107->xl_res = FUNC_8(VAR_103, VAR_114, &VAR_113, VAR_36);
  if (VAR_107->xl_res == ((void*)0)) {
   FUNC_22(VAR_103, "couldn't map ports/memory\n");
   VAR_111 = VAR_7;
   goto fail;
  }
  if (VAR_94)
   FUNC_22(VAR_103, "using port I/O\n");
 }

 VAR_107->xl_btag = FUNC_36(VAR_107->xl_res);
 VAR_107->xl_bhandle = FUNC_35(VAR_107->xl_res);

 if (VAR_107->xl_flags & VAR_60) {
  VAR_113 = VAR_82;
  VAR_107->xl_fres = FUNC_8(VAR_103, VAR_40, &VAR_113,
      VAR_36);

  if (VAR_107->xl_fres == ((void*)0)) {
   FUNC_22(VAR_103, "couldn't map funcreg memory\n");
   VAR_111 = VAR_7;
   goto fail;
  }

  VAR_107->xl_ftag = FUNC_36(VAR_107->xl_fres);
  VAR_107->xl_fhandle = FUNC_35(VAR_107->xl_fres);
 }


 VAR_113 = 0;
 VAR_107->xl_irq = FUNC_8(VAR_103, VAR_39, &VAR_113,
     VAR_37 | VAR_36);
 if (VAR_107->xl_irq == ((void*)0)) {
  FUNC_22(VAR_103, "couldn't map interrupt\n");
  VAR_111 = VAR_7;
  goto fail;
 }


 VAR_108 = VAR_107->xl_ifp = FUNC_25(VAR_26);
 if (VAR_108 == ((void*)0)) {
  FUNC_22(VAR_103, "can not if_alloc()\n");
  VAR_111 = VAR_6;
  goto fail;
 }
 VAR_108->if_softc = VAR_107;
 FUNC_26(VAR_108, FUNC_18(VAR_103), FUNC_21(VAR_103));


 FUNC_5(VAR_107);
 FUNC_42(VAR_107);
 FUNC_7(VAR_107);




 if (FUNC_41(VAR_107, (caddr_t)&VAR_104, VAR_56, 3, 1)) {
  FUNC_22(VAR_103, "failed to read station address\n");
  VAR_111 = VAR_7;
  goto fail;
 }

 FUNC_17(&VAR_107->xl_tick_callout, &VAR_107->xl_mtx, 0);
 FUNC_4(&VAR_107->xl_task, 0, VAR_101, VAR_107);
 VAR_111 = FUNC_9(FUNC_15(VAR_103), 8, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     VAR_85, 1, VAR_85, 0, ((void*)0), ((void*)0),
     &VAR_107->xl_ldata.xl_rx_tag);
 if (VAR_111) {
  FUNC_22(VAR_103, "failed to allocate rx dma tag\n");
  goto fail;
 }

 VAR_111 = FUNC_13(VAR_107->xl_ldata.xl_rx_tag,
     (void **)&VAR_107->xl_ldata.xl_rx_list, VAR_2 |
     VAR_1 | VAR_3, &VAR_107->xl_ldata.xl_rx_dmamap);
 if (VAR_111) {
  FUNC_22(VAR_103, "no memory for rx list buffers!\n");
  FUNC_10(VAR_107->xl_ldata.xl_rx_tag);
  VAR_107->xl_ldata.xl_rx_tag = ((void*)0);
  goto fail;
 }

 VAR_111 = FUNC_12(VAR_107->xl_ldata.xl_rx_tag,
     VAR_107->xl_ldata.xl_rx_dmamap, VAR_107->xl_ldata.xl_rx_list,
     VAR_85, VAR_95,
     &VAR_107->xl_ldata.xl_rx_dmaaddr, VAR_2);
 if (VAR_111) {
  FUNC_22(VAR_103, "cannot get dma address of the rx ring!\n");
  FUNC_14(VAR_107->xl_ldata.xl_rx_tag, VAR_107->xl_ldata.xl_rx_list,
      VAR_107->xl_ldata.xl_rx_dmamap);
  FUNC_10(VAR_107->xl_ldata.xl_rx_tag);
  VAR_107->xl_ldata.xl_rx_tag = ((void*)0);
  goto fail;
 }

 VAR_111 = FUNC_9(FUNC_15(VAR_103), 8, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     VAR_88, 1, VAR_88, 0, ((void*)0), ((void*)0),
     &VAR_107->xl_ldata.xl_tx_tag);
 if (VAR_111) {
  FUNC_22(VAR_103, "failed to allocate tx dma tag\n");
  goto fail;
 }

 VAR_111 = FUNC_13(VAR_107->xl_ldata.xl_tx_tag,
     (void **)&VAR_107->xl_ldata.xl_tx_list, VAR_2 |
     VAR_1 | VAR_3, &VAR_107->xl_ldata.xl_tx_dmamap);
 if (VAR_111) {
  FUNC_22(VAR_103, "no memory for list buffers!\n");
  FUNC_10(VAR_107->xl_ldata.xl_tx_tag);
  VAR_107->xl_ldata.xl_tx_tag = ((void*)0);
  goto fail;
 }

 VAR_111 = FUNC_12(VAR_107->xl_ldata.xl_tx_tag,
     VAR_107->xl_ldata.xl_tx_dmamap, VAR_107->xl_ldata.xl_tx_list,
     VAR_88, VAR_95,
     &VAR_107->xl_ldata.xl_tx_dmaaddr, VAR_2);
 if (VAR_111) {
  FUNC_22(VAR_103, "cannot get dma address of the tx ring!\n");
  FUNC_14(VAR_107->xl_ldata.xl_tx_tag, VAR_107->xl_ldata.xl_tx_list,
      VAR_107->xl_ldata.xl_tx_dmamap);
  FUNC_10(VAR_107->xl_ldata.xl_tx_tag);
  VAR_107->xl_ldata.xl_tx_tag = ((void*)0);
  goto fail;
 }




 VAR_111 = FUNC_9(FUNC_15(VAR_103), 1, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     VAR_29 * VAR_71, VAR_71, VAR_29, 0, ((void*)0),
     ((void*)0), &VAR_107->xl_mtag);
 if (VAR_111) {
  FUNC_22(VAR_103, "failed to allocate mbuf dma tag\n");
  goto fail;
 }


 VAR_111 = FUNC_11(VAR_107->xl_mtag, 0, &VAR_107->xl_tmpmap);
 if (VAR_111)
  goto fail;
 FUNC_41(VAR_107, (caddr_t)&VAR_107->xl_caps, VAR_54, 1, 0);
 if (VAR_107->xl_caps & VAR_52 ||
     !(VAR_107->xl_caps & VAR_51))
  VAR_107->xl_type = VAR_89;
 else
  VAR_107->xl_type = VAR_90;


 if ((VAR_107->xl_caps & VAR_53) != 0 &&
     FUNC_33(VAR_103, VAR_35, &VAR_110) == 0) {
  VAR_107->xl_pmcap = VAR_110;
  VAR_107->xl_flags |= VAR_68;
  VAR_105 = 0;
  FUNC_41(VAR_107, (caddr_t)&VAR_105, VAR_57, 1, 0);
  if ((VAR_105 & VAR_86) == 0 && VAR_94)
   FUNC_22(VAR_103,
       "No auxiliary remote wakeup connector!\n");
 }


 VAR_107->xl_tx_thresh = VAR_80;

 VAR_108->if_flags = VAR_14 | VAR_16 | VAR_15;
 VAR_108->if_ioctl = VAR_100;
 VAR_108->if_capabilities = VAR_12;
 if (VAR_107->xl_type == VAR_89) {
  VAR_108->if_hwassist = VAR_49;



  VAR_108->if_capabilities |= VAR_9;

 }
 if ((VAR_107->xl_flags & VAR_68) != 0)
  VAR_108->if_capabilities |= VAR_13;
 VAR_108->if_capenable = VAR_108->if_capabilities;



 VAR_108->if_start = VAR_102;
 VAR_108->if_init = VAR_98;
 FUNC_2(&VAR_108->if_snd, VAR_87 - 1);
 VAR_108->if_snd.ifq_drv_maxlen = VAR_87 - 1;
 FUNC_3(&VAR_108->if_snd);






 FUNC_6(3);
 VAR_107->xl_media = FUNC_0(VAR_107, VAR_92);
 if (VAR_94)
  FUNC_22(VAR_103, "media options word: %x\n", VAR_107->xl_media);

 FUNC_41(VAR_107, (char *)&VAR_106, VAR_55, 2, 0);
 VAR_107->xl_xcvr = VAR_106[0] | VAR_106[1] << 16;
 VAR_107->xl_xcvr &= VAR_70;
 VAR_107->xl_xcvr >>= VAR_69;

 FUNC_40(VAR_107);

 if (VAR_107->xl_media & VAR_79 ||
     VAR_107->xl_media & VAR_78 ||
     VAR_107->xl_media & VAR_77) {
  if (VAR_94)
   FUNC_22(VAR_103, "found MII/AUTO\n");
  FUNC_43(VAR_107);






  VAR_112 = VAR_32;
  if ((VAR_107->xl_flags & VAR_65) == 0)
   VAR_112 = 24;
  VAR_111 = FUNC_30(VAR_103, &VAR_107->xl_miibus, VAR_108, VAR_97,
      VAR_96, VAR_0, VAR_112, VAR_31,
      VAR_107->xl_type == VAR_89 ? VAR_30 : 0);
  if (VAR_111 != 0) {
   FUNC_22(VAR_103, "attaching PHYs failed\n");
   goto fail;
  }
  goto done;
 }






 if (VAR_107->xl_xcvr == VAR_93)
  FUNC_38(VAR_107, VAR_94);




 if (VAR_107->xl_media & VAR_76) {
  if (VAR_94)
   FUNC_22(VAR_103, "found 10baseT\n");
  FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_22, 0, ((void*)0));
  FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_22|VAR_25, 0, ((void*)0));
  if (VAR_107->xl_caps & VAR_50)
   FUNC_27(&VAR_107->ifmedia,
       VAR_23|VAR_22|VAR_24, 0, ((void*)0));
 }

 if (VAR_107->xl_media & (VAR_73|VAR_72)) {



  if (VAR_107->xl_type == VAR_89 &&
      VAR_107->xl_media == VAR_72) {
   if (VAR_94)
    FUNC_22(VAR_103, "found 10baseFL\n");
   FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_21, 0, ((void*)0));
   FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_21|VAR_25,
       0, ((void*)0));
   if (VAR_107->xl_caps & VAR_50)
    FUNC_27(&VAR_107->ifmedia,
        VAR_23|VAR_21|VAR_24, 0, ((void*)0));
  } else {
   if (VAR_94)
    FUNC_22(VAR_103, "found AUI\n");
   FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_20, 0, ((void*)0));
  }
 }

 if (VAR_107->xl_media & VAR_75) {
  if (VAR_94)
   FUNC_22(VAR_103, "found BNC\n");
  FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_19, 0, ((void*)0));
 }

 if (VAR_107->xl_media & VAR_74) {
  if (VAR_94)
   FUNC_22(VAR_103, "found 100baseFX\n");
  FUNC_27(&VAR_107->ifmedia, VAR_23|VAR_17, 0, ((void*)0));
 }

 VAR_109 = VAR_23|VAR_18|VAR_24;
 FUNC_37(VAR_107, &VAR_109);

 if (VAR_107->xl_miibus == ((void*)0))
  FUNC_29(&VAR_107->ifmedia, VAR_109);

done:
 if (VAR_107->xl_flags & VAR_64) {
  FUNC_6(0);
  FUNC_1(VAR_107, VAR_91, VAR_81);
 }




 FUNC_23(VAR_108, VAR_104);

 VAR_111 = FUNC_16(VAR_103, VAR_107->xl_irq, VAR_28 | VAR_27,
     ((void*)0), VAR_99, VAR_107, &VAR_107->xl_intrhand);
 if (VAR_111) {
  FUNC_22(VAR_103, "couldn't set up irq\n");
  FUNC_24(VAR_108);
  goto fail;
 }

fail:
 if (VAR_111)
  FUNC_39(VAR_103);

 return (VAR_111);
}
