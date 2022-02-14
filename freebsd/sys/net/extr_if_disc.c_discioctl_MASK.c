
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int sa_family; } ;
struct ifreq {int ifr_mtu; TYPE_1__ ifr_addr; } ;
struct ifnet {int if_mtu; int if_flags; } ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static int
FUNC_0(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct ifreq *VAR_6 = (struct ifreq *)VAR_5;
 int VAR_7 = 0;

 switch (VAR_4) {
 case 129:
  VAR_3->if_flags |= VAR_2;




  break;
 case 131:
 case 130:
  if (VAR_6 == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  switch (VAR_6->ifr_addr.sa_family) {
  default:
   VAR_7 = VAR_0;
   break;
  }
  break;
 case 128:
  VAR_3->if_mtu = VAR_6->ifr_mtu;
  break;
 default:
  VAR_7 = VAR_1;
 }
 return (VAR_7);
}
