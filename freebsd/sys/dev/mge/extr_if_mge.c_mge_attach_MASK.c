
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct mii_softc {int mii_phy; } ;
struct mge_softc {int phy_attached; int switch_attached; int rx_ic_time; int tx_ic_time; int mge_intr_cnt; int * ih_cookie; int * res; int mge_ifmedia; TYPE_1__* mii; int miibus; struct ifnet* ifp; int wd_callout; scalar_t__ mge_hw_csum; scalar_t__ tx_desc_used_count; scalar_t__ tx_desc_used_idx; scalar_t__ rx_desc_curr; scalar_t__ tx_desc_curr; int receive_lock; int transmit_lock; int node; struct mge_softc* phy_sc; int dev; } ;
struct TYPE_7__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; TYPE_3__ if_snd; int if_ioctl; int if_start; int if_init; int if_capabilities; int if_capenable; int if_hwassist; struct mge_softc* if_softc; } ;
typedef int device_t ;
struct TYPE_6__ {int description; int * handler; } ;
struct TYPE_5__ {int mii_phys; } ;


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
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct mii_softc* FUNC_2 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (struct mge_softc*,int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *,int ,struct mge_softc*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct ifnet*,int *) ;
 scalar_t__ FUNC_15 (int ,char*,int) ;
 scalar_t__ FUNC_16 (int ,int ,int*,void**) ;
 struct ifnet* FUNC_17 (int ) ;
 int FUNC_18 (struct ifnet*) ;
 int FUNC_19 (struct ifnet*,int ,scalar_t__) ;
 int FUNC_20 (int *,int,int ,int *) ;
 int FUNC_21 (int *,int ,int ,int ) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (struct mge_softc*) ;
 int FUNC_24 (struct mge_softc*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct mge_softc*,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_2__* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_27 (struct mge_softc*) ;
 int FUNC_28 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_29 (int *,int ,char*,int ) ;
 int FUNC_30 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_31 (int *,char*) ;
 int VAR_30 ;

__attribute__((used)) static int
FUNC_32(device_t VAR_31)
{
 struct mge_softc *VAR_32;
 struct mii_softc *VAR_33;
 struct ifnet *VAR_34;
 uint8_t VAR_35[VAR_3];
 int VAR_36, VAR_37, VAR_38;

 VAR_32 = FUNC_11(VAR_31);
 VAR_32->dev = VAR_31;
 VAR_32->node = FUNC_30(VAR_31);
 VAR_38 = 0;

 if (FUNC_16(VAR_32->node, VAR_32->dev, &VAR_38, (void **)&VAR_32->phy_sc) == 0) {
  FUNC_13(VAR_31, "PHY%i attached, phy_sc points to %s\n", VAR_38,
      FUNC_10(VAR_32->phy_sc->dev));
  VAR_32->phy_attached = 1;
 } else {
  FUNC_13(VAR_31, "PHY not attached.\n");
  VAR_32->phy_attached = 0;
  VAR_32->phy_sc = VAR_32;
 }

 if (FUNC_15(VAR_32->node, "mrvl,sw", 1) != 0) {
  FUNC_13(VAR_31, "Switch attached.\n");
  VAR_32->switch_attached = 1;

  VAR_29 = 1;
 } else {
  VAR_32->switch_attached = 0;
 }

 if (FUNC_12(VAR_31) == 0) {
  FUNC_31(&VAR_30, "mge_tick() SMI access threads interlock");
 }


 FUNC_27(VAR_32);


 FUNC_29(&VAR_32->transmit_lock, FUNC_10(VAR_31), "mge TX lock",
     VAR_21);
 FUNC_29(&VAR_32->receive_lock, FUNC_10(VAR_31), "mge RX lock",
     VAR_21);


 VAR_37 = FUNC_4(VAR_31, VAR_28, VAR_32->res);
 if (VAR_37) {
  FUNC_13(VAR_31, "could not allocate resources\n");
  FUNC_25(VAR_31);
  return (VAR_2);
 }


 VAR_37 = FUNC_24(VAR_32);
 if (VAR_37) {
  FUNC_25(VAR_31);
  return (VAR_2);
 }

 VAR_32->tx_desc_curr = 0;
 VAR_32->rx_desc_curr = 0;
 VAR_32->tx_desc_used_idx = 0;
 VAR_32->tx_desc_used_count = 0;


 VAR_32->rx_ic_time = 768;
 VAR_32->tx_ic_time = 768;
 FUNC_23(VAR_32);


 VAR_34 = VAR_32->ifp = FUNC_17(VAR_13);
 if (VAR_34 == ((void*)0)) {
  FUNC_13(VAR_31, "if_alloc() failed\n");
  FUNC_25(VAR_31);
  return (VAR_1);
 }

 FUNC_19(VAR_34, FUNC_9(VAR_31), FUNC_12(VAR_31));
 VAR_34->if_softc = VAR_32;
 VAR_34->if_flags = VAR_9 | VAR_8 | VAR_7;
 VAR_34->if_capabilities = VAR_6;
 if (VAR_32->mge_hw_csum) {
  VAR_34->if_capabilities |= VAR_4;
  VAR_34->if_hwassist = VAR_16;
 }
 VAR_34->if_capenable = VAR_34->if_capabilities;






 VAR_34->if_init = VAR_24;
 VAR_34->if_start = VAR_27;
 VAR_34->if_ioctl = VAR_26;

 VAR_34->if_snd.ifq_drv_maxlen = VAR_19 - 1;
 FUNC_0(&VAR_34->if_snd, VAR_34->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_34->if_snd);

 FUNC_26(VAR_32, VAR_35);
 FUNC_14(VAR_34, VAR_35);
 FUNC_7(&VAR_32->wd_callout, 0);


 if (VAR_32->phy_attached) {
  VAR_37 = FUNC_28(VAR_31, &VAR_32->miibus, VAR_34, VAR_23,
      VAR_22, VAR_0, VAR_38, VAR_20, 0);
  if (VAR_37) {
   FUNC_13(VAR_31, "MII failed to find PHY\n");
   FUNC_18(VAR_34);
   VAR_32->ifp = ((void*)0);
   FUNC_25(VAR_31);
   return (VAR_37);
  }
  VAR_32->mii = FUNC_11(VAR_32->miibus);


  VAR_33 = FUNC_2(&VAR_32->mii->mii_phys);
  FUNC_3(VAR_32, VAR_17, VAR_33->mii_phy);
 } else {

  FUNC_21(&VAR_32->mge_ifmedia, 0,
      VAR_23,
      VAR_22);
  FUNC_20(&VAR_32->mge_ifmedia,
      VAR_11 | VAR_10 | VAR_12,
      0, ((void*)0));
  FUNC_22(&VAR_32->mge_ifmedia,
      VAR_11 | VAR_10 | VAR_12);
 }



 for (VAR_36 = 1; VAR_36 <= VAR_32->mge_intr_cnt; ++VAR_36) {
  VAR_37 = FUNC_6(VAR_31, VAR_32->res[VAR_36],
      VAR_15 | VAR_14,
      ((void*)0), *VAR_25[(VAR_32->mge_intr_cnt == 1 ? 0 : VAR_36)].handler,
      VAR_32, &VAR_32->ih_cookie[VAR_36 - 1]);
  if (VAR_37) {
   FUNC_13(VAR_31, "could not setup %s\n",
       VAR_25[(VAR_32->mge_intr_cnt == 1 ? 0 : VAR_36)].description);
   FUNC_25(VAR_31);
   return (VAR_37);
  }
 }

 if (VAR_32->switch_attached) {
  device_t VAR_39;
  FUNC_3(VAR_32, VAR_17, VAR_18);
  VAR_39 = FUNC_8(VAR_31, "mdio", -1);
  FUNC_5(VAR_31);
 }

 return (0);
}
