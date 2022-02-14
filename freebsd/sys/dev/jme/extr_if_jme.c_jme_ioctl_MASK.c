
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct mii_data {int mii_media; } ;
struct jme_softc {int jme_flags; int jme_if_flags; int jme_miibus; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_capenable; int if_hwassist; int if_drv_flags; int if_flags; int if_capabilities; int if_mtu; struct jme_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int ) ;
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
 int FUNC_2 (struct jme_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct jme_softc*) ;
 int VAR_21 ;







 int FUNC_4 (struct ifnet*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct jme_softc*) ;
 int FUNC_9 (struct jme_softc*) ;
 int FUNC_10 (struct jme_softc*) ;
 int FUNC_11 (struct jme_softc*) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_22, u_long VAR_23, caddr_t VAR_24)
{
 struct jme_softc *VAR_25;
 struct ifreq *VAR_26;
 struct mii_data *VAR_27;
 uint32_t VAR_28;
 int VAR_29, VAR_30;

 VAR_25 = VAR_22->if_softc;
 VAR_26 = (struct ifreq *)VAR_24;
 VAR_29 = 0;
 switch (VAR_23) {
 case 128:
  if (VAR_26->ifr_mtu < VAR_2 || VAR_26->ifr_mtu > VAR_17 ||
      ((VAR_25->jme_flags & VAR_16) != 0 &&
      VAR_26->ifr_mtu > VAR_18)) {
   VAR_29 = VAR_1;
   break;
  }

  if (VAR_22->if_mtu != VAR_26->ifr_mtu) {






   FUNC_2(VAR_25);
   if (VAR_26->ifr_mtu >= VAR_20) {
    VAR_22->if_capenable &=
        ~(VAR_5 | VAR_4);
    VAR_22->if_hwassist &=
        ~(VAR_14 | VAR_0);
    FUNC_4(VAR_22);
   }
   VAR_22->if_mtu = VAR_26->ifr_mtu;
   if ((VAR_22->if_drv_flags & VAR_11) != 0) {
    VAR_22->if_drv_flags &= ~VAR_11;
    FUNC_8(VAR_25);
   }
   FUNC_3(VAR_25);
  }
  break;
 case 130:
  FUNC_2(VAR_25);
  if ((VAR_22->if_flags & VAR_13) != 0) {
   if ((VAR_22->if_drv_flags & VAR_11) != 0) {
    if (((VAR_22->if_flags ^ VAR_25->jme_if_flags)
        & (VAR_12 | VAR_10)) != 0)
     FUNC_9(VAR_25);
   } else {
    if ((VAR_25->jme_flags & VAR_15) == 0)
     FUNC_8(VAR_25);
   }
  } else {
   if ((VAR_22->if_drv_flags & VAR_11) != 0)
    FUNC_11(VAR_25);
  }
  VAR_25->jme_if_flags = VAR_22->if_flags;
  FUNC_3(VAR_25);
  break;
 case 134:
 case 133:
  FUNC_2(VAR_25);
  if ((VAR_22->if_drv_flags & VAR_11) != 0)
   FUNC_9(VAR_25);
  FUNC_3(VAR_25);
  break;
 case 129:
 case 132:
  VAR_27 = FUNC_5(VAR_25->jme_miibus);
  VAR_29 = FUNC_7(VAR_22, VAR_26, &VAR_27->mii_media, VAR_23);
  break;
 case 131:
  FUNC_2(VAR_25);
  VAR_30 = VAR_26->ifr_reqcap ^ VAR_22->if_capenable;
  if ((VAR_30 & VAR_5) != 0 &&
      VAR_22->if_mtu < VAR_20) {
   if ((VAR_5 & VAR_22->if_capabilities) != 0) {
    VAR_22->if_capenable ^= VAR_5;
    if ((VAR_5 & VAR_22->if_capenable) != 0)
     VAR_22->if_hwassist |= VAR_14;
    else
     VAR_22->if_hwassist &= ~VAR_14;
   }
  }
  if ((VAR_30 & VAR_3) != 0 &&
      (VAR_3 & VAR_22->if_capabilities) != 0) {
   VAR_22->if_capenable ^= VAR_3;
   VAR_28 = FUNC_0(VAR_25, VAR_19);
   VAR_28 &= ~VAR_21;
   if ((VAR_22->if_capenable & VAR_3) != 0)
    VAR_28 |= VAR_21;
   FUNC_1(VAR_25, VAR_19, VAR_28);
  }
  if ((VAR_30 & VAR_4) != 0 &&
      VAR_22->if_mtu < VAR_20) {
   if ((VAR_4 & VAR_22->if_capabilities) != 0) {
    VAR_22->if_capenable ^= VAR_4;
    if ((VAR_4 & VAR_22->if_capenable) != 0)
     VAR_22->if_hwassist |= VAR_0;
    else
     VAR_22->if_hwassist &= ~VAR_0;
   }
  }
  if ((VAR_30 & VAR_9) != 0 &&
      (VAR_9 & VAR_22->if_capabilities) != 0)
   VAR_22->if_capenable ^= VAR_9;
  if ((VAR_30 & VAR_6) != 0 &&
      (VAR_22->if_capabilities & VAR_6) != 0)
   VAR_22->if_capenable ^= VAR_6;
  if ((VAR_30 & VAR_8) != 0 &&
      (VAR_22->if_capabilities & VAR_8) != 0)
   VAR_22->if_capenable ^= VAR_8;
  if ((VAR_30 & VAR_7) != 0 &&
      (VAR_7 & VAR_22->if_capabilities) != 0) {
   VAR_22->if_capenable ^= VAR_7;
   FUNC_10(VAR_25);
  }
  FUNC_3(VAR_25);
  FUNC_4(VAR_22);
  break;
 default:
  VAR_29 = FUNC_6(VAR_22, VAR_23, VAR_24);
  break;
 }

 return (VAR_29);
}
