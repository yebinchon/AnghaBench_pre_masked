
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct rl_softc {int rl_flags; int rl_if_flags; int rl_miibus; TYPE_1__* rl_hwrev; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_flags; int if_capabilities; int if_hwassist; int if_mtu; struct rl_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int rl_max_mtu; } ;


 int FUNC_0 (struct rl_softc*,int ,int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct rl_softc*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct rl_softc*) ;







 int FUNC_3 (struct ifnet*) ;
 struct mii_data* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ,struct ifnet*) ;
 int FUNC_8 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_9 (struct rl_softc*) ;
 int VAR_25 ;
 int FUNC_10 (struct rl_softc*) ;
 int FUNC_11 (struct rl_softc*) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_26, u_long VAR_27, caddr_t VAR_28)
{
 struct rl_softc *VAR_29 = VAR_26->if_softc;
 struct ifreq *VAR_30 = (struct ifreq *) VAR_28;
 struct mii_data *VAR_31;
 int VAR_32 = 0;

 switch (VAR_27) {
 case 128:
  if (VAR_30->ifr_mtu < VAR_2 ||
      VAR_30->ifr_mtu > VAR_29->rl_hwrev->rl_max_mtu ||
      ((VAR_29->rl_flags & VAR_19) != 0 &&
      VAR_30->ifr_mtu > VAR_23)) {
   VAR_32 = VAR_1;
   break;
  }
  FUNC_1(VAR_29);
  if (VAR_26->if_mtu != VAR_30->ifr_mtu) {
   VAR_26->if_mtu = VAR_30->ifr_mtu;
   if ((VAR_29->rl_flags & VAR_20) != 0 &&
       (VAR_26->if_drv_flags & VAR_15) != 0) {
    VAR_26->if_drv_flags &= ~VAR_15;
    FUNC_9(VAR_29);
   }
   if (VAR_26->if_mtu > VAR_24 &&
       (VAR_26->if_capenable & VAR_6) != 0) {
    VAR_26->if_capenable &= ~(VAR_6 |
        VAR_9);
    VAR_26->if_hwassist &= ~VAR_0;
   }
   FUNC_3(VAR_26);
  }
  FUNC_2(VAR_29);
  break;
 case 130:
  FUNC_1(VAR_29);
  if ((VAR_26->if_flags & VAR_17) != 0) {
   if ((VAR_26->if_drv_flags & VAR_15) != 0) {
    if (((VAR_26->if_flags ^ VAR_29->rl_if_flags)
        & (VAR_16 | VAR_14)) != 0)
     FUNC_10(VAR_29);
   } else
    FUNC_9(VAR_29);
  } else {
   if ((VAR_26->if_drv_flags & VAR_15) != 0)
    FUNC_11(VAR_29);
  }
  VAR_29->rl_if_flags = VAR_26->if_flags;
  FUNC_2(VAR_29);
  break;
 case 134:
 case 133:
  FUNC_1(VAR_29);
  if ((VAR_26->if_drv_flags & VAR_15) != 0)
   FUNC_10(VAR_29);
  FUNC_2(VAR_29);
  break;
 case 132:
 case 129:
  VAR_31 = FUNC_4(VAR_29->rl_miibus);
  VAR_32 = FUNC_8(VAR_26, VAR_30, &VAR_31->mii_media, VAR_27);
  break;
 case 131:
     {
  int VAR_33, VAR_34;

  VAR_33 = VAR_30->ifr_reqcap ^ VAR_26->if_capenable;
  VAR_34 = 0;
  FUNC_1(VAR_29);
  if ((VAR_33 & VAR_7) != 0 &&
      (VAR_26->if_capabilities & VAR_7) != 0) {
   VAR_26->if_capenable ^= VAR_7;
   if ((VAR_26->if_capenable & VAR_7) != 0)
    VAR_26->if_hwassist |= VAR_18;
   else
    VAR_26->if_hwassist &= ~VAR_18;
   VAR_34 = 1;
  }
  if ((VAR_33 & VAR_5) != 0 &&
      (VAR_26->if_capabilities & VAR_5) != 0) {
   VAR_26->if_capenable ^= VAR_5;
   VAR_34 = 1;
  }
  if ((VAR_33 & VAR_6) != 0 &&
      (VAR_26->if_capabilities & VAR_6) != 0) {
   VAR_26->if_capenable ^= VAR_6;
   if ((VAR_6 & VAR_26->if_capenable) != 0)
    VAR_26->if_hwassist |= VAR_0;
   else
    VAR_26->if_hwassist &= ~VAR_0;
   if (VAR_26->if_mtu > VAR_24 &&
       (VAR_26->if_capenable & VAR_6) != 0) {
    VAR_26->if_capenable &= ~VAR_6;
    VAR_26->if_hwassist &= ~VAR_0;
   }
  }
  if ((VAR_33 & VAR_9) != 0 &&
      (VAR_26->if_capabilities & VAR_9) != 0)
   VAR_26->if_capenable ^= VAR_9;
  if ((VAR_33 & VAR_8) != 0 &&
      (VAR_26->if_capabilities & VAR_8) != 0) {
   VAR_26->if_capenable ^= VAR_8;

   if ((VAR_26->if_capenable & VAR_8) == 0)
    VAR_26->if_capenable &= ~VAR_9;
   VAR_34 = 1;
  }
  if ((VAR_29->rl_flags & VAR_20) != 0 &&
      (VAR_33 & (VAR_3 | VAR_6 |
      VAR_9)) != 0)
    VAR_34 = 1;
  if ((VAR_33 & VAR_10) != 0 &&
      (VAR_26->if_capabilities & VAR_10) != 0) {
   if ((VAR_33 & VAR_13) != 0)
    VAR_26->if_capenable ^= VAR_13;
   if ((VAR_33 & VAR_12) != 0)
    VAR_26->if_capenable ^= VAR_12;
   if ((VAR_33 & VAR_11) != 0)
    VAR_26->if_capenable ^= VAR_11;
  }
  if (VAR_34 && VAR_26->if_drv_flags & VAR_15) {
   VAR_26->if_drv_flags &= ~VAR_15;
   FUNC_9(VAR_29);
  }
  FUNC_2(VAR_29);
  FUNC_3(VAR_26);
     }
  break;
 default:
  VAR_32 = FUNC_5(VAR_26, VAR_27, VAR_28);
  break;
 }

 return (VAR_32);
}
