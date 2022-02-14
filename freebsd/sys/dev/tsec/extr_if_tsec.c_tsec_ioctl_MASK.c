
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct tsec_softc {int tsec_if_flags; int is_etsec; TYPE_1__* tsec_mii; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_mtu; struct tsec_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int mii_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (struct tsec_softc*) ;
 int FUNC_1 (struct tsec_softc*) ;
 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,struct ifnet*) ;
 int FUNC_5 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_6 (struct tsec_softc*) ;
 int FUNC_7 (struct tsec_softc*,int) ;
 int FUNC_8 (struct tsec_softc*) ;
 int VAR_7 ;
 int FUNC_9 (struct tsec_softc*,int ) ;
 int FUNC_10 (struct tsec_softc*) ;
 int FUNC_11 (struct tsec_softc*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct tsec_softc*) ;

__attribute__((used)) static int
FUNC_14(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct tsec_softc *VAR_11 = VAR_8->if_softc;
 struct ifreq *VAR_12 = (struct ifreq *)VAR_10;
 int VAR_13, VAR_14 = 0;

 switch (VAR_9) {
 case 128:
  FUNC_0(VAR_11);
  if (FUNC_9(VAR_11, VAR_12->ifr_mtu))
   VAR_8->if_mtu = VAR_12->ifr_mtu;
  else
   VAR_14 = VAR_0;
  FUNC_1(VAR_11);
  break;
 case 130:
  FUNC_0(VAR_11);
  if (VAR_8->if_flags & VAR_6) {
   if (VAR_8->if_drv_flags & VAR_4) {
    if ((VAR_11->tsec_if_flags ^ VAR_8->if_flags) &
        VAR_5)
     FUNC_10(VAR_11);

    if ((VAR_11->tsec_if_flags ^ VAR_8->if_flags) &
        VAR_3)
     FUNC_11(VAR_11);
   } else
    FUNC_6(VAR_11);
  } else if (VAR_8->if_drv_flags & VAR_4)
   FUNC_13(VAR_11);

  VAR_11->tsec_if_flags = VAR_8->if_flags;
  FUNC_1(VAR_11);
  break;
 case 134:
 case 133:
  if (VAR_8->if_drv_flags & VAR_4) {
   FUNC_0(VAR_11);
   FUNC_11(VAR_11);
   FUNC_1(VAR_11);
  }
 case 132:
 case 129:
  VAR_14 = FUNC_5(VAR_8, VAR_12, &VAR_11->tsec_mii->mii_media,
      VAR_9);
  break;
 case 131:
  VAR_13 = VAR_8->if_capenable ^ VAR_12->ifr_reqcap;
  if ((VAR_13 & VAR_1) && VAR_11->is_etsec) {
   FUNC_0(VAR_11);
   VAR_8->if_capenable &= ~VAR_1;
   VAR_8->if_capenable |= VAR_1 & VAR_12->ifr_reqcap;
   FUNC_8(VAR_11);
   FUNC_1(VAR_11);
  }
  break;

 default:
  VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_10);
 }


 if (VAR_8->if_flags & VAR_6)
  FUNC_12(VAR_8);
 return (VAR_14);
}
