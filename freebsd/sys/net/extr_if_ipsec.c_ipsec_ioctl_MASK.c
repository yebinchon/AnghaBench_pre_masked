
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint32_t ;
typedef int u_long ;
struct sockaddr_in6 {int sin_family; int sin_len; int sin6_family; int sin6_len; int sin6_addr; int sin_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin6_family; int sin6_len; int sin6_addr; int sin_addr; } ;
struct sockaddr {int const sa_family; int sa_len; } ;
struct TYPE_22__ {int sin6_addr; } ;
struct TYPE_19__ {int sin_addr; } ;
struct TYPE_23__ {TYPE_7__ sin6; TYPE_4__ sin; } ;
struct TYPE_20__ {int sin6_addr; } ;
struct TYPE_18__ {int sin_addr; } ;
struct TYPE_17__ {int const sa_family; } ;
struct TYPE_21__ {TYPE_5__ sin6; TYPE_3__ sin; TYPE_2__ sa; } ;
struct secasindex {TYPE_8__ dst; TYPE_6__ src; } ;
struct ipsec_softc {int reqid; int fibnum; int family; } ;
struct in_aliasreq {int ifra_dstaddr; int ifra_addr; } ;
struct in6_ifreq {int ifr_addr; } ;
struct in6_aliasreq {int ifra_dstaddr; int ifra_addr; } ;
struct ifreq {int ifr_fib; int ifr_addr; int ifr_mtu; } ;
struct ifnet {struct ipsec_softc* if_softc; int if_mtu; int if_flags; } ;
typedef int reqid ;
typedef scalar_t__ caddr_t ;
struct TYPE_24__ {int sin6_addr; } ;
struct TYPE_16__ {int s_addr; } ;
struct TYPE_15__ {int td_ucred; } ;
struct TYPE_14__ {TYPE_1__ sin_addr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_12__* VAR_11 ;
 int FUNC_3 (struct ifreq*) ;
 int FUNC_4 (struct ipsec_softc*) ;
 struct secasindex* FUNC_5 (struct ipsec_softc*,int ,int ) ;
 int VAR_12 ;
 int FUNC_6 (struct ifnet*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_7 (struct ipsec_softc*,int ) ;
 int FUNC_8 (struct sockaddr_in6*,int ,int) ;
 int FUNC_9 (int ,struct sockaddr*) ;
 int FUNC_10 (TYPE_12__*,int ) ;
 int VAR_13 ;
 int FUNC_11 (TYPE_9__*,int ) ;
 int FUNC_12 (struct sockaddr_in6*) ;
 TYPE_10__* FUNC_13 (struct sockaddr*) ;
 TYPE_9__* FUNC_14 (struct sockaddr*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(struct ifnet *VAR_14, u_long VAR_15, caddr_t VAR_16)
{
 struct ifreq *VAR_17 = (struct ifreq*)VAR_16;
 struct sockaddr *VAR_18, *VAR_19;
 struct ipsec_softc *VAR_20;
 struct secasindex *VAR_21;






 uint32_t VAR_22;
 int VAR_23;

 switch (VAR_15) {
 case 133:
  VAR_14->if_flags |= VAR_4;
 case 142:
 case 141:
 case 139:
 case 132:
  return (0);
 case 131:
  if (VAR_17->ifr_mtu < VAR_8 ||
      VAR_17->ifr_mtu > VAR_7)
   return (VAR_2);
  else
   VAR_14->if_mtu = VAR_17->ifr_mtu;
  return (0);
 }
 FUNC_15(&VAR_12);
 VAR_20 = VAR_14->if_softc;

 if (VAR_20 == ((void*)0)) {
  VAR_23 = VAR_3;
  goto bad;
 }
 VAR_23 = 0;
 switch (VAR_15) {
 case 130:



  VAR_23 = VAR_2;
  switch (VAR_15) {
  default:
   goto bad;
  }

  if (VAR_19->sa_family != VAR_18->sa_family ||
      VAR_19->sa_len != VAR_18->sa_len)
   goto bad;


  switch (VAR_19->sa_family) {
  default:
   VAR_23 = VAR_1;
   goto bad;
  }

  VAR_23 = VAR_1;
  switch (VAR_15) {
  }
  VAR_23 = VAR_0;
  switch (VAR_19->sa_family) {
  };
  VAR_23 = FUNC_6(VAR_14, VAR_19, VAR_18);
  break;
 case 140:
  FUNC_4(VAR_20);
  break;
 case 136:
 case 138:




  if (VAR_20->family == 0) {
   VAR_23 = VAR_0;
   break;
  }
  VAR_21 = FUNC_5(VAR_20, VAR_6, VAR_20->family);
  switch (VAR_15) {
  default:
   VAR_23 = VAR_1;
  }
  if (VAR_23 == 0) {
   switch (VAR_15) {
   }
  }
  if (VAR_23 != 0)
   break;
  switch (VAR_15) {
  }
  break;
 case 134:
  VAR_17->ifr_fib = VAR_20->fibnum;
  break;
 case 128:
  if ((VAR_23 = FUNC_10(VAR_11, VAR_10)) != 0)
   break;
  if (VAR_17->ifr_fib >= VAR_13)
   VAR_23 = VAR_2;
  else
   VAR_20->fibnum = VAR_17->ifr_fib;
  break;
 case 144:
  VAR_22 = VAR_20->reqid;
  VAR_23 = FUNC_2(&VAR_22, FUNC_3(VAR_17), sizeof(VAR_22));
  break;
 case 143:
  if ((VAR_23 = FUNC_10(VAR_11, VAR_9)) != 0)
   break;
  VAR_23 = FUNC_1(FUNC_3(VAR_17), &VAR_22, sizeof(VAR_22));
  if (VAR_23 != 0)
   break;
  VAR_23 = FUNC_7(VAR_20, VAR_22);
  break;
 default:
  VAR_23 = VAR_2;
  break;
 }
bad:
 FUNC_16(&VAR_12);
 return (VAR_23);
}
