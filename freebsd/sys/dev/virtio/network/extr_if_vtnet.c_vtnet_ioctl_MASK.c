
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vtnet_softc {int vtnet_if_flags; int vtnet_flags; int vtnet_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_mtu; struct vtnet_softc* if_softc; } ;
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
 int VAR_13 ;
 int VAR_14 ;







 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int FUNC_2 (struct vtnet_softc*) ;
 int FUNC_3 (struct vtnet_softc*) ;
 int VAR_15 ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_6 (struct vtnet_softc*,int ) ;
 int FUNC_7 (struct vtnet_softc*) ;
 int FUNC_8 (struct vtnet_softc*) ;
 int FUNC_9 (struct vtnet_softc*) ;
 int FUNC_10 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_16, u_long VAR_17, caddr_t VAR_18)
{
 struct vtnet_softc *VAR_19;
 struct ifreq *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_19 = VAR_16->if_softc;
 VAR_20 = (struct ifreq *) VAR_18;
 VAR_23 = 0;

 switch (VAR_17) {
 case 128:
  if (VAR_16->if_mtu != VAR_20->ifr_mtu) {
   FUNC_1(VAR_19);
   VAR_23 = FUNC_6(VAR_19, VAR_20->ifr_mtu);
   FUNC_3(VAR_19);
  }
  break;

 case 130:
  FUNC_1(VAR_19);
  if ((VAR_16->if_flags & VAR_14) == 0) {
   if (VAR_16->if_drv_flags & VAR_12)
    FUNC_10(VAR_19);
  } else if (VAR_16->if_drv_flags & VAR_12) {
   if ((VAR_16->if_flags ^ VAR_19->vtnet_if_flags) &
       (VAR_13 | VAR_11)) {
    if (VAR_19->vtnet_flags & VAR_15)
     FUNC_8(VAR_19);
    else {
     VAR_16->if_flags |= VAR_13;
     if ((VAR_16->if_flags ^ VAR_19->vtnet_if_flags)
         & VAR_11)
      VAR_23 = VAR_0;
    }
   }
  } else
   FUNC_7(VAR_19);

  if (VAR_23 == 0)
   VAR_19->vtnet_if_flags = VAR_16->if_flags;
  FUNC_3(VAR_19);
  break;

 case 134:
 case 133:
  if ((VAR_19->vtnet_flags & VAR_15) == 0)
   break;
  FUNC_1(VAR_19);
  if (VAR_16->if_drv_flags & VAR_12)
   FUNC_9(VAR_19);
  FUNC_3(VAR_19);
  break;

 case 129:
 case 132:
  VAR_23 = FUNC_5(VAR_16, VAR_20, &VAR_19->vtnet_media, VAR_17);
  break;

 case 131:
  FUNC_1(VAR_19);
  VAR_22 = VAR_20->ifr_reqcap ^ VAR_16->if_capenable;

  if (VAR_22 & VAR_6)
   VAR_16->if_capenable ^= VAR_6;
  if (VAR_22 & VAR_7)
   VAR_16->if_capenable ^= VAR_7;
  if (VAR_22 & VAR_4)
   VAR_16->if_capenable ^= VAR_4;
  if (VAR_22 & VAR_5)
   VAR_16->if_capenable ^= VAR_5;

  if (VAR_22 & (VAR_2 | VAR_3 | VAR_1 |
      VAR_8)) {

   VAR_21 = 1;

   if (VAR_22 & VAR_2)
    VAR_16->if_capenable ^= VAR_2;
   if (VAR_22 & VAR_3)
    VAR_16->if_capenable ^= VAR_3;
   if (VAR_22 & VAR_1)
    VAR_16->if_capenable ^= VAR_1;
   if (VAR_22 & VAR_8)
    VAR_16->if_capenable ^= VAR_8;
  } else
   VAR_21 = 0;

  if (VAR_22 & VAR_10)
   VAR_16->if_capenable ^= VAR_10;
  if (VAR_22 & VAR_9)
   VAR_16->if_capenable ^= VAR_9;

  if (VAR_21 && (VAR_16->if_drv_flags & VAR_12)) {
   VAR_16->if_drv_flags &= ~VAR_12;
   FUNC_7(VAR_19);
  }

  FUNC_3(VAR_19);
  FUNC_0(VAR_16);

  break;

 default:
  VAR_23 = FUNC_4(VAR_16, VAR_17, VAR_18);
  break;
 }

 FUNC_2(VAR_19);

 return (VAR_23);
}
