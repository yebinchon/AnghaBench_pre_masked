
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ifnet {int if_flags; scalar_t__ if_hwassist; scalar_t__ if_capenable; scalar_t__ if_capabilities; int if_get_counter; int if_qflush; int if_transmit; int if_ioctl; struct axgbe_softc* if_softc; int if_init; } ;
struct TYPE_13__ {int (* phy_init ) (TYPE_3__*) ;} ;
struct TYPE_11__ {int rx_q_cnt; } ;
struct TYPE_14__ {int (* exit ) (TYPE_3__*) ;} ;
struct TYPE_10__ {int advertising; } ;
struct TYPE_12__ {int pause_autoneg; int tx_pause; int rx_pause; int tx_ring_count; int tx_q_count; int rx_ring_count; int dev_state; TYPE_5__ phy_if; TYPE_2__ hw_feat; int rx_q_count; scalar_t__ power_down; int phy_speed; void* rx_pbl; int rx_threshold; int rx_sf_mode; int rx_desc_count; int tx_osp_mode; void* tx_pbl; int tx_threshold; int tx_sf_mode; int tx_desc_count; int pblx8; TYPE_6__ hw_if; int desc_if; int dev_workqueue; int xpcs_lock; int awcache; int arcache; int axdomain; void* coherent; int * serdes_dfe_tap_ena; int * serdes_dfe_tap_cfg; int * serdes_tx_amp; int * serdes_pq_skew; int * serdes_cdr_rate; int * serdes_blwc; int speed_set; TYPE_1__ phy; int dmat; int dev; struct ifnet* netdev; struct resource** chan_irq_res; void* per_channel_irq; struct resource* dev_irq_res; struct resource* xpcs_res; struct resource* xgmac_res; struct resource* an_irq_res; struct resource* sir1_res; struct resource* sir0_res; struct resource* rxtx_res; } ;
struct axgbe_softc {TYPE_3__ prv; int media; int mac_addr; } ;
typedef scalar_t__ ssize_t ;
typedef int phy_handle ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 char* VAR_38 ;
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
 int FUNC_5 (int ,int ,int ,int *,int) ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 scalar_t__ FUNC_6 (int ,int ,struct resource**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct axgbe_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct ifnet*,int ) ;
 struct ifnet* FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*,int ,int ) ;
 int FUNC_15 (int *,int,int ,int *) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int *,int) ;
 int VAR_65 ;
 int FUNC_18 (struct resource**) ;
 int FUNC_19 (int ) ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (char*,int ,int ,int *) ;
 int FUNC_25 (int *,int,int ,char*) ;
 int VAR_68 ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (TYPE_6__*) ;
 int FUNC_29 (TYPE_5__*) ;
 int FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (TYPE_3__*) ;
 scalar_t__ FUNC_32 (struct ifnet*) ;
 int VAR_69 ;

