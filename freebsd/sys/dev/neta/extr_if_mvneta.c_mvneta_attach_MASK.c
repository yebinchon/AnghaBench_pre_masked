
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mvneta_softc {int version; scalar_t__ phy_addr; scalar_t__ use_inband_status; int phy_attached; int phy_speed; struct ifnet* ifp; int * ih_cookie; int * res; int tick_ch; int * dev; int mvneta_ifmedia; scalar_t__ phy_fdx; int phy_mode; int * miibus; void* mii; int enaddr; int mtx; } ;
struct TYPE_5__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_capabilities; int if_flags; int if_capenable; int if_hwassist; int if_ioctl; int if_init; TYPE_2__ if_snd; int if_start; int if_qflush; int if_transmit; struct mvneta_softc* if_softc; } ;
typedef int * device_t ;
struct TYPE_4__ {int description; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_2 (struct mvneta_softc*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_3 (struct mvneta_softc*,int ) ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_4 (struct mvneta_softc*,int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int,int *,int ,struct mvneta_softc*,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,struct mvneta_softc*) ;
 int * FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*,...) ;
 int FUNC_16 (struct ifnet*,int ) ;
 int FUNC_17 (struct ifnet*) ;
 struct ifnet* FUNC_18 (int ) ;
 int FUNC_19 (struct ifnet*,int ,int ) ;
 int FUNC_20 (struct ifnet*,int ) ;
 int FUNC_21 (int *,int,int ,int *) ;
 int FUNC_22 (int *,int ,int ,int ) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int **,struct ifnet*,int ,int ,int ,scalar_t__,int ,int ) ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_25 (int *,char*,int *,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct mvneta_softc*) ;
 int FUNC_28 (struct mvneta_softc*) ;
 int FUNC_29 (struct mvneta_softc*) ;
 scalar_t__ FUNC_30 (struct mvneta_softc*,int ) ;
 scalar_t__ FUNC_31 (int *) ;
 int VAR_50 ;
 int FUNC_32 (struct ifnet*) ;
 TYPE_1__* VAR_51 ;
 int VAR_52 ;
 int FUNC_33 (struct mvneta_softc*) ;
 int FUNC_34 (struct mvneta_softc*) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_35 (struct mvneta_softc*,int) ;
 int FUNC_36 (struct mvneta_softc*,int) ;
 int FUNC_37 (struct mvneta_softc*) ;
 int FUNC_38 (struct mvneta_softc*) ;
 int FUNC_39 (struct mvneta_softc*,int ) ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_40 (struct mvneta_softc*,scalar_t__) ;
 int FUNC_41 (struct mvneta_softc*,int) ;
 int VAR_59 ;
 int FUNC_42 (struct mvneta_softc*) ;

