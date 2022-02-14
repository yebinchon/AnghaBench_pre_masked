
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct msk_if_softc {int msk_flags; int msk_if_flags; int msk_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_hwassist; int if_capenable; int if_drv_flags; int if_flags; int if_capabilities; int if_mtu; struct msk_if_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


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
 int VAR_18 ;
 int FUNC_0 (struct msk_if_softc*) ;
 int FUNC_1 (struct msk_if_softc*) ;
 int VAR_19 ;







 int FUNC_2 (struct ifnet*) ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_6 (struct msk_if_softc*) ;
 int FUNC_7 (struct msk_if_softc*) ;
 int FUNC_8 (struct msk_if_softc*,struct ifnet*) ;
 int FUNC_9 (struct msk_if_softc*) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_20, u_long VAR_21, caddr_t VAR_22)
{
 struct msk_if_softc *VAR_23;
 struct ifreq *VAR_24;
 struct mii_data *VAR_25;
 int VAR_26, VAR_27, VAR_28;

 VAR_23 = VAR_20->if_softc;
 VAR_24 = (struct ifreq *)VAR_22;
 VAR_26 = 0;

 switch(VAR_21) {
 case 128:
  FUNC_0(VAR_23);
  if (VAR_24->ifr_mtu > VAR_19 || VAR_24->ifr_mtu < VAR_2)
   VAR_26 = VAR_1;
  else if (VAR_20->if_mtu != VAR_24->ifr_mtu) {
   if (VAR_24->ifr_mtu > VAR_3) {
    if ((VAR_23->msk_flags & VAR_17) == 0) {
     VAR_26 = VAR_1;
     FUNC_1(VAR_23);
     break;
    }
    if ((VAR_23->msk_flags &
        VAR_18) != 0) {
     VAR_20->if_hwassist &=
         ~(VAR_14 | VAR_0);
     VAR_20->if_capenable &=
         ~(VAR_5 | VAR_6);
     FUNC_2(VAR_20);
    }
   }
   VAR_20->if_mtu = VAR_24->ifr_mtu;
   if ((VAR_20->if_drv_flags & VAR_11) != 0) {
    VAR_20->if_drv_flags &= ~VAR_11;
    FUNC_6(VAR_23);
   }
  }
  FUNC_1(VAR_23);
  break;
 case 130:
  FUNC_0(VAR_23);
  if ((VAR_20->if_flags & VAR_13) != 0) {
   if ((VAR_20->if_drv_flags & VAR_11) != 0 &&
       ((VAR_20->if_flags ^ VAR_23->msk_if_flags) &
       (VAR_12 | VAR_10)) != 0)
    FUNC_7(VAR_23);
   else if ((VAR_23->msk_flags & VAR_16) == 0)
    FUNC_6(VAR_23);
  } else if ((VAR_20->if_drv_flags & VAR_11) != 0)
   FUNC_9(VAR_23);
  VAR_23->msk_if_flags = VAR_20->if_flags;
  FUNC_1(VAR_23);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_23);
  if ((VAR_20->if_drv_flags & VAR_11) != 0)
   FUNC_7(VAR_23);
  FUNC_1(VAR_23);
  break;
 case 132:
 case 129:
  VAR_25 = FUNC_3(VAR_23->msk_miibus);
  VAR_26 = FUNC_5(VAR_20, VAR_24, &VAR_25->mii_media, VAR_21);
  break;
 case 131:
  VAR_28 = 0;
  FUNC_0(VAR_23);
  VAR_27 = VAR_24->ifr_reqcap ^ VAR_20->if_capenable;
  if ((VAR_27 & VAR_6) != 0 &&
      (VAR_6 & VAR_20->if_capabilities) != 0) {
   VAR_20->if_capenable ^= VAR_6;
   if ((VAR_6 & VAR_20->if_capenable) != 0)
    VAR_20->if_hwassist |= VAR_14;
   else
    VAR_20->if_hwassist &= ~VAR_14;
  }
  if ((VAR_27 & VAR_4) != 0 &&
      (VAR_4 & VAR_20->if_capabilities) != 0) {
   VAR_20->if_capenable ^= VAR_4;
   if ((VAR_23->msk_flags & VAR_15) == 0)
    VAR_28 = 1;
  }
  if ((VAR_27 & VAR_7) != 0 &&
      (VAR_7 & VAR_20->if_capabilities) != 0)
   VAR_20->if_capenable ^= VAR_7;
  if ((VAR_27 & VAR_5) != 0 &&
      (VAR_5 & VAR_20->if_capabilities) != 0) {
   VAR_20->if_capenable ^= VAR_5;
   if ((VAR_5 & VAR_20->if_capenable) != 0)
    VAR_20->if_hwassist |= VAR_0;
   else
    VAR_20->if_hwassist &= ~VAR_0;
  }
  if ((VAR_27 & VAR_9) != 0 &&
      (VAR_9 & VAR_20->if_capabilities) != 0)
   VAR_20->if_capenable ^= VAR_9;
  if ((VAR_27 & VAR_8) != 0 &&
      (VAR_8 & VAR_20->if_capabilities) != 0) {
   VAR_20->if_capenable ^= VAR_8;
   if ((VAR_8 & VAR_20->if_capenable) == 0)
    VAR_20->if_capenable &=
        ~(VAR_9 | VAR_7);
   FUNC_8(VAR_23, VAR_20);
  }
  if (VAR_20->if_mtu > VAR_3 &&
      (VAR_23->msk_flags & VAR_18) != 0) {
   VAR_20->if_hwassist &= ~(VAR_14 | VAR_0);
   VAR_20->if_capenable &= ~(VAR_5 | VAR_6);
  }
  FUNC_2(VAR_20);
  if (VAR_28 > 0 && (VAR_20->if_drv_flags & VAR_11) != 0) {
   VAR_20->if_drv_flags &= ~VAR_11;
   FUNC_6(VAR_23);
  }
  FUNC_1(VAR_23);
  break;
 default:
  VAR_26 = FUNC_4(VAR_20, VAR_21, VAR_22);
  break;
 }

 return (VAR_26);
}
