
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {scalar_t__ ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; scalar_t__ if_hdrlen; struct gx_softc* if_softc; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct gx_softc {int sc_flags; int sc_ifmedia; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct ifnet*,struct ifaddr*) ;
 int FUNC_1 (struct ifnet*,int,scalar_t__) ;
 int FUNC_2 (struct gx_softc*) ;
 int FUNC_3 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7)
{
 struct gx_softc *VAR_8;
 struct ifreq *VAR_9;



 int VAR_10;

 VAR_8 = VAR_5->if_softc;
 VAR_9 = (struct ifreq *)VAR_7;




 switch (VAR_6) {
 case 131:
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (VAR_10 != 0)
   return (VAR_10);
  return (0);

 case 130:
  if (VAR_5->if_flags == VAR_8->sc_flags)
   return (0);
  if ((VAR_5->if_flags & VAR_4) != 0) {
   FUNC_2(VAR_8);
  } else {
   if ((VAR_5->if_drv_flags & VAR_3) != 0) {
    VAR_5->if_drv_flags &= ~VAR_3;
   }
  }
  VAR_8->sc_flags = VAR_5->if_flags;
  return (0);

 case 128:
  if (VAR_9->ifr_mtu + VAR_5->if_hdrlen > VAR_2)
   return (VAR_1);
  return (0);

 case 129:
 case 132:
  VAR_10 = FUNC_3(VAR_5, VAR_9, &VAR_8->sc_ifmedia, VAR_6);
  if (VAR_10 != 0)
   return (VAR_10);
  return (0);

 default:
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (VAR_10 != 0)
   return (VAR_10);
  return (0);
 }
}
