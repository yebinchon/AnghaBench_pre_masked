
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_mtu; int if_hwassist; struct cas_softc* if_softc; } ;
struct cas_softc {int sc_ifflags; int sc_flags; TYPE_1__* sc_mii; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int mii_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct cas_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct cas_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;







 int FUNC_2 (struct cas_softc*) ;
 int FUNC_3 (struct cas_softc*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_10, u_long VAR_11, caddr_t VAR_12)
{
 struct cas_softc *VAR_13 = VAR_10->if_softc;
 struct ifreq *VAR_14 = (struct ifreq *)VAR_12;
 int VAR_15;

 VAR_15 = 0;
 switch (VAR_11) {
 case 130:
  FUNC_0(VAR_13);
  if ((VAR_10->if_flags & VAR_9) != 0) {
   if ((VAR_10->if_drv_flags & VAR_7) != 0 &&
       ((VAR_10->if_flags ^ VAR_13->sc_ifflags) &
       (VAR_6 | VAR_8)) != 0)
    FUNC_3(VAR_13);
   else
    FUNC_2(VAR_13);
  } else if ((VAR_10->if_drv_flags & VAR_7) != 0)
   FUNC_4(VAR_10);
  VAR_13->sc_ifflags = VAR_10->if_flags;
  FUNC_1(VAR_13);
  break;
 case 131:
  FUNC_0(VAR_13);
  if ((VAR_13->sc_flags & VAR_1) != 0) {
   VAR_15 = VAR_2;
   FUNC_1(VAR_13);
   break;
  }
  VAR_10->if_capenable = VAR_14->ifr_reqcap;
  if ((VAR_10->if_capenable & VAR_5) != 0)
   VAR_10->if_hwassist = VAR_0;
  else
   VAR_10->if_hwassist = 0;
  FUNC_1(VAR_13);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_13);
  if ((VAR_10->if_drv_flags & VAR_7) != 0)
   FUNC_3(VAR_13);
  FUNC_1(VAR_13);
  break;
 case 128:
  if ((VAR_14->ifr_mtu < VAR_3) ||
      (VAR_14->ifr_mtu > VAR_4))
   VAR_15 = VAR_2;
  else
   VAR_10->if_mtu = VAR_14->ifr_mtu;
  break;
 case 132:
 case 129:
  VAR_15 = FUNC_6(VAR_10, VAR_14, &VAR_13->sc_mii->mii_media, VAR_11);
  break;
 default:
  VAR_15 = FUNC_5(VAR_10, VAR_11, VAR_12);
  break;
 }

 return (VAR_15);
}
