
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct ale_softc* if_softc; } ;
struct ale_softc {int ale_flags; int ale_if_flags; int ale_miibus; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ale_softc*) ;
 int FUNC_1 (struct ale_softc*) ;
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







 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ale_softc*) ;
 int FUNC_4 (struct ale_softc*) ;
 int FUNC_5 (struct ale_softc*) ;
 int FUNC_6 (struct ale_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int FUNC_8 (struct ifnet*,int,scalar_t__) ;
 int FUNC_9 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_19, u_long VAR_20, caddr_t VAR_21)
{
 struct ale_softc *VAR_22;
 struct ifreq *VAR_23;
 struct mii_data *VAR_24;
 int VAR_25, VAR_26;

 VAR_22 = VAR_19->if_softc;
 VAR_23 = (struct ifreq *)VAR_21;
 VAR_25 = 0;
 switch (VAR_20) {
 case 128:
  if (VAR_23->ifr_mtu < VAR_5 || VAR_23->ifr_mtu > VAR_2 ||
      ((VAR_22->ale_flags & VAR_1) == 0 &&
      VAR_23->ifr_mtu > VAR_6))
   VAR_25 = VAR_4;
  else if (VAR_19->if_mtu != VAR_23->ifr_mtu) {
   FUNC_0(VAR_22);
   VAR_19->if_mtu = VAR_23->ifr_mtu;
   if ((VAR_19->if_drv_flags & VAR_16) != 0) {
    VAR_19->if_drv_flags &= ~VAR_16;
    FUNC_3(VAR_22);
   }
   FUNC_1(VAR_22);
  }
  break;
 case 130:
  FUNC_0(VAR_22);
  if ((VAR_19->if_flags & VAR_18) != 0) {
   if ((VAR_19->if_drv_flags & VAR_16) != 0) {
    if (((VAR_19->if_flags ^ VAR_22->ale_if_flags)
        & (VAR_17 | VAR_15)) != 0)
     FUNC_4(VAR_22);
   } else {
    FUNC_3(VAR_22);
   }
  } else {
   if ((VAR_19->if_drv_flags & VAR_16) != 0)
    FUNC_6(VAR_22);
  }
  VAR_22->ale_if_flags = VAR_19->if_flags;
  FUNC_1(VAR_22);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_22);
  if ((VAR_19->if_drv_flags & VAR_16) != 0)
   FUNC_4(VAR_22);
  FUNC_1(VAR_22);
  break;
 case 129:
 case 132:
  VAR_24 = FUNC_7(VAR_22->ale_miibus);
  VAR_25 = FUNC_9(VAR_19, VAR_23, &VAR_24->mii_media, VAR_20);
  break;
 case 131:
  FUNC_0(VAR_22);
  VAR_26 = VAR_23->ifr_reqcap ^ VAR_19->if_capenable;
  if ((VAR_26 & VAR_9) != 0 &&
      (VAR_19->if_capabilities & VAR_9) != 0) {
   VAR_19->if_capenable ^= VAR_9;
   if ((VAR_19->if_capenable & VAR_9) != 0)
    VAR_19->if_hwassist |= VAR_0;
   else
    VAR_19->if_hwassist &= ~VAR_0;
  }
  if ((VAR_26 & VAR_7) != 0 &&
      (VAR_19->if_capabilities & VAR_7) != 0)
   VAR_19->if_capenable ^= VAR_7;
  if ((VAR_26 & VAR_8) != 0 &&
      (VAR_19->if_capabilities & VAR_8) != 0) {
   VAR_19->if_capenable ^= VAR_8;
   if ((VAR_19->if_capenable & VAR_8) != 0)
    VAR_19->if_hwassist |= VAR_3;
   else
    VAR_19->if_hwassist &= ~VAR_3;
  }

  if ((VAR_26 & VAR_14) != 0 &&
      (VAR_19->if_capabilities & VAR_14) != 0)
   VAR_19->if_capenable ^= VAR_14;
  if ((VAR_26 & VAR_13) != 0 &&
      (VAR_19->if_capabilities & VAR_13) != 0)
   VAR_19->if_capenable ^= VAR_13;
  if ((VAR_26 & VAR_10) != 0 &&
      (VAR_19->if_capabilities & VAR_10) != 0)
   VAR_19->if_capenable ^= VAR_10;
  if ((VAR_26 & VAR_12) != 0 &&
      (VAR_19->if_capabilities & VAR_12) != 0)
   VAR_19->if_capenable ^= VAR_12;
  if ((VAR_26 & VAR_11) != 0 &&
      (VAR_19->if_capabilities & VAR_11) != 0) {
   VAR_19->if_capenable ^= VAR_11;
   if ((VAR_19->if_capenable & VAR_11) == 0)
    VAR_19->if_capenable &= ~VAR_12;
   FUNC_5(VAR_22);
  }
  FUNC_1(VAR_22);
  FUNC_2(VAR_19);
  break;
 default:
  VAR_25 = FUNC_8(VAR_19, VAR_20, VAR_21);
  break;
 }

 return (VAR_25);
}
