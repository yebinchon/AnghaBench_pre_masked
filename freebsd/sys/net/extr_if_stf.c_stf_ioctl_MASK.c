
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct sockaddr_in6 {int sin6_addr; } ;
struct in_addr {int dummy; } ;
struct TYPE_4__ {int sa_family; } ;
struct ifreq {int ifr_mtu; TYPE_2__ ifr_addr; } ;
struct ifnet {int if_mtu; int if_drv_flags; int if_flags; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef scalar_t__ caddr_t ;
typedef int addr ;
struct TYPE_3__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;





 int FUNC_2 (int ,struct in_addr*,int) ;
 int FUNC_3 (struct in_addr*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 struct ifaddr *VAR_10;
 struct ifreq *VAR_11;
 struct sockaddr_in6 *VAR_12;
 struct in_addr VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = 0;
 switch (VAR_8) {
 case 129:
  VAR_10 = (struct ifaddr *)VAR_9;
  if (VAR_10 == ((void*)0) || VAR_10->ifa_addr->sa_family != VAR_0) {
   VAR_14 = VAR_1;
   break;
  }
  VAR_12 = (struct sockaddr_in6 *)VAR_10->ifa_addr;
  if (!FUNC_1(&VAR_12->sin6_addr)) {
   VAR_14 = VAR_2;
   break;
  }
  FUNC_2(FUNC_0(&VAR_12->sin6_addr), &VAR_13, sizeof(VAR_13));
  if (FUNC_3(&VAR_13)) {
   VAR_14 = VAR_2;
   break;
  }

  VAR_7->if_flags |= VAR_4;
  VAR_7->if_drv_flags |= VAR_3;
  break;

 case 132:
 case 131:
  VAR_11 = (struct ifreq *)VAR_9;
  if (VAR_11 && VAR_11->ifr_addr.sa_family == VAR_0)
   ;
  else
   VAR_14 = VAR_1;
  break;

 case 130:
  break;

 case 128:
  VAR_11 = (struct ifreq *)VAR_9;
  VAR_15 = VAR_11->ifr_mtu;

  if (VAR_15 < VAR_6 || VAR_15 > VAR_5 - 20)
   return (VAR_2);
  VAR_7->if_mtu = VAR_15;
  break;

 default:
  VAR_14 = VAR_2;
  break;
 }

 return VAR_14;
}
