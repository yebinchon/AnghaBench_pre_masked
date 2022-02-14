
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct age_softc* if_softc; } ;
struct age_softc {int age_if_flags; int age_flags; int age_miibus; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct age_softc*) ;
 int VAR_3 ;
 int FUNC_1 (struct age_softc*) ;
 int FUNC_2 (struct age_softc*,int ) ;
 int FUNC_3 (struct age_softc*,int ,int ) ;
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
 int VAR_19 ;







 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct age_softc*) ;
 int FUNC_6 (struct age_softc*) ;
 int FUNC_7 (struct age_softc*) ;
 int FUNC_8 (struct age_softc*) ;
 struct mii_data* FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*,int,scalar_t__) ;
 int FUNC_11 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_20, u_long VAR_21, caddr_t VAR_22)
{
 struct age_softc *VAR_23;
 struct ifreq *VAR_24;
 struct mii_data *VAR_25;
 uint32_t VAR_26;
 int VAR_27, VAR_28;

 VAR_23 = VAR_20->if_softc;
 VAR_24 = (struct ifreq *)VAR_22;
 VAR_27 = 0;
 switch (VAR_21) {
 case 128:
  if (VAR_24->ifr_mtu < VAR_6 || VAR_24->ifr_mtu > VAR_2)
   VAR_27 = VAR_5;
  else if (VAR_20->if_mtu != VAR_24->ifr_mtu) {
   FUNC_0(VAR_23);
   VAR_20->if_mtu = VAR_24->ifr_mtu;
   if ((VAR_20->if_drv_flags & VAR_16) != 0) {
    VAR_20->if_drv_flags &= ~VAR_16;
    FUNC_5(VAR_23);
   }
   FUNC_1(VAR_23);
  }
  break;
 case 130:
  FUNC_0(VAR_23);
  if ((VAR_20->if_flags & VAR_18) != 0) {
   if ((VAR_20->if_drv_flags & VAR_16) != 0) {
    if (((VAR_20->if_flags ^ VAR_23->age_if_flags)
        & (VAR_17 | VAR_15)) != 0)
     FUNC_6(VAR_23);
   } else {
    if ((VAR_23->age_flags & VAR_1) == 0)
     FUNC_5(VAR_23);
   }
  } else {
   if ((VAR_20->if_drv_flags & VAR_16) != 0)
    FUNC_8(VAR_23);
  }
  VAR_23->age_if_flags = VAR_20->if_flags;
  FUNC_1(VAR_23);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_23);
  if ((VAR_20->if_drv_flags & VAR_16) != 0)
   FUNC_6(VAR_23);
  FUNC_1(VAR_23);
  break;
 case 129:
 case 132:
  VAR_25 = FUNC_9(VAR_23->age_miibus);
  VAR_27 = FUNC_11(VAR_20, VAR_24, &VAR_25->mii_media, VAR_21);
  break;
 case 131:
  FUNC_0(VAR_23);
  VAR_28 = VAR_24->ifr_reqcap ^ VAR_20->if_capenable;
  if ((VAR_28 & VAR_9) != 0 &&
      (VAR_20->if_capabilities & VAR_9) != 0) {
   VAR_20->if_capenable ^= VAR_9;
   if ((VAR_20->if_capenable & VAR_9) != 0)
    VAR_20->if_hwassist |= VAR_0;
   else
    VAR_20->if_hwassist &= ~VAR_0;
  }
  if ((VAR_28 & VAR_7) != 0 &&
      (VAR_20->if_capabilities & VAR_7) != 0) {
   VAR_20->if_capenable ^= VAR_7;
   VAR_26 = FUNC_2(VAR_23, VAR_3);
   VAR_26 &= ~VAR_19;
   if ((VAR_20->if_capenable & VAR_7) != 0)
    VAR_26 |= VAR_19;
   FUNC_3(VAR_23, VAR_3, VAR_26);
  }
  if ((VAR_28 & VAR_8) != 0 &&
      (VAR_20->if_capabilities & VAR_8) != 0) {
   VAR_20->if_capenable ^= VAR_8;
   if ((VAR_20->if_capenable & VAR_8) != 0)
    VAR_20->if_hwassist |= VAR_4;
   else
    VAR_20->if_hwassist &= ~VAR_4;
  }

  if ((VAR_28 & VAR_14) != 0 &&
      (VAR_20->if_capabilities & VAR_14) != 0)
   VAR_20->if_capenable ^= VAR_14;
  if ((VAR_28 & VAR_13) != 0 &&
      (VAR_20->if_capabilities & VAR_13) != 0)
   VAR_20->if_capenable ^= VAR_13;
  if ((VAR_28 & VAR_10) != 0 &&
      (VAR_20->if_capabilities & VAR_10) != 0)
   VAR_20->if_capenable ^= VAR_10;
  if ((VAR_28 & VAR_12) != 0 &&
      (VAR_20->if_capabilities & VAR_12) != 0)
   VAR_20->if_capenable ^= VAR_12;
  if ((VAR_28 & VAR_11) != 0 &&
      (VAR_20->if_capabilities & VAR_11) != 0) {
   VAR_20->if_capenable ^= VAR_11;
   if ((VAR_20->if_capenable & VAR_11) == 0)
    VAR_20->if_capenable &= ~VAR_12;
   FUNC_7(VAR_23);
  }
  FUNC_1(VAR_23);
  FUNC_4(VAR_20);
  break;
 default:
  VAR_27 = FUNC_10(VAR_20, VAR_21, VAR_22);
  break;
 }

 return (VAR_27);
}
