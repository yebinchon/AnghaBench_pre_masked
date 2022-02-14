
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct lp_data {TYPE_2__* sc_ifp; int * sc_ifbuf; int sc_dev; } ;
struct TYPE_6__ {int sa_family; } ;
struct ifreq {TYPE_3__ ifr_addr; scalar_t__ ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; struct lp_data* if_softc; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {scalar_t__ if_mtu; } ;
struct TYPE_4__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct lp_data*) ;
 int * FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct lp_data *VAR_11 = VAR_8->if_softc;
 device_t VAR_12 = VAR_11->sc_dev;
 device_t VAR_13 = FUNC_0(VAR_12);
 struct ifaddr *VAR_14 = (struct ifaddr *)VAR_10;
 struct ifreq *VAR_15 = (struct ifreq *)VAR_10;
 u_char *VAR_16;
 int VAR_17;

 switch (VAR_9) {
 case 134:
 case 130:
  if (VAR_14->ifa_addr->sa_family != 136)
   return (VAR_0);

  VAR_8->if_flags |= VAR_4;

 case 129:
  VAR_17 = 0;
  FUNC_6(VAR_13);
  if ((!(VAR_8->if_flags & VAR_4)) &&
      (VAR_8->if_drv_flags & VAR_3))
   FUNC_4(VAR_11);
  else if (((VAR_8->if_flags & VAR_4)) &&
      (!(VAR_8->if_drv_flags & VAR_3)))
   VAR_17 = FUNC_2(VAR_8);
  FUNC_7(VAR_13);
  return (VAR_17);

 case 128:
  FUNC_6(VAR_13);
  if (VAR_8->if_drv_flags & VAR_3) {
   VAR_16 = FUNC_5(VAR_15->ifr_mtu + VAR_5, VAR_6,
       VAR_7);
   if (VAR_16 == ((void*)0)) {
    FUNC_7(VAR_13);
    return (VAR_2);
   }
   if (VAR_11->sc_ifbuf)
    FUNC_1(VAR_11->sc_ifbuf, VAR_6);
   VAR_11->sc_ifbuf = VAR_16;
  }
  VAR_11->sc_ifp->if_mtu = VAR_15->ifr_mtu;
  FUNC_7(VAR_13);
  break;

 case 131:
  VAR_15->ifr_mtu = VAR_11->sc_ifp->if_mtu;
  break;

 case 135:
 case 133:
  if (VAR_15 == ((void*)0)) {
   return (VAR_0);
  }
  switch (VAR_15->ifr_addr.sa_family) {
  case 136:
   break;
  default:
   return (VAR_0);
  }
  break;

 case 132:




  return (VAR_1);

 default:
  FUNC_3("LP:ioctl(0x%lx)\n", VAR_9);
  return (VAR_1);
 }
 return (0);
}
