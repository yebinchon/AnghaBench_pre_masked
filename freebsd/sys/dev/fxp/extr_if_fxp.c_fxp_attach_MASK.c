
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
struct fxp_tx {int tx_map; struct fxp_cb_tx* tx_cb; } ;
struct fxp_stats {int dummy; } ;
struct TYPE_3__ {struct fxp_rx* rx_list; int * rx_tail; int rx_head; struct fxp_cb_tx* cbl_list; struct fxp_tx* tx_list; int cbl_addr; } ;
struct fxp_softc {scalar_t__ fxp_spec; scalar_t__ revision; int* eeprom; int flags; int eeprom_size; int rfa_size; int maxtxseg; int maxsegsize; void* ifp; int ih; int * fxp_res; int miibus; int sc_media; int fxp_rxmtag; TYPE_1__ fxp_desc; int spare_map; int fxp_txmtag; int mcs_addr; struct fxp_cb_tx* mcsp; int mcs_map; int mcs_tag; int cbl_map; int cbl_tag; int stats_addr; struct fxp_cb_tx* fxp_stats; int fxp_smap; int fxp_stag; int tx_cmd; TYPE_2__* ident; int dev; int sc_mtx; int stat_ch; } ;
struct fxp_rx {int rx_map; } ;
struct fxp_rfa {int dummy; } ;
struct fxp_cb_tx {int dummy; } ;
struct fxp_cb_mcs {int dummy; } ;
struct ether_vlan_header {int dummy; } ;
typedef int ifm_stat_cb_t ;
typedef int ifm_change_cb_t ;
typedef void* if_t ;
typedef int device_t ;
struct TYPE_4__ {int ich; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int ) ;
 int FUNC_2 (struct fxp_softc*,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
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
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
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
 int FUNC_4 (struct fxp_softc*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_5 (struct fxp_softc*) ;
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
 scalar_t__ VAR_84 ;
 int FUNC_6 (int ,scalar_t__,int *) ;
 int FUNC_7 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int ,int *,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,struct fxp_cb_tx*,int,int ,int *,int) ;
 int FUNC_10 (int ,void**,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int,int *,int ,struct fxp_softc*,int *) ;
 int VAR_85 ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 struct fxp_softc* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (void*,int*) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (struct fxp_softc*,struct fxp_rx*) ;
 int FUNC_22 (struct fxp_softc*) ;
 int VAR_86 ;
 TYPE_2__* FUNC_23 (int ) ;
 scalar_t__ VAR_87 ;
 scalar_t__ VAR_88 ;
 int VAR_89 ;
 int FUNC_24 (struct fxp_softc*,int ) ;
 int VAR_90 ;
 int VAR_91 ;
 int FUNC_25 (struct fxp_softc*) ;
 scalar_t__ FUNC_26 (struct fxp_softc*,struct fxp_rx*) ;
 int FUNC_27 (struct fxp_softc*) ;
 void* VAR_92 ;
 scalar_t__ VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int FUNC_28 (struct fxp_softc*) ;
 int FUNC_29 (struct fxp_softc*) ;
 int FUNC_30 (struct fxp_softc*,int*,int,int) ;
 void* FUNC_31 (int ) ;
 int FUNC_32 (void*,int ,int ) ;
 int FUNC_33 (void*,int ) ;
 int FUNC_34 (void*,int,int ) ;
 int FUNC_35 (void*,int ) ;
 int FUNC_36 (void*,int,int ) ;
 int FUNC_37 (void*,int ) ;
 int FUNC_38 (void*,int) ;
 int FUNC_39 (void*,int) ;
 int FUNC_40 (void*,int) ;
 int FUNC_41 (void*,int ) ;
 int FUNC_42 (void*,int ) ;
 int FUNC_43 (void*,int) ;
 int FUNC_44 (void*) ;
 int FUNC_45 (void*,struct fxp_softc*) ;
 int FUNC_46 (void*,int ) ;
 int FUNC_47 (int *,int,int ,int *) ;
 int FUNC_48 (int *,int ,int ,int ) ;
 int FUNC_49 (int *,int) ;
 int FUNC_50 (int ,int *,void*,int ,int ,int ,int ,int ,int) ;
 int FUNC_51 (int *,int ,int ,int ) ;
 int FUNC_52 (int ) ;
 scalar_t__ FUNC_53 (int ,int ,int*) ;
 int FUNC_54 (int ) ;
 scalar_t__ FUNC_55 (int ) ;
 int FUNC_56 (int ) ;
 int FUNC_57 (int ) ;
 int FUNC_58 (int ) ;
 scalar_t__ FUNC_59 (int ,int ,int) ;
 int FUNC_60 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_61(device_t VAR_97)
{
 struct fxp_softc *VAR_98;
 struct fxp_cb_tx *VAR_99;
 struct fxp_tx *VAR_100;
 struct fxp_rx *VAR_101;
 if_t VAR_102;
 uint32_t VAR_103;
 uint16_t VAR_104;
 u_char VAR_105[VAR_10];
 int VAR_106, VAR_107, VAR_108, VAR_109, VAR_110;

 VAR_106 = 0;
 VAR_98 = FUNC_16(VAR_97);
 VAR_98->dev = VAR_97;
 FUNC_51(&VAR_98->sc_mtx, FUNC_15(VAR_97), VAR_79,
     VAR_78);
 FUNC_13(&VAR_98->stat_ch, &VAR_98->sc_mtx, 0);
 FUNC_48(&VAR_98->sc_media, 0, VAR_95,
     VAR_94);

 VAR_102 = VAR_98->ifp = FUNC_31(VAR_70);
 if (VAR_102 == (void *)((void*)0)) {
  FUNC_18(VAR_97, "can not if_alloc()\n");
  VAR_106 = VAR_8;
  goto fail;
 }




 FUNC_52(VAR_97);






 VAR_110 = 0;
 FUNC_60(FUNC_14(VAR_97), FUNC_17(VAR_97),
     "prefer_iomap", &VAR_110);
 if (VAR_110)
  VAR_98->fxp_spec = VAR_92;
 else
  VAR_98->fxp_spec = VAR_93;

 VAR_106 = FUNC_6(VAR_97, VAR_98->fxp_spec, VAR_98->fxp_res);
 if (VAR_106) {
  if (VAR_98->fxp_spec == VAR_93)
   VAR_98->fxp_spec = VAR_92;
  else
   VAR_98->fxp_spec = VAR_93;
  VAR_106 = FUNC_6(VAR_97, VAR_98->fxp_spec, VAR_98->fxp_res);
 }
 if (VAR_106) {
  FUNC_18(VAR_97, "could not allocate resources\n");
  VAR_106 = VAR_9;
  goto fail;
 }

 if (VAR_84) {
  FUNC_18(VAR_97, "using %s space register mapping\n",
     VAR_98->fxp_spec == VAR_93 ? "memory" : "I/O");
 }




 FUNC_2(VAR_98, VAR_14, VAR_40);
 FUNC_3(10);

 FUNC_2(VAR_98, VAR_14, VAR_41);
 FUNC_3(10);
 FUNC_1(VAR_98, VAR_15, VAR_52);




 FUNC_22(VAR_98);
 FUNC_25(VAR_98);




 VAR_98->ident = FUNC_23(VAR_97);
 if (VAR_98->ident->ich > 0) {

  VAR_98->revision = VAR_50;
 } else {
  VAR_104 = VAR_98->eeprom[VAR_17];
  if ((VAR_104 >> 8) == 1)
   VAR_98->revision = VAR_47;
  else
   VAR_98->revision = FUNC_55(VAR_97);
 }




 if (VAR_98->revision >= VAR_48 &&
     VAR_98->revision != VAR_49) {
  VAR_104 = VAR_98->eeprom[VAR_22];
  if ((VAR_104 & 0x20) != 0 &&
      FUNC_53(VAR_98->dev, VAR_83, &VAR_109) == 0)
   VAR_98->flags |= VAR_34;
 }

 if (VAR_98->revision == VAR_43) {






  VAR_104 = VAR_98->eeprom[VAR_18];
  if ((VAR_104 & 0x0400) == 0)
   VAR_98->flags |= VAR_30;
 }


 if (VAR_98->revision < VAR_48) {
  VAR_104 = VAR_98->eeprom[VAR_18];
  if ((VAR_104 & 0x03) != 0x03) {
   VAR_98->flags |= VAR_31;
   FUNC_18(VAR_97, "Enabling Rx lock-up workaround\n");
  }
 }




 VAR_104 = VAR_98->eeprom[VAR_23];
 if (VAR_98->revision == VAR_47 && (VAR_104 & VAR_38) != 0
     && (VAR_104 & VAR_39))
  VAR_98->flags |= VAR_33;

 FUNC_29(VAR_98);
 if ((VAR_98->ident->ich >= 2 && VAR_98->ident->ich <= 3) ||
     (VAR_98->ident->ich == 0 && VAR_98->revision >= VAR_50)) {
  VAR_104 = VAR_98->eeprom[VAR_22];
  if (VAR_104 & 0x02) {
   uint16_t VAR_111;
   int VAR_112;

   FUNC_18(VAR_97,
       "Disabling dynamic standby mode in EEPROM\n");
   VAR_104 &= ~0x02;
   VAR_98->eeprom[VAR_22] = VAR_104;
   FUNC_30(VAR_98, &VAR_104, VAR_22, 1);
   FUNC_18(VAR_97, "New EEPROM ID: 0x%x\n", VAR_104);
   VAR_111 = 0;
   for (VAR_112 = 0; VAR_112 < (1 << VAR_98->eeprom_size) - 1; VAR_112++)
    VAR_111 += VAR_98->eeprom[VAR_112];
   VAR_112 = (1 << VAR_98->eeprom_size) - 1;
   VAR_111 = 0xBABA - VAR_111;
   FUNC_30(VAR_98, &VAR_111, VAR_112, 1);
   FUNC_18(VAR_97,
       "EEPROM checksum @ 0x%x: 0x%x -> 0x%x\n",
       VAR_112, VAR_98->eeprom[VAR_112], VAR_111);
   VAR_98->eeprom[VAR_112] = VAR_111;




   VAR_98->flags |= VAR_25;
  }
 }




 if (VAR_98->revision != VAR_47) {





  VAR_103 = FUNC_59(VAR_97, VAR_82, 2);
  if (VAR_103 & VAR_80 &&
      FUNC_59(VAR_97, VAR_81, 1) != 0)
   VAR_98->flags |= VAR_29;


  VAR_98->flags |= VAR_27;


  VAR_98->flags |= VAR_28;
 } else {

  VAR_98->flags |= VAR_32;
 }


 if (VAR_98->revision >= VAR_50) {

  if (VAR_98->ident->device != 0x1209)
   VAR_98->flags |= VAR_24;
 }






 if (VAR_98->revision == VAR_42 || VAR_98->revision == VAR_43 ||
     VAR_98->revision == VAR_45 || VAR_98->revision == VAR_46
     || VAR_98->revision == VAR_44) {
  VAR_98->rfa_size = sizeof (struct fxp_rfa);
  VAR_98->tx_cmd = VAR_11;
  VAR_98->flags |= VAR_26;

  VAR_98->flags &= ~VAR_24;
 } else {
  VAR_98->rfa_size = sizeof (struct fxp_rfa) - VAR_51;
  VAR_98->tx_cmd = VAR_12;
 }




 VAR_98->maxtxseg = VAR_37;
 VAR_98->maxsegsize = VAR_73;
 if (VAR_98->flags & VAR_26) {
  VAR_98->maxtxseg--;
  VAR_98->maxsegsize = VAR_53;
 }
 VAR_106 = FUNC_7(FUNC_11(VAR_97), 2, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     VAR_98->maxsegsize * VAR_98->maxtxseg + sizeof(struct ether_vlan_header),
     VAR_98->maxtxseg, VAR_98->maxsegsize, 0,
     VAR_85, &VAR_55, &VAR_98->fxp_txmtag);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not create TX DMA tag\n");
  goto fail;
 }

 VAR_106 = FUNC_7(FUNC_11(VAR_97), 2, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     VAR_73, 1, VAR_73, 0,
     VAR_85, &VAR_55, &VAR_98->fxp_rxmtag);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not create RX DMA tag\n");
  goto fail;
 }

 VAR_106 = FUNC_7(FUNC_11(VAR_97), 4, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     sizeof(struct fxp_stats), 1, sizeof(struct fxp_stats), 0,
     VAR_85, &VAR_55, &VAR_98->fxp_stag);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not create stats DMA tag\n");
  goto fail;
 }

 VAR_106 = FUNC_10(VAR_98->fxp_stag, (void **)&VAR_98->fxp_stats,
     VAR_2 | VAR_1 | VAR_3, &VAR_98->fxp_smap);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not allocate stats DMA memory\n");
  goto fail;
 }
 VAR_106 = FUNC_9(VAR_98->fxp_stag, VAR_98->fxp_smap, VAR_98->fxp_stats,
     sizeof(struct fxp_stats), VAR_86, &VAR_98->stats_addr,
     VAR_2);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not load the stats DMA buffer\n");
  goto fail;
 }

 VAR_106 = FUNC_7(FUNC_11(VAR_97), 4, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     VAR_54, 1, VAR_54, 0,
     VAR_85, &VAR_55, &VAR_98->cbl_tag);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not create TxCB DMA tag\n");
  goto fail;
 }

 VAR_106 = FUNC_10(VAR_98->cbl_tag, (void **)&VAR_98->fxp_desc.cbl_list,
     VAR_2 | VAR_1 | VAR_3, &VAR_98->cbl_map);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not allocate TxCB DMA memory\n");
  goto fail;
 }

 VAR_106 = FUNC_9(VAR_98->cbl_tag, VAR_98->cbl_map,
     VAR_98->fxp_desc.cbl_list, VAR_54, VAR_86,
     &VAR_98->fxp_desc.cbl_addr, VAR_2);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not load TxCB DMA buffer\n");
  goto fail;
 }

 VAR_106 = FUNC_7(FUNC_11(VAR_97), 4, 0,
     VAR_5, VAR_4, ((void*)0), ((void*)0),
     sizeof(struct fxp_cb_mcs), 1, sizeof(struct fxp_cb_mcs), 0,
     VAR_85, &VAR_55, &VAR_98->mcs_tag);
 if (VAR_106) {
  FUNC_18(VAR_97,
      "could not create multicast setup DMA tag\n");
  goto fail;
 }

 VAR_106 = FUNC_10(VAR_98->mcs_tag, (void **)&VAR_98->mcsp,
     VAR_2 | VAR_1 | VAR_3, &VAR_98->mcs_map);
 if (VAR_106) {
  FUNC_18(VAR_97,
      "could not allocate multicast setup DMA memory\n");
  goto fail;
 }
 VAR_106 = FUNC_9(VAR_98->mcs_tag, VAR_98->mcs_map, VAR_98->mcsp,
     sizeof(struct fxp_cb_mcs), VAR_86, &VAR_98->mcs_addr,
     VAR_2);
 if (VAR_106) {
  FUNC_18(VAR_97,
      "can't load the multicast setup DMA buffer\n");
  goto fail;
 }





 VAR_100 = VAR_98->fxp_desc.tx_list;
 VAR_99 = VAR_98->fxp_desc.cbl_list;
 for (VAR_108 = 0; VAR_108 < VAR_36; VAR_108++) {
  VAR_100[VAR_108].tx_cb = VAR_99 + VAR_108;
  VAR_106 = FUNC_8(VAR_98->fxp_txmtag, 0, &VAR_100[VAR_108].tx_map);
  if (VAR_106) {
   FUNC_18(VAR_97, "can't create DMA map for TX\n");
   goto fail;
  }
 }
 VAR_106 = FUNC_8(VAR_98->fxp_rxmtag, 0, &VAR_98->spare_map);
 if (VAR_106) {
  FUNC_18(VAR_97, "can't create spare DMA map\n");
  goto fail;
 }




 VAR_98->fxp_desc.rx_head = *(VAR_98->fxp_desc.rx_tail = ((void*)0));
 for (VAR_108 = 0; VAR_108 < VAR_35; VAR_108++) {
  VAR_101 = &VAR_98->fxp_desc.rx_list[VAR_108];
  VAR_106 = FUNC_8(VAR_98->fxp_rxmtag, 0, &VAR_101->rx_map);
  if (VAR_106) {
   FUNC_18(VAR_97, "can't create DMA map for RX\n");
   goto fail;
  }
  if (FUNC_26(VAR_98, VAR_101) != 0) {
   VAR_106 = VAR_7;
   goto fail;
  }
  FUNC_21(VAR_98, VAR_101);
 }




 VAR_105[0] = VAR_98->eeprom[VAR_19] & 0xff;
 VAR_105[1] = VAR_98->eeprom[VAR_19] >> 8;
 VAR_105[2] = VAR_98->eeprom[VAR_20] & 0xff;
 VAR_105[3] = VAR_98->eeprom[VAR_20] >> 8;
 VAR_105[4] = VAR_98->eeprom[VAR_21] & 0xff;
 VAR_105[5] = VAR_98->eeprom[VAR_21] >> 8;
 if (VAR_84) {
  FUNC_18(VAR_97, "PCI IDs: %04x %04x %04x %04x %04x\n",
      FUNC_58(VAR_97), FUNC_54(VAR_97),
      FUNC_57(VAR_97), FUNC_56(VAR_97),
      FUNC_55(VAR_97));
  FUNC_18(VAR_97, "Dynamic Standby mode is %s\n",
      VAR_98->eeprom[VAR_22] & 0x02 ? "enabled" :
      "disabled");
 }
 if (VAR_98->flags & VAR_33) {
  FUNC_47(&VAR_98->sc_media, VAR_68|VAR_69, 0, ((void*)0));
  FUNC_49(&VAR_98->sc_media, VAR_68|VAR_69);
 } else {



  VAR_107 = VAR_75;
  if (VAR_98->revision >= VAR_48)
   VAR_107 |= VAR_74;
  VAR_106 = FUNC_50(VAR_97, &VAR_98->miibus, VAR_102,
      (ifm_change_cb_t)VAR_88,
      (ifm_stat_cb_t)VAR_87, VAR_0,
      VAR_77, VAR_76, VAR_107);
  if (VAR_106 != 0) {
   FUNC_18(VAR_97, "attaching PHYs failed\n");
   goto fail;
  }
 }

 FUNC_32(VAR_102, FUNC_14(VAR_97), FUNC_17(VAR_97));
 FUNC_37(VAR_102, VAR_97);
 FUNC_41(VAR_102, VAR_89);
 FUNC_45(VAR_102, VAR_98);
 FUNC_38(VAR_102, VAR_65 | VAR_67 | VAR_66);
 FUNC_42(VAR_102, VAR_91);
 FUNC_46(VAR_102, VAR_96);

 FUNC_33(VAR_102, 0);
 FUNC_35(VAR_102, 0);


 if (VAR_98->flags & VAR_26) {
  FUNC_39(VAR_102, VAR_16 | VAR_6);
  FUNC_34(VAR_102, VAR_56 | VAR_59, 0);
  FUNC_36(VAR_102, VAR_56 | VAR_59, 0);
 }

 if (VAR_98->flags & VAR_24) {
  FUNC_34(VAR_102, VAR_58, 0);
  FUNC_36(VAR_102, VAR_58, 0);
 }

 if (VAR_98->flags & VAR_34) {
  FUNC_34(VAR_102, VAR_64, 0);
  FUNC_36(VAR_102, VAR_64, 0);
 }
 FUNC_19(VAR_102, VAR_105);






 FUNC_40(VAR_102, sizeof(struct ether_vlan_header));
 FUNC_34(VAR_102, VAR_63, 0);
 FUNC_36(VAR_102, VAR_63, 0);
 if ((VAR_98->flags & VAR_26) != 0) {
  FUNC_34(VAR_102, VAR_61 |
      VAR_60 | VAR_62, 0);
  FUNC_36(VAR_102, VAR_61 |
      VAR_60 | VAR_62, 0);
 }





 FUNC_43(VAR_102, VAR_36 - 1);
 FUNC_44(VAR_102);




 VAR_106 = FUNC_12(VAR_97, VAR_98->fxp_res[1], VAR_72 | VAR_71,
          ((void*)0), VAR_90, VAR_98, &VAR_98->ih);
 if (VAR_106) {
  FUNC_18(VAR_97, "could not setup irq\n");
  FUNC_20(VAR_98->ifp);
  goto fail;
 }





 if ((VAR_98->flags & VAR_34) != 0) {
  FUNC_4(VAR_98);

  FUNC_1(VAR_98, VAR_13, FUNC_0(VAR_98, VAR_13));
  FUNC_24(VAR_98, 0);
  FUNC_28(VAR_98);
  FUNC_5(VAR_98);
 }

fail:
 if (VAR_106)
  FUNC_27(VAR_98);
 return (VAR_106);
}
