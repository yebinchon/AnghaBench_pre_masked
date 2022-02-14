
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct octm_softc {int sc_flags; int sc_ifmedia; int sc_port; } ;
struct ifreq {scalar_t__ ifr_mtu; int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; scalar_t__ if_hdrlen; int if_capenable; struct octm_softc* if_softc; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct ifnet*,struct ifaddr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (struct octm_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct octm_softc *VAR_6;
 struct ifreq *VAR_7;



 int VAR_8;

 VAR_6 = VAR_3->if_softc;
 VAR_7 = (struct ifreq *)VAR_5;




 switch (VAR_4) {
 case 132:
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_8 != 0)
   return (VAR_8);
  return (0);

 case 130:
  if (VAR_3->if_flags == VAR_6->sc_flags)
   return (0);
  if ((VAR_3->if_flags & VAR_2) != 0) {
   FUNC_5(VAR_6);
  } else {
   if ((VAR_3->if_drv_flags & VAR_1) != 0) {
    FUNC_1(VAR_6->sc_port);

    VAR_3->if_drv_flags &= ~VAR_1;
   }
  }
  VAR_6->sc_flags = VAR_3->if_flags;
  return (0);

 case 131:





  VAR_3->if_capenable = VAR_7->ifr_reqcap;
  return (0);

 case 128:
  FUNC_2(VAR_6->sc_port, VAR_7->ifr_mtu + VAR_3->if_hdrlen);
  return (0);

 case 129:
 case 133:
  VAR_8 = FUNC_4(VAR_3, VAR_7, &VAR_6->sc_ifmedia, VAR_4);
  if (VAR_8 != 0)
   return (VAR_8);
  return (0);

 default:
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_8 != 0)
   return (VAR_8);
  return (0);
 }
}
