
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct nge_softc {int nge_if_flags; int nge_flags; int nge_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_mtu; int ifr_reqcap; } ;
struct ifnet {int if_mtu; int if_capenable; int if_flags; int if_drv_flags; int if_capabilities; int if_hwassist; struct nge_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct nge_softc*,int ,int) ;
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
 int FUNC_1 (struct nge_softc*,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct nge_softc*) ;
 int FUNC_3 (struct nge_softc*,int ,int ) ;
 int FUNC_4 (struct nge_softc*) ;
 int VAR_19 ;
 int VAR_20 ;







 int FUNC_5 (struct ifnet*) ;
 struct mii_data* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*,int,scalar_t__) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int ,struct ifnet*) ;
 int FUNC_10 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_11 (struct nge_softc*) ;
 int VAR_21 ;
 int FUNC_12 (struct nge_softc*) ;
 int FUNC_13 (struct nge_softc*) ;

__attribute__((used)) static int
FUNC_14(struct ifnet *VAR_22, u_long VAR_23, caddr_t VAR_24)
{
 struct nge_softc *VAR_25 = VAR_22->if_softc;
 struct ifreq *VAR_26 = (struct ifreq *) VAR_24;
 struct mii_data *VAR_27;
 int VAR_28 = 0, VAR_29;

 switch (VAR_23) {
 case 128:
  if (VAR_26->ifr_mtu < VAR_1 || VAR_26->ifr_mtu > VAR_18)
   VAR_28 = VAR_0;
  else {
   FUNC_2(VAR_25);
   VAR_22->if_mtu = VAR_26->ifr_mtu;





   if (VAR_26->ifr_mtu >= 8152) {
    VAR_22->if_capenable &= ~VAR_4;
    VAR_22->if_hwassist &= ~VAR_15;
   } else {
    VAR_22->if_capenable |= VAR_4;
    VAR_22->if_hwassist |= VAR_15;
   }
   FUNC_4(VAR_25);
   FUNC_5(VAR_22);
  }
  break;
 case 130:
  FUNC_2(VAR_25);
  if ((VAR_22->if_flags & VAR_14) != 0) {
   if ((VAR_22->if_drv_flags & VAR_12) != 0) {
    if ((VAR_22->if_flags ^ VAR_25->nge_if_flags) &
        (VAR_13 | VAR_11))
     FUNC_12(VAR_25);
   } else {
    if ((VAR_25->nge_flags & VAR_16) == 0)
     FUNC_11(VAR_25);
   }
  } else {
   if ((VAR_22->if_drv_flags & VAR_12) != 0)
    FUNC_13(VAR_25);
  }
  VAR_25->nge_if_flags = VAR_22->if_flags;
  FUNC_4(VAR_25);
  VAR_28 = 0;
  break;
 case 134:
 case 133:
  FUNC_2(VAR_25);
  if ((VAR_22->if_drv_flags & VAR_12) != 0)
   FUNC_12(VAR_25);
  FUNC_4(VAR_25);
  break;
 case 132:
 case 129:
  VAR_27 = FUNC_6(VAR_25->nge_miibus);
  VAR_28 = FUNC_10(VAR_22, VAR_26, &VAR_27->mii_media, VAR_23);
  break;
 case 131:
  FUNC_2(VAR_25);
  VAR_29 = VAR_26->ifr_reqcap ^ VAR_22->if_capenable;
  if ((VAR_29 & VAR_4) != 0 &&
      (VAR_4 & VAR_22->if_capabilities) != 0) {
   VAR_22->if_capenable ^= VAR_4;
   if ((VAR_4 & VAR_22->if_capenable) != 0)
    VAR_22->if_hwassist |= VAR_15;
   else
    VAR_22->if_hwassist &= ~VAR_15;
  }
  if ((VAR_29 & VAR_3) != 0 &&
      (VAR_3 & VAR_22->if_capabilities) != 0)
   VAR_22->if_capenable ^= VAR_3;

  if ((VAR_29 & VAR_7) != 0 &&
      (VAR_22->if_capabilities & VAR_7) != 0) {
   if ((VAR_29 & VAR_10) != 0)
    VAR_22->if_capenable ^= VAR_10;
   if ((VAR_29 & VAR_9) != 0)
    VAR_22->if_capenable ^= VAR_9;
   if ((VAR_29 & VAR_8) != 0)
    VAR_22->if_capenable ^= VAR_8;
  }

  if ((VAR_29 & VAR_5) != 0 &&
      (VAR_22->if_capabilities & VAR_5) != 0)
   VAR_22->if_capenable ^= VAR_5;
  if ((VAR_29 & VAR_6) != 0 &&
      (VAR_22->if_capabilities & VAR_6) != 0) {
   VAR_22->if_capenable ^= VAR_6;
   if ((VAR_22->if_drv_flags & VAR_12) != 0) {
    if ((VAR_22->if_capenable &
        VAR_6) != 0)
     FUNC_3(VAR_25,
         VAR_20,
         VAR_19);
    else
     FUNC_1(VAR_25,
         VAR_20,
         VAR_19);
   }
  }




  if ((VAR_22->if_capenable & VAR_4) == 0)
   VAR_22->if_capenable &= ~VAR_5;
  if ((VAR_22->if_capenable & VAR_6) == 0)
   VAR_22->if_capenable &= ~VAR_5;
  FUNC_4(VAR_25);
  FUNC_5(VAR_22);
  break;
 default:
  VAR_28 = FUNC_7(VAR_22, VAR_23, VAR_24);
  break;
 }

 return (VAR_28);
}
