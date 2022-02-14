
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int * sa_data; } ;
struct ifreq {int ifr_lan_pcp; int ifr_mtu; TYPE_2__ ifr_addr; } ;
struct ifnet {int if_pcp; int if_mtu; int if_softc; int (* if_init ) (int ) ;int if_flags; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ifnet*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_6 ;





 int FUNC_2 (struct ifnet*,struct ifaddr*) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct ifnet *VAR_9, u_long VAR_10, caddr_t VAR_11)
{
 struct ifaddr *VAR_12 = (struct ifaddr *) VAR_11;
 struct ifreq *VAR_13 = (struct ifreq *) VAR_11;
 int VAR_14 = 0;

 switch (VAR_10) {
 case 130:
  VAR_9->if_flags |= VAR_3;

  switch (VAR_12->ifa_addr->sa_family) {






  default:
   VAR_9->if_init(VAR_9->if_softc);
   break;
  }
  break;

 case 132:
  FUNC_3(FUNC_1(VAR_9), &VAR_13->ifr_addr.sa_data[0],
      VAR_2);
  break;

 case 129:



  if (VAR_13->ifr_mtu > VAR_1) {
   VAR_14 = VAR_0;
  } else {
   VAR_9->if_mtu = VAR_13->ifr_mtu;
  }
  break;

 case 128:
  VAR_14 = FUNC_4(VAR_7, VAR_6);
  if (VAR_14 != 0)
   break;
  if (VAR_13->ifr_lan_pcp > 7 &&
      VAR_13->ifr_lan_pcp != VAR_5) {
   VAR_14 = VAR_0;
  } else {
   VAR_9->if_pcp = VAR_13->ifr_lan_pcp;

   FUNC_0(VAR_8, VAR_9, VAR_4);
  }
  break;

 case 131:
  VAR_13->ifr_lan_pcp = VAR_9->if_pcp;
  break;

 default:
  VAR_14 = VAR_0;
  break;
 }
 return (VAR_14);
}
