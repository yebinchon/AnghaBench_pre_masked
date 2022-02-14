
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct stge_softc {int sc_if_flags; int sc_IntEnable; int sc_miibus; int sc_detach; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct stge_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct stge_softc*,int ,int ) ;
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
 int FUNC_1 (struct stge_softc*) ;
 int FUNC_2 (struct stge_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 struct mii_data* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ,struct ifnet*) ;
 int FUNC_8 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_9 (struct stge_softc*) ;
 int VAR_13 ;
 int FUNC_10 (struct stge_softc*) ;
 int FUNC_11 (struct stge_softc*) ;
 int FUNC_12 (struct stge_softc*) ;
 int FUNC_13 (struct stge_softc*) ;

__attribute__((used)) static int
FUNC_14(struct ifnet *VAR_14, u_long VAR_15, caddr_t VAR_16)
{
 struct stge_softc *VAR_17;
 struct ifreq *VAR_18;
 struct mii_data *VAR_19;
 int VAR_20, VAR_21;

 VAR_17 = VAR_14->if_softc;
 VAR_18 = (struct ifreq *)VAR_16;
 VAR_20 = 0;
 switch (VAR_15) {
 case 128:
  if (VAR_18->ifr_mtu < VAR_1 || VAR_18->ifr_mtu > VAR_12)
   VAR_20 = VAR_0;
  else if (VAR_14->if_mtu != VAR_18->ifr_mtu) {
   VAR_14->if_mtu = VAR_18->ifr_mtu;
   FUNC_1(VAR_17);
   if ((VAR_14->if_drv_flags & VAR_7) != 0) {
    VAR_14->if_drv_flags &= ~VAR_7;
    FUNC_9(VAR_17);
   }
   FUNC_2(VAR_17);
  }
  break;
 case 130:
  FUNC_1(VAR_17);
  if ((VAR_14->if_flags & VAR_9) != 0) {
   if ((VAR_14->if_drv_flags & VAR_7) != 0) {
    if (((VAR_14->if_flags ^ VAR_17->sc_if_flags)
        & VAR_8) != 0)
     FUNC_10(VAR_17);
   } else {
    if (VAR_17->sc_detach == 0)
     FUNC_9(VAR_17);
   }
  } else {
   if ((VAR_14->if_drv_flags & VAR_7) != 0)
    FUNC_12(VAR_17);
  }
  VAR_17->sc_if_flags = VAR_14->if_flags;
  FUNC_2(VAR_17);
  break;
 case 134:
 case 133:
  FUNC_1(VAR_17);
  if ((VAR_14->if_drv_flags & VAR_7) != 0)
   FUNC_11(VAR_17);
  FUNC_2(VAR_17);
  break;
 case 129:
 case 132:
  VAR_19 = FUNC_4(VAR_17->sc_miibus);
  VAR_20 = FUNC_8(VAR_14, VAR_18, &VAR_19->mii_media, VAR_15);
  break;
 case 131:
  VAR_21 = VAR_18->ifr_reqcap ^ VAR_14->if_capenable;
  if ((VAR_21 & VAR_2) != 0) {
   VAR_14->if_capenable ^= VAR_2;
   if ((VAR_2 & VAR_14->if_capenable) != 0 &&
       (VAR_2 & VAR_14->if_capabilities) != 0)
    VAR_14->if_hwassist = VAR_10;
   else
    VAR_14->if_hwassist = 0;
  }
  if ((VAR_21 & VAR_5) != 0 &&
      (VAR_14->if_capabilities & VAR_5) != 0) {
   if ((VAR_21 & VAR_6) != 0)
    VAR_14->if_capenable ^= VAR_6;
  }
  if ((VAR_21 & VAR_4) != 0) {
   VAR_14->if_capenable ^= VAR_4;
   if ((VAR_14->if_drv_flags & VAR_7) != 0) {
    FUNC_1(VAR_17);
    FUNC_13(VAR_17);
    FUNC_2(VAR_17);
   }
  }
  FUNC_3(VAR_14);
  break;
 default:
  VAR_20 = FUNC_5(VAR_14, VAR_15, VAR_16);
  break;
 }

 return (VAR_20);
}
