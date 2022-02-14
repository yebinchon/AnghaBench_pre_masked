
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {int sa_family; } ;
struct ifreq {TYPE_3__ ifr_addr; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; struct ic_softc* if_softc; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct ic_softc {int ic_lock; TYPE_2__* ic_ifp; int ic_dev; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int if_mtu; } ;
struct TYPE_4__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (struct ic_softc*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 struct ic_softc *VAR_10 = VAR_7->if_softc;
 device_t VAR_11 = VAR_10->ic_dev;
 device_t VAR_12 = FUNC_0(VAR_11);
 struct ifaddr *VAR_13 = (struct ifaddr *)VAR_9;
 struct ifreq *VAR_14 = (struct ifreq *)VAR_9;
 int VAR_15;

 switch (VAR_8) {

 case 133:
 case 130:
  if (VAR_13->ifa_addr->sa_family != 135)
   return (VAR_0);
  FUNC_5(&VAR_10->ic_lock);
  VAR_7->if_flags |= VAR_3;
  goto locked;
 case 129:
  FUNC_5(&VAR_10->ic_lock);
 locked:
  if ((!(VAR_7->if_flags & VAR_3)) &&
      (VAR_7->if_drv_flags & VAR_2)) {


   VAR_7->if_drv_flags &= ~VAR_2;
   FUNC_6(&VAR_10->ic_lock);


   FUNC_2(VAR_12, VAR_11);
   break;
  }
  if (((VAR_7->if_flags & VAR_3)) &&
      (!(VAR_7->if_drv_flags & VAR_2))) {
   FUNC_6(&VAR_10->ic_lock);
   if ((VAR_15 = FUNC_3(VAR_12, VAR_11,
       VAR_6 | VAR_5)))
    return (VAR_15);
   FUNC_5(&VAR_10->ic_lock);
   FUNC_4(VAR_12, VAR_4, 0, ((void*)0));
   VAR_7->if_drv_flags |= VAR_2;
  }
  FUNC_6(&VAR_10->ic_lock);
  break;

 case 128:
  FUNC_1(VAR_10, VAR_14->ifr_mtu);
  break;

 case 131:
  FUNC_5(&VAR_10->ic_lock);
  VAR_14->ifr_mtu = VAR_10->ic_ifp->if_mtu;
  FUNC_6(&VAR_10->ic_lock);
  break;

 case 134:
 case 132:
  if (VAR_14 == ((void*)0))
   return (VAR_0);
  switch (VAR_14->ifr_addr.sa_family) {
  case 135:
   break;
  default:
   return (VAR_0);
  }
  break;
 default:
  return (VAR_1);
 }
 return (0);
}