__attribute__((used)) static int
FUNC_33(device_t VAR_70)
{
 struct axgbe_softc *VAR_71;
 struct ifnet *VAR_72;
 pcell_t VAR_73;
 device_t VAR_74;
 phandle_t VAR_75, VAR_76;
 struct resource *VAR_77[11];
 struct resource *VAR_78[4];
 ssize_t VAR_79;
 int VAR_80, VAR_81, VAR_82;

 VAR_71 = FUNC_9(VAR_70);

 VAR_75 = FUNC_19(VAR_70);
 if (FUNC_1(VAR_75, "phy-handle", &VAR_73,
     sizeof(VAR_73)) <= 0) {
  VAR_76 = VAR_75;

  if (FUNC_6(VAR_70, VAR_65, VAR_77)) {
   FUNC_11(VAR_70,
       "could not allocate phy resources\n");
   return (VAR_6);
  }

  VAR_71->prv.xgmac_res = VAR_77[0];
  VAR_71->prv.xpcs_res = VAR_77[1];
  VAR_71->prv.rxtx_res = VAR_77[2];
  VAR_71->prv.sir0_res = VAR_77[3];
  VAR_71->prv.sir1_res = VAR_77[4];

  VAR_71->prv.dev_irq_res = VAR_77[5];
  VAR_71->prv.per_channel_irq = FUNC_4(VAR_75,
      VAR_28);
  for (VAR_81 = 0, VAR_82 = 6; VAR_82 < FUNC_18(VAR_77) - 1 &&
      VAR_77[VAR_82 + 1] != ((void*)0); VAR_81++, VAR_82++) {
   if (VAR_71->prv.per_channel_irq) {
    VAR_71->prv.chan_irq_res[VAR_81] = VAR_77[VAR_82];
   }
  }


  VAR_71->prv.an_irq_res = VAR_77[VAR_82];
 } else {
  VAR_74 = FUNC_0(VAR_73);
  VAR_76 = FUNC_19(VAR_74);

  if (FUNC_6(VAR_74, VAR_67, VAR_78)) {
   FUNC_11(VAR_70,
       "could not allocate phy resources\n");
   return (VAR_6);
  }

  if (FUNC_6(VAR_70, VAR_66, VAR_77)) {
   FUNC_11(VAR_70,
       "could not allocate mac resources\n");
   return (VAR_6);
  }

  VAR_71->prv.rxtx_res = VAR_78[0];
  VAR_71->prv.sir0_res = VAR_78[1];
  VAR_71->prv.sir1_res = VAR_78[2];
  VAR_71->prv.an_irq_res = VAR_78[3];

  VAR_71->prv.xgmac_res = VAR_77[0];
  VAR_71->prv.xpcs_res = VAR_77[1];
  VAR_71->prv.dev_irq_res = VAR_77[2];
  VAR_71->prv.per_channel_irq = FUNC_4(VAR_75,
      VAR_28);
  if (VAR_71->prv.per_channel_irq) {
   for (VAR_81 = 0, VAR_82 = 3; VAR_81 < FUNC_18(VAR_71->prv.chan_irq_res) &&
       VAR_77[VAR_82] != ((void*)0); VAR_81++, VAR_82++) {
    VAR_71->prv.chan_irq_res[VAR_81] = VAR_77[VAR_82];
   }
  }
 }

 if ((VAR_79 = FUNC_3(VAR_75, "mac-address")) < 0) {
  FUNC_11(VAR_70, "No mac-address property\n");
  return (VAR_5);
 }

 if (VAR_79 != VAR_7)
  return (VAR_5);

 FUNC_2(VAR_75, "mac-address", VAR_71->mac_addr, VAR_7);

 VAR_71->prv.netdev = VAR_72 = FUNC_13(VAR_16);
 if (VAR_72 == ((void*)0)) {
  FUNC_11(VAR_70, "Cannot alloc ifnet\n");
  return (VAR_6);
 }

 VAR_71->prv.dev = VAR_70;
 VAR_71->prv.dmat = FUNC_7(VAR_70);
 VAR_71->prv.phy.advertising = VAR_0 |
     VAR_1;







 if (FUNC_1(VAR_76, VAR_38, &VAR_71->prv.speed_set,
     sizeof(VAR_71->prv.speed_set)) <= 0) {
  FUNC_11(VAR_70, "%s property is missing\n",
      VAR_38);
  return (VAR_5);
 }

 VAR_80 = FUNC_5(VAR_70, VAR_76, VAR_24,
     VAR_71->prv.serdes_blwc, sizeof(VAR_71->prv.serdes_blwc));
 if (VAR_80 > 0) {
  return (VAR_80);
 } else if (VAR_80 < 0) {
  VAR_71->prv.serdes_blwc[0] = VAR_45;
  VAR_71->prv.serdes_blwc[1] = VAR_51;
  VAR_71->prv.serdes_blwc[2] = VAR_39;
 }

 VAR_80 = FUNC_5(VAR_70, VAR_76, VAR_25,
     VAR_71->prv.serdes_cdr_rate, sizeof(VAR_71->prv.serdes_cdr_rate));
 if (VAR_80 > 0) {
  return (VAR_80);
 } else if (VAR_80 < 0) {
  VAR_71->prv.serdes_cdr_rate[0] = VAR_46;
  VAR_71->prv.serdes_cdr_rate[1] = VAR_52;
  VAR_71->prv.serdes_cdr_rate[2] = VAR_40;
 }

 VAR_80 = FUNC_5(VAR_70, VAR_76, VAR_36,
     VAR_71->prv.serdes_pq_skew, sizeof(VAR_71->prv.serdes_pq_skew));
 if (VAR_80 > 0) {
  return (VAR_80);
 } else if (VAR_80 < 0) {
  VAR_71->prv.serdes_pq_skew[0] = VAR_49;
  VAR_71->prv.serdes_pq_skew[1] = VAR_55;
  VAR_71->prv.serdes_pq_skew[2] = VAR_43;
 }

 VAR_80 = FUNC_5(VAR_70, VAR_76, VAR_57,
     VAR_71->prv.serdes_tx_amp, sizeof(VAR_71->prv.serdes_tx_amp));
 if (VAR_80 > 0) {
  return (VAR_80);
 } else if (VAR_80 < 0) {
  VAR_71->prv.serdes_tx_amp[0] = VAR_50;
  VAR_71->prv.serdes_tx_amp[1] = VAR_56;
  VAR_71->prv.serdes_tx_amp[2] = VAR_44;
 }

 VAR_80 = FUNC_5(VAR_70, VAR_76, VAR_26,
     VAR_71->prv.serdes_dfe_tap_cfg, sizeof(VAR_71->prv.serdes_dfe_tap_cfg));
 if (VAR_80 > 0) {
  return (VAR_80);
 } else if (VAR_80 < 0) {
  VAR_71->prv.serdes_dfe_tap_cfg[0] = VAR_47;
  VAR_71->prv.serdes_dfe_tap_cfg[1] = VAR_53;
  VAR_71->prv.serdes_dfe_tap_cfg[2] = VAR_41;
 }

 VAR_80 = FUNC_5(VAR_70, VAR_76, VAR_27,
     VAR_71->prv.serdes_dfe_tap_ena, sizeof(VAR_71->prv.serdes_dfe_tap_ena));
 if (VAR_80 > 0) {
  return (VAR_80);
 } else if (VAR_80 < 0) {
  VAR_71->prv.serdes_dfe_tap_ena[0] = VAR_48;
  VAR_71->prv.serdes_dfe_tap_ena[1] = VAR_54;
  VAR_71->prv.serdes_dfe_tap_ena[2] = VAR_42;
 }


 VAR_71->prv.coherent = FUNC_4(VAR_75, "dma-coherent");
 if (VAR_71->prv.coherent) {
  VAR_71->prv.axdomain = VAR_31;
  VAR_71->prv.arcache = VAR_29;
  VAR_71->prv.awcache = VAR_30;
 } else {
  VAR_71->prv.axdomain = VAR_34;
  VAR_71->prv.arcache = VAR_32;
  VAR_71->prv.awcache = VAR_33;
 }


 FUNC_21(&VAR_71->prv.xpcs_lock);
 VAR_71->prv.dev_workqueue = FUNC_24("axgbe", VAR_21,
     VAR_68, &VAR_71->prv.dev_workqueue);
 FUNC_25(&VAR_71->prv.dev_workqueue, 1, VAR_22,
     "axgbe taskq");


 FUNC_29(&VAR_71->prv.phy_if);
 FUNC_28(&VAR_71->prv.hw_if);
 FUNC_27(&VAR_71->prv.desc_if);


 VAR_71->prv.hw_if.exit(&VAR_71->prv);


 FUNC_26(&VAR_71->prv);


 VAR_71->prv.pblx8 = VAR_4;
 VAR_71->prv.tx_desc_count = VAR_58;
 VAR_71->prv.tx_sf_mode = VAR_19;
 VAR_71->prv.tx_threshold = VAR_20;
 VAR_71->prv.tx_pbl = VAR_3;
 VAR_71->prv.tx_osp_mode = VAR_2;
 VAR_71->prv.rx_desc_count = VAR_37;
 VAR_71->prv.rx_sf_mode = VAR_17;
 VAR_71->prv.rx_threshold = VAR_18;
 VAR_71->prv.rx_pbl = VAR_3;
 VAR_71->prv.pause_autoneg = 1;
 VAR_71->prv.tx_pause = 1;
 VAR_71->prv.rx_pause = 1;
 VAR_71->prv.phy_speed = VAR_23;
 VAR_71->prv.power_down = 0;


 VAR_71->prv.tx_ring_count = 1;
 VAR_71->prv.tx_q_count = 1;
 VAR_71->prv.rx_ring_count = 1;
 VAR_71->prv.rx_q_count = VAR_71->prv.hw_feat.rx_q_cnt;


 VAR_71->prv.phy_if.phy_init(&VAR_71->prv);


 FUNC_30(&VAR_71->prv);
 FUNC_31(&VAR_71->prv);

 FUNC_14(VAR_72, FUNC_8(VAR_70), FUNC_10(VAR_70));
 VAR_72->if_init = VAR_60;
        VAR_72->if_softc = VAR_71;
 VAR_72->if_flags = VAR_8 | VAR_10 | VAR_9;
 VAR_72->if_ioctl = VAR_61;
 VAR_72->if_transmit = VAR_69;
 VAR_72->if_qflush = VAR_64;
 VAR_72->if_get_counter = VAR_59;


 VAR_72->if_capabilities = 0;
 VAR_72->if_capenable = 0;
 VAR_72->if_hwassist = 0;

 FUNC_12(VAR_72, VAR_71->mac_addr);

 FUNC_16(&VAR_71->media, VAR_15, VAR_62,
     VAR_63);



 FUNC_15(&VAR_71->media, VAR_14 | VAR_11, 0, ((void*)0));
 FUNC_15(&VAR_71->media, VAR_14 | VAR_13, 0, ((void*)0));
 FUNC_17(&VAR_71->media, VAR_14 | VAR_13);

 FUNC_20(VAR_35, &VAR_71->prv.dev_state);

 if (FUNC_32(VAR_72) < 0) {
  FUNC_11(VAR_70, "ndo_open failed\n");
  return (VAR_6);
 }

 return (0);
}
