
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vtbe_softc {int if_flags; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; struct vtbe_softc* if_softc; } ;
struct ifmediareq {int ifm_count; int ifm_status; int ifm_active; int ifm_current; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (struct vtbe_softc*) ;
 int FUNC_1 (struct vtbe_softc*) ;
 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct vtbe_softc*,int) ;
 int FUNC_4 (struct vtbe_softc*) ;
 int FUNC_5 (struct vtbe_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct ifmediareq *VAR_11;
 struct vtbe_softc *VAR_12;
 struct ifreq *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_8->if_softc;
 VAR_13 = (struct ifreq *)VAR_10;

 VAR_15 = 0;
 switch (VAR_9) {
 case 129:
  FUNC_0(VAR_12);
  if (VAR_8->if_flags & VAR_2) {
   FUNC_3(VAR_12, 1);

   if ((VAR_8->if_drv_flags & VAR_1) == 0) {
    FUNC_4(VAR_12);
   }
  } else {
   FUNC_3(VAR_12, 0);

   if (VAR_8->if_drv_flags & VAR_1) {
    FUNC_5(VAR_12);
   }
  }
  VAR_12->if_flags = VAR_8->if_flags;
  FUNC_1(VAR_12);
  break;
 case 134:
 case 133:
  break;
 case 128:
 case 132:
  VAR_11 = (struct ifmediareq *)VAR_10;
  VAR_11->ifm_count = 1;
  VAR_11->ifm_status = (VAR_5 | VAR_4);
  VAR_11->ifm_active = (VAR_6 | VAR_3 | VAR_7);
  VAR_11->ifm_current = VAR_11->ifm_active;
  break;
 case 130:
  VAR_14 = VAR_8->if_capenable ^ VAR_13->ifr_reqcap;
  if (VAR_14 & VAR_0) {
   VAR_8->if_capenable ^= VAR_0;
  }
  break;

 case 131:
  FUNC_3(VAR_12, 1);
 default:
  VAR_15 = FUNC_2(VAR_8, VAR_9, VAR_10);
  break;
 }

 return (VAR_15);
}
