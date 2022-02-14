
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int * sa_data; } ;
struct ifreq {int ifr_mtu; TYPE_2__ ifr_addr; } ;
struct ifnet {int if_mtu; int if_softc; int (* if_init ) (int ) ;int if_flags; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct fw_hwaddr {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int fc_hwaddr; } ;
struct TYPE_4__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct ifnet*) ;



 int FUNC_1 (struct ifnet*,struct ifaddr*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct ifnet *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct ifaddr *VAR_5 = (struct ifaddr *) VAR_4;
 struct ifreq *VAR_6 = (struct ifreq *) VAR_4;
 int VAR_7 = 0;

 switch (VAR_3) {
 case 129:
  VAR_2->if_flags |= VAR_1;

  switch (VAR_5->ifa_addr->sa_family) {






  default:
   VAR_2->if_init(VAR_2->if_softc);
   break;
  }
  break;

 case 130:
  FUNC_2(&FUNC_0(VAR_2)->fc_hwaddr, &VAR_6->ifr_addr.sa_data[0],
      sizeof(struct fw_hwaddr));
  break;

 case 128:



  if (VAR_6->ifr_mtu > 1500) {
   VAR_7 = VAR_0;
  } else {
   VAR_2->if_mtu = VAR_6->ifr_mtu;
  }
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 return (VAR_7);
}
