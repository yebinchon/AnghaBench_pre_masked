
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct et_softc* if_softc; } ;
struct et_softc {int sc_if_flags; int sc_flags; int sc_miibus; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct et_softc*) ;
 int FUNC_2 (struct et_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;







 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct et_softc*) ;
 int FUNC_5 (struct et_softc*) ;
 int FUNC_6 (struct et_softc*) ;
 int FUNC_7 (struct ifnet*,int,scalar_t__) ;
 int FUNC_8 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_11, u_long VAR_12, caddr_t VAR_13)
{
 struct et_softc *VAR_14;
 struct mii_data *VAR_15;
 struct ifreq *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_14 = VAR_11->if_softc;
 VAR_16 = (struct ifreq *)VAR_13;
 VAR_17 = 0;


 switch (VAR_12) {
 case 130:
  FUNC_1(VAR_14);
  if (VAR_11->if_flags & VAR_9) {
   if (VAR_11->if_drv_flags & VAR_7) {
    if ((VAR_11->if_flags ^ VAR_14->sc_if_flags) &
    (VAR_5 | VAR_8 | VAR_6))
     FUNC_5(VAR_14);
   } else {
    FUNC_4(VAR_14);
   }
  } else {
   if (VAR_11->if_drv_flags & VAR_7)
    FUNC_6(VAR_14);
  }
  VAR_14->sc_if_flags = VAR_11->if_flags;
  FUNC_2(VAR_14);
  break;

 case 129:
 case 132:
  VAR_15 = FUNC_3(VAR_14->sc_miibus);
  VAR_17 = FUNC_8(VAR_11, VAR_16, &VAR_15->mii_media, VAR_12);
  break;

 case 134:
 case 133:
  if (VAR_11->if_drv_flags & VAR_7) {
   FUNC_1(VAR_14);
   FUNC_5(VAR_14);
   FUNC_2(VAR_14);
  }
  break;

 case 128:
  FUNC_1(VAR_14);





   VAR_19 = VAR_10 - 1;

  if (FUNC_0(VAR_16->ifr_mtu) > VAR_19) {
   VAR_17 = VAR_0;
   FUNC_2(VAR_14);
   break;
  }

  if (VAR_11->if_mtu != VAR_16->ifr_mtu) {
   VAR_11->if_mtu = VAR_16->ifr_mtu;
   if (VAR_11->if_drv_flags & VAR_7) {
    VAR_11->if_drv_flags &= ~VAR_7;
    FUNC_4(VAR_14);
   }
  }
  FUNC_2(VAR_14);
  break;

 case 131:
  FUNC_1(VAR_14);
  VAR_18 = VAR_16->ifr_reqcap ^ VAR_11->if_capenable;
  if ((VAR_18 & VAR_4) != 0 &&
      (VAR_4 & VAR_11->if_capabilities) != 0) {
   VAR_11->if_capenable ^= VAR_4;
   if ((VAR_4 & VAR_11->if_capenable) != 0)
    VAR_11->if_hwassist |= VAR_1;
   else
    VAR_11->if_hwassist &= ~VAR_1;
  }
  FUNC_2(VAR_14);
  break;

 default:
  VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_13);
  break;
 }
 return (VAR_17);
}
