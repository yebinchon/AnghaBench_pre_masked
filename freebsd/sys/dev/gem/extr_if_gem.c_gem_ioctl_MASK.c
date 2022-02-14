
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; struct gem_softc* if_softc; } ;
struct gem_softc {int sc_ifflags; int sc_csum_features; TYPE_1__* sc_mii; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int mii_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct gem_softc*) ;
 int FUNC_1 (struct gem_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct gem_softc*) ;
 int FUNC_4 (struct gem_softc*) ;
 int FUNC_5 (struct ifnet*,int ) ;
 int FUNC_6 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 struct gem_softc *VAR_10 = VAR_7->if_softc;
 struct ifreq *VAR_11 = (struct ifreq *)VAR_9;
 int VAR_12;

 VAR_12 = 0;
 switch (VAR_8) {
 case 129:
  FUNC_0(VAR_10);
  if ((VAR_7->if_flags & VAR_6) != 0) {
   if ((VAR_7->if_drv_flags & VAR_3) != 0 &&
       ((VAR_7->if_flags ^ VAR_10->sc_ifflags) &
       (VAR_2 | VAR_5)) != 0)
    FUNC_4(VAR_10);
   else
    FUNC_3(VAR_10);
  } else if ((VAR_7->if_drv_flags & VAR_3) != 0)
   FUNC_5(VAR_7, 0);
  if ((VAR_7->if_flags & VAR_4) != 0)
   VAR_10->sc_csum_features |= VAR_0;
  else
   VAR_10->sc_csum_features &= ~VAR_0;
  if ((VAR_7->if_capenable & VAR_1) != 0)
   VAR_7->if_hwassist = VAR_10->sc_csum_features;
  VAR_10->sc_ifflags = VAR_7->if_flags;
  FUNC_1(VAR_10);
  break;
 case 133:
 case 132:
  FUNC_0(VAR_10);
  if ((VAR_7->if_drv_flags & VAR_3) != 0)
   FUNC_4(VAR_10);
  FUNC_1(VAR_10);
  break;
 case 131:
 case 128:
  VAR_12 = FUNC_6(VAR_7, VAR_11, &VAR_10->sc_mii->mii_media, VAR_8);
  break;
 case 130:
  FUNC_0(VAR_10);
  VAR_7->if_capenable = VAR_11->ifr_reqcap;
  if ((VAR_7->if_capenable & VAR_1) != 0)
   VAR_7->if_hwassist = VAR_10->sc_csum_features;
  else
   VAR_7->if_hwassist = 0;
  FUNC_1(VAR_10);
  break;
 default:
  VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9);
  break;
 }

 return (VAR_12);
}