int
FUNC_43(device_t VAR_60)
{
 struct mvneta_softc *VAR_61;
 struct ifnet *VAR_62;
 device_t VAR_63;
 int VAR_64;
 int VAR_65, VAR_66;

 uint32_t VAR_67;


 VAR_61 = FUNC_13(VAR_60);
 VAR_61->dev = VAR_60;

 FUNC_25(&VAR_61->mtx, "mvneta_sc", ((void*)0), VAR_32);

 VAR_66 = FUNC_6(VAR_60, VAR_59, VAR_61->res);
 if (VAR_66) {
  FUNC_15(VAR_60, "could not allocate resources\n");
  return (VAR_5);
 }

 VAR_61->version = FUNC_3(VAR_61, VAR_42);
 FUNC_15(VAR_60, "version is %x\n", VAR_61->version);
 FUNC_9(&VAR_61->tick_ch, 0);




 FUNC_4(VAR_61, VAR_37, 0x00000001);
 FUNC_4(VAR_61, VAR_41, 0x00000001);
 if ((FUNC_3(VAR_61, FUNC_5(0)) & VAR_28) == 0) {
  VAR_67 = FUNC_3(VAR_61, VAR_38);
  VAR_67 &= ~VAR_40;
  VAR_67 &= ~VAR_39;
  FUNC_4(VAR_61, VAR_38, VAR_67);
 }





 if (FUNC_30(VAR_61, VAR_61->enaddr)) {
  FUNC_15(VAR_60, "no mac address.\n");
  return (VAR_5);
 }
 FUNC_39(VAR_61, VAR_61->enaddr);

 FUNC_27(VAR_61);


 VAR_62 = VAR_61->ifp = FUNC_18(VAR_25);
 if (VAR_62 == ((void*)0)) {
  FUNC_15(VAR_60, "if_alloc() failed\n");
  FUNC_26(VAR_60);
  return (VAR_4);
 }
 FUNC_19(VAR_62, FUNC_12(VAR_60), FUNC_14(VAR_60));





 VAR_62->if_capabilities |= VAR_13 | VAR_9;

 VAR_62->if_softc = VAR_61;
 VAR_62->if_flags = VAR_14 | VAR_16 | VAR_15;




 VAR_62->if_start = VAR_56;
 VAR_62->if_snd.ifq_drv_maxlen = VAR_45 - 1;
 FUNC_0(&VAR_62->if_snd, VAR_62->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_62->if_snd);

 VAR_62->if_init = VAR_50;
 VAR_62->if_ioctl = VAR_52;




 VAR_62->if_capabilities |= VAR_7;






 VAR_62->if_capabilities |= VAR_12 | VAR_11;




 VAR_62->if_capabilities &= ~VAR_8;
 VAR_62->if_capenable = VAR_62->if_capabilities;





 VAR_62->if_capabilities |= VAR_10;

 VAR_62->if_hwassist = VAR_1 | VAR_2 | VAR_3;





 VAR_66 = FUNC_28(VAR_61);
 if (VAR_66 != 0) {
  FUNC_26(VAR_60);
  return (VAR_66);
 }


 for (VAR_65 = 0; VAR_65 < VAR_44; VAR_65++) {
  VAR_66 = FUNC_36(VAR_61, VAR_65);
  if (VAR_66 != 0) {
   FUNC_26(VAR_60);
   return (VAR_66);
  }
 }

 for (VAR_65 = 0; VAR_65 < VAR_43; VAR_65++) {
  VAR_66 = FUNC_35(VAR_61, VAR_65);
  if (VAR_66 != 0) {
   FUNC_26(VAR_60);
   return (VAR_66);
  }
 }

 FUNC_16(VAR_62, VAR_61->enaddr);




 FUNC_4(VAR_61, VAR_37, 0x00000000);
 FUNC_4(VAR_61, VAR_41, 0x00000000);
 FUNC_4(VAR_61, VAR_33, VAR_34);
 FUNC_37(VAR_61);
 FUNC_29(VAR_61);
 FUNC_38(VAR_61);
 FUNC_32(VAR_62);




 if (VAR_48 == 0) {




  FUNC_25(&VAR_49, "mvneta_mii", ((void*)0), VAR_32);
  VAR_48 = 1;
 }


 if ((VAR_61->phy_addr != VAR_31) && (!VAR_61->use_inband_status)) {
  VAR_66 = FUNC_24(VAR_60, &VAR_61->miibus, VAR_62, VAR_53,
      VAR_54, VAR_0, VAR_61->phy_addr,
      VAR_30, 0);
  if (VAR_66 != 0) {
   if (VAR_47) {
    FUNC_15(VAR_60,
        "MII attach failed, error: %d\n", VAR_66);
   }
   FUNC_17(VAR_61->ifp);
   FUNC_26(VAR_60);
   return (VAR_66);
  }
  VAR_61->mii = FUNC_13(VAR_61->miibus);
  VAR_61->phy_attached = 1;


  FUNC_40(VAR_61, VAR_6);
 } else if (VAR_61->use_inband_status == VAR_46) {

  FUNC_22(&VAR_61->mvneta_ifmedia, 0, VAR_53,
      VAR_54);


  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_17 | VAR_23,
      0, ((void*)0));
  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_18, 0, ((void*)0));
  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_18 | VAR_23,
      0, ((void*)0));
  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_19, 0, ((void*)0));
  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_19 | VAR_23,
      0, ((void*)0));
  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_21, 0, ((void*)0));
  FUNC_23(&VAR_61->mvneta_ifmedia, VAR_22 | VAR_21);


  FUNC_40(VAR_61, VAR_46);

  FUNC_37(VAR_61);
  if (FUNC_2(VAR_61))
   FUNC_34(VAR_61);
  else
   FUNC_33(VAR_61);
  FUNC_38(VAR_61);

 } else {

  FUNC_40(VAR_61, VAR_6);
  FUNC_22(&VAR_61->mvneta_ifmedia, 0, VAR_53,
      VAR_54);

  VAR_64 = VAR_22;
  switch (VAR_61->phy_speed) {
  case 2500:
   if (VAR_61->phy_mode != VAR_36 &&
       VAR_61->phy_mode != VAR_35) {
    FUNC_15(VAR_60,
        "2.5G speed can work only in (Q)SGMII mode\n");
    FUNC_17(VAR_61->ifp);
    FUNC_26(VAR_60);
    return (VAR_5);
   }
   VAR_64 |= VAR_20;
   break;
  case 1000:
   VAR_64 |= VAR_17;
   break;
  case 100:
   VAR_64 |= VAR_18;
   break;
  case 10:
   VAR_64 |= VAR_19;
   break;
  default:
   FUNC_17(VAR_61->ifp);
   FUNC_26(VAR_60);
   return (VAR_5);
  }

  if (VAR_61->phy_fdx)
   VAR_64 |= VAR_23;
  else
   VAR_64 |= VAR_24;

  FUNC_21(&VAR_61->mvneta_ifmedia, VAR_64, 0, ((void*)0));
  FUNC_23(&VAR_61->mvneta_ifmedia, VAR_64);
  FUNC_20(VAR_61->ifp, VAR_29);

  if (FUNC_31(VAR_60)) {
   if (VAR_47)
    FUNC_15(VAR_60, "This device is attached to a switch\n");
   VAR_63 = FUNC_11(VAR_61->dev, "mdio", -1);
   if (VAR_63 == ((void*)0)) {
    FUNC_17(VAR_61->ifp);
    FUNC_26(VAR_60);
    return (VAR_5);
   }
   FUNC_7(VAR_61->dev);
   FUNC_7(VAR_63);
  }


  FUNC_41(VAR_61, VAR_64);
 }

 FUNC_42(VAR_61);

 FUNC_10(&VAR_61->tick_ch, 0, VAR_57, VAR_61);

 VAR_66 = FUNC_8(VAR_60, VAR_61->res[1],
     VAR_27 | VAR_26, ((void*)0), VAR_51[0].handler, VAR_61,
     &VAR_61->ih_cookie[0]);
 if (VAR_66) {
  FUNC_15(VAR_60, "could not setup %s\n",
      VAR_51[0].description);
  FUNC_17(VAR_61->ifp);
  FUNC_26(VAR_60);
  return (VAR_66);
 }

 return (0);
}
