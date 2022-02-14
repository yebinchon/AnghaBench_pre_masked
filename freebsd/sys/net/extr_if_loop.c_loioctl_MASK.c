
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int sa_family; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; TYPE_1__ ifr_addr; } ;
struct ifnet {int if_flags; int if_capenable; int if_hwassist; int if_mtu; int if_drv_flags; } ;
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






 int FUNC_0 (struct ifnet*,int ) ;

int
FUNC_1(struct ifnet *VAR_13, u_long VAR_14, caddr_t VAR_15)
{
 struct ifreq *VAR_16 = (struct ifreq *)VAR_15;
 int VAR_17 = 0, VAR_18;

 switch (VAR_14) {
 case 131:
  VAR_13->if_flags |= VAR_8;
  VAR_13->if_drv_flags |= VAR_7;
  FUNC_0(VAR_13, VAR_10);



  break;

 case 133:
 case 132:
  if (VAR_16 == ((void*)0)) {
   VAR_17 = VAR_0;
   break;
  }
  switch (VAR_16->ifr_addr.sa_family) {
  default:
   VAR_17 = VAR_0;
   break;
  }
  break;

 case 128:
  VAR_13->if_mtu = VAR_16->ifr_mtu;
  break;

 case 129:
  FUNC_0(VAR_13, (VAR_13->if_flags & VAR_8) ?
      VAR_10: VAR_9);
  break;

 case 130:
  VAR_18 = VAR_13->if_capenable ^ VAR_16->ifr_reqcap;
  if ((VAR_18 & VAR_3) != 0)
   VAR_13->if_capenable ^= VAR_3;
  if ((VAR_18 & VAR_5) != 0)
   VAR_13->if_capenable ^= VAR_5;
  if ((VAR_18 & VAR_4) != 0) {



   VAR_17 = VAR_2;
   break;

  }
  if ((VAR_18 & VAR_6) != 0) {



   VAR_17 = VAR_2;
   break;

  }
  VAR_13->if_hwassist = 0;
  if (VAR_13->if_capenable & VAR_5)
   VAR_13->if_hwassist = VAR_11;




  break;

 default:
  VAR_17 = VAR_1;
 }
 return (VAR_17);
}
