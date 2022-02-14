
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u32 ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; scalar_t__ ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capenable; int if_capabilities; int if_hwassist; scalar_t__ if_mtu; struct bce_softc* if_softc; } ;
struct bce_softc {int bce_flags; int bce_phy_flags; int bce_miibus; int bce_ifmedia; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bce_softc*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bce_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bce_softc*,int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;







 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct bce_softc*) ;
 int FUNC_7 (struct bce_softc*) ;
 int FUNC_8 (struct bce_softc*) ;
 int FUNC_9 (struct bce_softc*,int ) ;
 int FUNC_10 (struct bce_softc*) ;
 int FUNC_11 (struct bce_softc*) ;
 int VAR_19 ;
 struct mii_data* FUNC_12 (int ) ;
 int FUNC_13 (struct ifnet*,int,scalar_t__) ;
 int FUNC_14 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_15(struct ifnet *VAR_20, u_long VAR_21, caddr_t VAR_22)
{
 struct bce_softc *VAR_23 = VAR_20->if_softc;
 struct ifreq *VAR_24 = (struct ifreq *) VAR_22;
 struct mii_data *VAR_25;
 int VAR_26, VAR_27 = 0;

 FUNC_2(VAR_7);

 switch(VAR_21) {


 case 128:

  if ((VAR_24->ifr_mtu < VAR_5) ||
   (VAR_24->ifr_mtu > VAR_3)) {
   VAR_27 = VAR_10;
   break;
  }

  FUNC_4(VAR_23, VAR_2,
      "SIOCSIFMTU: Changing MTU from %d to %d\n",
      (int) VAR_20->if_mtu, (int) VAR_24->ifr_mtu);

  FUNC_0(VAR_23);
  VAR_20->if_mtu = VAR_24->ifr_mtu;
  if (VAR_20->if_drv_flags & VAR_17) {
   VAR_20->if_drv_flags &= ~VAR_17;
   FUNC_7(VAR_23);
  }
  FUNC_1(VAR_23);
  break;


 case 130:
  FUNC_4(VAR_23, VAR_8, "Received SIOCSIFFLAGS\n");

  FUNC_0(VAR_23);


  if (VAR_20->if_flags & VAR_18) {
   if (VAR_20->if_drv_flags & VAR_17) {

    FUNC_10(VAR_23);
   } else {

    FUNC_7(VAR_23);
   }
  } else {

   if (VAR_20->if_drv_flags & VAR_17) {
    FUNC_11(VAR_23);


    if (VAR_23->bce_flags & VAR_4) {
     FUNC_9(VAR_23, VAR_0);
     FUNC_6(VAR_23);
     FUNC_8(VAR_23);
    }
   }
  }

  FUNC_1(VAR_23);
  break;


 case 134:
 case 133:
  FUNC_4(VAR_23, VAR_7,
      "Received SIOCADDMULTI/SIOCDELMULTI\n");

  FUNC_0(VAR_23);
  if (VAR_20->if_drv_flags & VAR_17)
   FUNC_10(VAR_23);
  FUNC_1(VAR_23);

  break;


 case 129:
 case 132:
  FUNC_4(VAR_23, VAR_7,
      "Received SIOCSIFMEDIA/SIOCGIFMEDIA\n");
  if ((VAR_23->bce_phy_flags & VAR_6) != 0)
   VAR_27 = FUNC_14(VAR_20, VAR_24, &VAR_23->bce_ifmedia,
       VAR_21);
  else {
   VAR_25 = FUNC_12(VAR_23->bce_miibus);
   VAR_27 = FUNC_14(VAR_20, VAR_24, &VAR_25->mii_media,
       VAR_21);
  }
  break;


 case 131:
  VAR_26 = VAR_24->ifr_reqcap ^ VAR_20->if_capenable;
  FUNC_4(VAR_23, VAR_2,
      "Received SIOCSIFCAP = 0x%08X\n", (u32) VAR_26);


  if (VAR_26 & VAR_13 &&
      VAR_20->if_capabilities & VAR_13) {
   VAR_20->if_capenable ^= VAR_13;
   if (VAR_13 & VAR_20->if_capenable)
    VAR_20->if_hwassist |= VAR_1;
   else
    VAR_20->if_hwassist &= ~VAR_1;
  }


  if (VAR_26 & VAR_11 &&
      VAR_20->if_capabilities & VAR_11)
   VAR_20->if_capenable ^= VAR_11;


  if (VAR_19 && (VAR_26 & VAR_12) &&
      VAR_20->if_capabilities & VAR_12) {
   VAR_20->if_capenable ^= VAR_12;
   if (VAR_12 & VAR_20->if_capenable)
    VAR_20->if_hwassist |= VAR_9;
   else
    VAR_20->if_hwassist &= ~VAR_9;
  }

  if (VAR_26 & VAR_14 &&
      VAR_20->if_capabilities & VAR_14)
   VAR_20->if_capenable ^= VAR_14;

  if ((VAR_26 & VAR_16) != 0 &&
      (VAR_20->if_capabilities & VAR_16) != 0)
   VAR_20->if_capenable ^= VAR_16;







  if ((VAR_26 & VAR_15) != 0 &&
      (VAR_20->if_capabilities & VAR_15)) {
   VAR_20->if_capenable ^= VAR_15;
   if ((VAR_20->if_capenable & VAR_15)
       == 0)
    VAR_20->if_capenable &= ~VAR_16;
  }
  FUNC_5(VAR_20);
  break;
 default:

  VAR_27 = FUNC_13(VAR_20, VAR_21, VAR_22);
  break;
 }

 FUNC_3(VAR_7);
 return(VAR_27);
}
