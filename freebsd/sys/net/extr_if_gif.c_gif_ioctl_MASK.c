
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct ifreq {int ifr_fib; int ifr_mtu; } ;
struct ifnet {struct gif_softc* if_softc; int if_mtu; int if_flags; } ;
struct gif_softc {scalar_t__ gif_family; int gif_options; int gif_fibnum; } ;
typedef int options ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (struct gif_softc*) ;
 int VAR_9 ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifreq*) ;
 int FUNC_5 (struct gif_softc*,int,scalar_t__) ;
 int FUNC_6 (struct gif_softc*,int) ;
 int FUNC_7 (struct gif_softc*,int,scalar_t__) ;
 int FUNC_8 (struct gif_softc*,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_11, u_long VAR_12, caddr_t VAR_13)
{
 struct ifreq *VAR_14 = (struct ifreq*)VAR_13;
 struct gif_softc *VAR_15;
 u_int VAR_16;
 int VAR_17;

 switch (VAR_12) {
 case 133:
  VAR_11->if_flags |= VAR_5;
 case 142:
 case 141:
 case 139:
 case 132:
  return (0);
 case 131:
  if (VAR_14->ifr_mtu < VAR_3 ||
      VAR_14->ifr_mtu > VAR_2)
   return (VAR_0);
  else
   VAR_11->if_mtu = VAR_14->ifr_mtu;
  return (0);
 }
 FUNC_10(&VAR_9);
 VAR_15 = VAR_11->if_softc;
 if (VAR_15 == ((void*)0)) {
  VAR_17 = VAR_1;
  goto bad;
 }
 VAR_17 = 0;
 switch (VAR_12) {
 case 140:
  if (VAR_15->gif_family == 0)
   break;
  FUNC_2(VAR_15);
  break;
 case 134:
  VAR_14->ifr_fib = VAR_15->gif_fibnum;
  break;
 case 128:
  if ((VAR_17 = FUNC_9(VAR_8, VAR_7)) != 0)
   break;
  if (VAR_14->ifr_fib >= VAR_10)
   VAR_17 = VAR_0;
  else
   VAR_15->gif_fibnum = VAR_14->ifr_fib;
  break;
 case 144:
  VAR_16 = VAR_15->gif_options;
  VAR_17 = FUNC_1(&VAR_16, FUNC_4(VAR_14),
      sizeof(VAR_16));
  break;
 case 143:
  if ((VAR_17 = FUNC_9(VAR_8, VAR_7)) != 0)
   break;
  VAR_17 = FUNC_0(FUNC_4(VAR_14), &VAR_16,
      sizeof(VAR_16));
  if (VAR_17)
   break;
  if (VAR_16 & ~VAR_4) {
   VAR_17 = VAR_0;
   break;
  }
  if (VAR_15->gif_options != VAR_16) {
   switch (VAR_15->gif_family) {
   default:

    VAR_15->gif_options = VAR_16;
   }
  }
  break;
 default:
  VAR_17 = VAR_0;
  break;
 }
 if (VAR_17 == 0 && VAR_15->gif_family != 0) {
  if (






      0) {
   FUNC_3(VAR_11, VAR_6);
  }
 }
bad:
 FUNC_11(&VAR_9);
 return (VAR_17);
}
