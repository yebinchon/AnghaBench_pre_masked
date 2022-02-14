
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct taskqueue {int dummy; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_11__ {int ifq_drv_maxlen; } ;
struct ifnet {scalar_t__ if_hw_tsomax; scalar_t__ if_hw_tsomaxsegcount; scalar_t__ if_hw_tsomaxsegsize; int if_flags; int if_capabilities; int if_hwassist; int if_capenable; scalar_t__ if_mtu; int if_hdrlen; int if_qflush; int if_transmit; TYPE_6__ if_snd; int if_start; int if_init; int if_ioctl; int if_baudrate; struct hn_softc* if_softc; } ;
struct TYPE_9__ {TYPE_1__* ifm_cur; int ifm_media; } ;
struct hn_softc {int hn_cpu; int hn_rx_ring_inuse; scalar_t__ hn_nvs_ver; scalar_t__ hn_rndis_agg_size; scalar_t__ hn_rndis_agg_pkts; scalar_t__ hn_rndis_agg_align; int hn_caps; int hn_flags; void* hn_ifnet_dethand; void* hn_ifnet_atthand; void* hn_ifnet_lnkhand; void* hn_ifaddr_evthand; void* hn_ifnet_evthand; void* hn_mgmt_taskq0; void* hn_mgmt_taskq; TYPE_5__* hn_tx_ring; TYPE_2__ hn_media; int hn_rss_ind_size; int hn_prichan; int * hn_xact; struct ifnet* hn_ifp; int hn_vf_init; void* hn_vf_taskq; int hn_netchg_status; int hn_netchg_init; int hn_link_task; void** hn_tx_taskqs; int hn_agg_pkts; int hn_agg_size; int hn_xvf_flags; int hn_vf_lock; int hn_dev; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
struct TYPE_10__ {int hn_csum_assist; } ;
struct TYPE_8__ {int ifm_media; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int ,int ,struct hn_softc*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_3 (struct hn_softc*) ;
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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_42 ;
 int FUNC_6 (int) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int FUNC_7 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_8 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct hn_softc*,int ,int ,char*,char*) ;
 int FUNC_9 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,scalar_t__*,int ,char*) ;
 struct sysctl_oid_list* FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ,struct hn_softc*) ;
 int FUNC_12 (void*,int *,int ,int ,struct hn_softc*) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ VAR_48 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct hn_softc* FUNC_17 (int ) ;
 struct sysctl_ctx_list* FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,scalar_t__) ;
 int FUNC_22 (struct ifnet*,int *) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_23 (struct hn_softc*,int) ;
 int FUNC_24 (struct hn_softc*,int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct hn_softc*) ;
 int FUNC_27 (struct hn_softc*) ;
 int FUNC_28 (TYPE_5__*) ;
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
 int FUNC_29 (struct hn_softc*,int *) ;
 int FUNC_30 (struct hn_softc*,scalar_t__*) ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int FUNC_31 (struct hn_softc*,int ) ;
 int FUNC_32 (struct hn_softc*,int ,scalar_t__) ;
 int VAR_75 ;
 int FUNC_33 (struct hn_softc*,scalar_t__) ;
 int FUNC_34 (struct hn_softc*) ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 scalar_t__ VAR_82 ;
 void** VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int FUNC_35 (struct hn_softc*) ;
 scalar_t__ VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 scalar_t__ VAR_89 ;
 scalar_t__ VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 struct ifnet* FUNC_36 (int ) ;
 int FUNC_37 (struct ifnet*,int ,int ) ;
 int FUNC_38 (struct ifnet*,char*,scalar_t__,scalar_t__) ;
 int VAR_94 ;
 int FUNC_39 (TYPE_2__*,int,int ,int *) ;
 int FUNC_40 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_41 (TYPE_2__*,int) ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 void** FUNC_42 (int,int ,int ) ;
 int VAR_98 ;
 int FUNC_43 (int *,char*) ;
 int FUNC_44 () ;
 void* FUNC_45 (char*,int ,int ,void**) ;
 int FUNC_46 (void**,int,int ,char*,int ,...) ;
 int VAR_99 ;
 scalar_t__ FUNC_47 (int ) ;
 int FUNC_48 (int ,int *) ;
 int FUNC_49 (int ) ;
 int * FUNC_50 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_51(device_t VAR_100)
{
 struct hn_softc *VAR_101 = FUNC_17(VAR_100);
 struct sysctl_oid_list *VAR_102;
 struct sysctl_ctx_list *VAR_103;
 uint8_t VAR_104[VAR_11];
 struct ifnet *VAR_105 = ((void*)0);
 int VAR_106, VAR_107, VAR_108;
 uint32_t VAR_109;

 VAR_101->hn_dev = VAR_100;
 VAR_101->hn_prichan = FUNC_49(VAR_100);
 FUNC_2(VAR_101);
 FUNC_43(&VAR_101->hn_vf_lock, "hnvf");
 if (VAR_89 && VAR_90)
  VAR_101->hn_xvf_flags |= VAR_26;




 VAR_101->hn_agg_size = VAR_79;
 VAR_101->hn_agg_pkts = VAR_78;




 if (VAR_82 == VAR_23) {
  int VAR_110;

  VAR_101->hn_tx_taskqs =
      FUNC_42(VAR_81 * sizeof(struct taskqueue *),
      VAR_43, VAR_44);
  for (VAR_110 = 0; VAR_110 < VAR_81; ++VAR_110) {
   VAR_101->hn_tx_taskqs[VAR_110] = FUNC_45("hn_tx",
       VAR_44, VAR_99,
       &VAR_101->hn_tx_taskqs[VAR_110]);
   FUNC_46(&VAR_101->hn_tx_taskqs[VAR_110], 1, VAR_47,
       "%s tx%d", FUNC_16(VAR_100), VAR_110);
  }
 } else if (VAR_82 == VAR_22) {
  VAR_101->hn_tx_taskqs = VAR_83;
 }




 VAR_101->hn_mgmt_taskq0 = FUNC_45("hn_mgmt", VAR_44,
     VAR_99, &VAR_101->hn_mgmt_taskq0);
 FUNC_46(&VAR_101->hn_mgmt_taskq0, 1, VAR_47, "%s mgmt",
     FUNC_16(VAR_100));
 FUNC_11(&VAR_101->hn_link_task, 0, VAR_63, VAR_101);
 FUNC_11(&VAR_101->hn_netchg_init, 0, VAR_65, VAR_101);
 FUNC_12(VAR_101->hn_mgmt_taskq0, &VAR_101->hn_netchg_status, 0,
     VAR_66, VAR_101);

 if (VAR_89) {



  VAR_101->hn_vf_taskq = FUNC_45("hn_vf", VAR_44,
      VAR_99, &VAR_101->hn_vf_taskq);
  FUNC_46(&VAR_101->hn_vf_taskq, 1, VAR_47, "%s vf",
      FUNC_16(VAR_100));
  FUNC_12(VAR_101->hn_vf_taskq, &VAR_101->hn_vf_init, 0,
      VAR_93, VAR_101);
 }






 VAR_105 = VAR_101->hn_ifp = FUNC_36(VAR_42);
 VAR_105->if_softc = VAR_101;
 FUNC_37(VAR_105, FUNC_15(VAR_100), FUNC_20(VAR_100));





 FUNC_40(&VAR_101->hn_media, 0, VAR_56, VAR_55);
 VAR_107 = VAR_51;
 if (VAR_107 <= 0) {

  VAR_107 = VAR_98;
  if (VAR_107 > VAR_20)
   VAR_107 = VAR_20;
 } else if (VAR_107 > VAR_98) {
  VAR_107 = VAR_98;
 }





 VAR_108 = VAR_80;
 if (VAR_108 <= 0 || VAR_108 > VAR_107)
  VAR_108 = VAR_107;
 VAR_101->hn_cpu = FUNC_13(&VAR_52, VAR_107) % VAR_98;





 VAR_106 = FUNC_24(VAR_101, VAR_108);
 if (VAR_106)
  goto failed;
 VAR_106 = FUNC_23(VAR_101, VAR_107);
 if (VAR_106)
  goto failed;




 VAR_101->hn_xact = FUNC_50(FUNC_14(VAR_100),
     VAR_24, VAR_25, 0);
 if (VAR_101->hn_xact == ((void*)0)) {
  VAR_106 = VAR_9;
  goto failed;
 }
 FUNC_48(VAR_101->hn_prichan, VAR_101->hn_xact);
 if (FUNC_47(VAR_101->hn_prichan)) {
  VAR_106 = VAR_9;
  goto failed;
 }




 VAR_106 = FUNC_33(VAR_101, VAR_10);
 if (VAR_106)
  goto failed;

 VAR_106 = FUNC_29(VAR_101, VAR_104);
 if (VAR_106)
  goto failed;

 VAR_106 = FUNC_30(VAR_101, &VAR_109);
 if (VAR_106)
  VAR_109 = VAR_10;
 else if (VAR_48)
  FUNC_21(VAR_100, "RNDIS mtu %u\n", VAR_109);
 FUNC_27(VAR_101);
 FUNC_26(VAR_101);

 VAR_103 = FUNC_18(VAR_100);
 VAR_102 = FUNC_10(FUNC_19(VAR_100));
 FUNC_9(VAR_103, VAR_102, VAR_45, "nvs_version", VAR_3,
     &VAR_101->hn_nvs_ver, 0, "NVS version");
 FUNC_8(VAR_103, VAR_102, VAR_45, "ndis_version",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_64, "A", "NDIS version");
 FUNC_8(VAR_103, VAR_102, VAR_45, "caps",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_50, "A", "capabilities");
 FUNC_8(VAR_103, VAR_102, VAR_45, "hwassist",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_53, "A", "hwassist");
 FUNC_9(VAR_103, VAR_102, VAR_45, "tso_max",
     VAR_3, &VAR_105->if_hw_tsomax, 0, "max TSO size");
 FUNC_9(VAR_103, VAR_102, VAR_45, "tso_maxsegcnt",
     VAR_3, &VAR_105->if_hw_tsomaxsegcount, 0,
     "max # of TSO segments");
 FUNC_9(VAR_103, VAR_102, VAR_45, "tso_maxsegsz",
     VAR_3, &VAR_105->if_hw_tsomaxsegsize, 0,
     "max size of TSO segment");
 FUNC_8(VAR_103, VAR_102, VAR_45, "rxfilter",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_73, "A", "rxfilter");
 FUNC_8(VAR_103, VAR_102, VAR_45, "rss_hash",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_68, "A", "RSS hash");
 FUNC_8(VAR_103, VAR_102, VAR_45, "rss_hashcap",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_69, "A", "RSS hash capabilities");
 FUNC_8(VAR_103, VAR_102, VAR_45, "mbuf_hash",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_72, "A", "RSS hash for mbufs");
 FUNC_7(VAR_103, VAR_102, VAR_45, "rss_ind_size",
     VAR_3, &VAR_101->hn_rss_ind_size, 0, "RSS indirect entry count");




 FUNC_8(VAR_103, VAR_102, VAR_45, "rss_key",
     VAR_6 | VAR_4 | VAR_2, VAR_101, 0,
     VAR_71, "IU", "RSS key");
 FUNC_8(VAR_103, VAR_102, VAR_45, "rss_ind",
     VAR_6 | VAR_4 | VAR_2, VAR_101, 0,
     VAR_70, "IU", "RSS indirect table");

 FUNC_9(VAR_103, VAR_102, VAR_45, "rndis_agg_size",
     VAR_3, &VAR_101->hn_rndis_agg_size, 0,
     "RNDIS offered packet transmission aggregation size limit");
 FUNC_9(VAR_103, VAR_102, VAR_45, "rndis_agg_pkts",
     VAR_3, &VAR_101->hn_rndis_agg_pkts, 0,
     "RNDIS offered packet transmission aggregation count limit");
 FUNC_9(VAR_103, VAR_102, VAR_45, "rndis_agg_align",
     VAR_3, &VAR_101->hn_rndis_agg_align, 0,
     "RNDIS packet transmission aggregation alignment");
 FUNC_8(VAR_103, VAR_102, VAR_45, "agg_size",
     VAR_5 | VAR_4 | VAR_2, VAR_101, 0,
     VAR_85, "I",
     "Packet transmission aggregation size, 0 -- disable, -1 -- auto");
 FUNC_8(VAR_103, VAR_102, VAR_45, "agg_pkts",
     VAR_5 | VAR_4 | VAR_2, VAR_101, 0,
     VAR_84, "I",
     "Packet transmission aggregation packets, "
     "0 -- disable, -1 -- auto");
 FUNC_8(VAR_103, VAR_102, VAR_45, "polling",
     VAR_8 | VAR_4 | VAR_2, VAR_101, 0,
     VAR_67, "I",
     "Polling frequency: [100,1000000], 0 disable polling");
 FUNC_8(VAR_103, VAR_102, VAR_45, "vf",
     VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
     VAR_87, "A", "Virtual Function's name");
 if (!VAR_89) {
  FUNC_8(VAR_103, VAR_102, VAR_45, "rxvf",
      VAR_7 | VAR_3 | VAR_2, VAR_101, 0,
      VAR_74, "A", "activated Virtual Function's name");
 } else {
  FUNC_8(VAR_103, VAR_102, VAR_45, "vf_xpnt_enabled",
      VAR_5 | VAR_3 | VAR_2, VAR_101, 0,
      VAR_92, "I",
      "Transparent VF enabled");
  FUNC_8(VAR_103, VAR_102, VAR_45, "vf_xpnt_accbpf",
      VAR_5 | VAR_4 | VAR_2, VAR_101, 0,
      VAR_91, "I",
      "Accurate BPF for transparent VF");
 }




 FUNC_39(&VAR_101->hn_media, VAR_41 | VAR_40, 0, ((void*)0));
 FUNC_41(&VAR_101->hn_media, VAR_41 | VAR_40);

 VAR_101->hn_media.ifm_media = VAR_101->hn_media.ifm_cur->ifm_media;





 VAR_105->if_baudrate = FUNC_6(10);
 VAR_105->if_flags = VAR_37 | VAR_39 | VAR_38;
 VAR_105->if_ioctl = VAR_62;
 VAR_105->if_init = VAR_61;
 {
  VAR_105->if_transmit = VAR_76;
  VAR_105->if_qflush = VAR_88;
 }

 VAR_105->if_capabilities |= VAR_29 | VAR_28 | VAR_27;




 if (VAR_101->hn_caps & VAR_15) {

  VAR_105->if_capabilities |= VAR_35 | VAR_36;
 }

 VAR_105->if_hwassist = VAR_101->hn_tx_ring[0].hn_csum_assist;
 if (VAR_105->if_hwassist & VAR_17)
  VAR_105->if_capabilities |= VAR_33;
 if (VAR_105->if_hwassist & VAR_16)
  VAR_105->if_capabilities |= VAR_34;
 if (VAR_101->hn_caps & VAR_13) {
  VAR_105->if_capabilities |= VAR_31;
  VAR_105->if_hwassist |= VAR_1;
 }
 if (VAR_101->hn_caps & VAR_14) {
  VAR_105->if_capabilities |= VAR_32;
  VAR_105->if_hwassist |= VAR_0;
 }


 VAR_105->if_capenable = VAR_105->if_capabilities;





 VAR_105->if_capenable &= ~(VAR_34 | VAR_32);
 VAR_105->if_hwassist &= ~(VAR_16 | VAR_0);

 if (VAR_105->if_capabilities & (VAR_32 | VAR_31)) {




  FUNC_1(VAR_101);
  FUNC_32(VAR_101, VAR_77, VAR_10);
  FUNC_3(VAR_101);
  VAR_105->if_hw_tsomaxsegcount = VAR_21;
  VAR_105->if_hw_tsomaxsegsize = VAR_46;
 }

 FUNC_22(VAR_105, VAR_104);

 if ((VAR_105->if_capabilities & (VAR_32 | VAR_31)) && VAR_48) {
  FUNC_38(VAR_105, "TSO segcnt %u segsz %u\n",
      VAR_105->if_hw_tsomaxsegcount, VAR_105->if_hw_tsomaxsegsize);
 }
 if (VAR_109 < VAR_10) {
  FUNC_38(VAR_105, "fixup mtu %u -> %u\n", VAR_105->if_mtu, VAR_109);
  VAR_105->if_mtu = VAR_109;
 }


 VAR_105->if_hdrlen = sizeof(struct ether_vlan_header);




 VAR_101->hn_mgmt_taskq = VAR_101->hn_mgmt_taskq0;
 FUNC_35(VAR_101);

 if (!VAR_89) {
  VAR_101->hn_ifnet_evthand = FUNC_0(VAR_96,
      VAR_59, VAR_101, VAR_12);
  VAR_101->hn_ifaddr_evthand = FUNC_0(VAR_94,
      VAR_54, VAR_101, VAR_12);
 } else {
  VAR_101->hn_ifnet_lnkhand = FUNC_0(VAR_97,
      VAR_60, VAR_101, VAR_12);
 }







 VAR_101->hn_ifnet_atthand = FUNC_0(VAR_49,
     VAR_57, VAR_101, VAR_12);
 VAR_101->hn_ifnet_dethand = FUNC_0(VAR_95,
     VAR_58, VAR_101, VAR_12);

 return (0);
failed:
 if (VAR_101->hn_flags & VAR_18)
  FUNC_34(VAR_101);
 FUNC_25(VAR_100);
 return (VAR_106);
}
