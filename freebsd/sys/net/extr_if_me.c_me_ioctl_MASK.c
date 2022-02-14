
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct me_softc {int me_fibnum; TYPE_1__ me_dst; TYPE_1__ me_src; } ;
struct in_aliasreq {struct sockaddr_in ifra_dstaddr; struct sockaddr_in ifra_addr; } ;
struct ifreq {int ifr_mtu; int ifr_fib; int ifr_addr; } ;
struct ifnet {int if_mtu; struct me_softc* if_softc; int if_flags; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct me_softc*) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (struct me_softc*) ;
 int VAR_8 ;
 int FUNC_2 (struct me_softc*,int ,int ) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct sockaddr_in*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_10, u_long VAR_11, caddr_t VAR_12)
{
 struct ifreq *VAR_13 = (struct ifreq *)VAR_12;
 struct sockaddr_in *VAR_14, *VAR_15;
 struct me_softc *VAR_16;
 int VAR_17;

 switch (VAR_11) {
 case 130:
  if (VAR_13->ifr_mtu < 576)
   return (VAR_2);
  VAR_10->if_mtu = VAR_13->ifr_mtu;
  return (0);
 case 132:
  VAR_10->if_flags |= VAR_4;
 case 131:
 case 138:
 case 137:
  return (0);
 }
 FUNC_7(&VAR_8);
 VAR_16 = VAR_10->if_softc;
 if (VAR_16 == ((void*)0)) {
  VAR_17 = VAR_3;
  goto end;
 }
 VAR_17 = 0;
 switch (VAR_11) {
 case 129:
  VAR_14 = &((struct in_aliasreq *)VAR_12)->ifra_addr;
  VAR_15 = &((struct in_aliasreq *)VAR_12)->ifra_dstaddr;
  if (VAR_14->sin_family != VAR_15->sin_family ||
      VAR_14->sin_family != VAR_0 ||
      VAR_14->sin_len != VAR_15->sin_len ||
      VAR_14->sin_len != sizeof(struct sockaddr_in)) {
   VAR_17 = VAR_2;
   break;
  }
  if (VAR_14->sin_addr.s_addr == VAR_5 ||
      VAR_15->sin_addr.s_addr == VAR_5) {
   VAR_17 = VAR_1;
   break;
  }
  VAR_17 = FUNC_2(VAR_16, VAR_14->sin_addr.s_addr,
      VAR_15->sin_addr.s_addr);
  break;
 case 136:
  FUNC_1(VAR_16);
  break;
 case 134:
 case 135:
  if (!FUNC_0(VAR_16)) {
   VAR_17 = VAR_1;
   break;
  }
  VAR_14 = (struct sockaddr_in *)&VAR_13->ifr_addr;
  FUNC_3(VAR_14, 0, sizeof(*VAR_14));
  VAR_14->sin_family = VAR_0;
  VAR_14->sin_len = sizeof(*VAR_14);
  switch (VAR_11) {
  case 134:
   VAR_14->sin_addr = VAR_16->me_src;
   break;
  case 135:
   VAR_14->sin_addr = VAR_16->me_dst;
   break;
  }
  VAR_17 = FUNC_4(VAR_7->td_ucred, FUNC_6(VAR_14));
  if (VAR_17 != 0)
   FUNC_3(VAR_14, 0, sizeof(*VAR_14));
  break;
 case 133:
  VAR_13->ifr_fib = VAR_16->me_fibnum;
  break;
 case 128:
  if ((VAR_17 = FUNC_5(VAR_7, VAR_6)) != 0)
   break;
  if (VAR_13->ifr_fib >= VAR_9)
   VAR_17 = VAR_2;
  else
   VAR_16->me_fibnum = VAR_13->ifr_fib;
  break;
 default:
  VAR_17 = VAR_2;
  break;
 }
end:
 FUNC_8(&VAR_8);
 return (VAR_17);
}
