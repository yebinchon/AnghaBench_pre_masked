
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capenable; int if_capabilities; int if_mtu; struct ae_softc* if_softc; } ;
struct ae_softc {int if_flags; int flags; int miibus; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ae_softc*) ;
 int FUNC_1 (struct ae_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ae_softc*) ;
 int FUNC_4 (struct ae_softc*) ;
 int FUNC_5 (struct ae_softc*) ;
 int FUNC_6 (struct ae_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int FUNC_8 (struct ifnet*,int,scalar_t__) ;
 int FUNC_9 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_9, u_long VAR_10, caddr_t VAR_11)
{
 struct ae_softc *VAR_12;
 struct ifreq *VAR_13;
 struct mii_data *VAR_14;
 int VAR_15, VAR_16;

 VAR_12 = VAR_9->if_softc;
 VAR_13 = (struct ifreq *)VAR_11;
 VAR_15 = 0;

 switch (VAR_10) {
 case 128:
  if (VAR_13->ifr_mtu < VAR_2 || VAR_13->ifr_mtu > VAR_3)
   VAR_15 = VAR_1;
  else if (VAR_9->if_mtu != VAR_13->ifr_mtu) {
   FUNC_0(VAR_12);
   VAR_9->if_mtu = VAR_13->ifr_mtu;
   if ((VAR_9->if_drv_flags & VAR_6) != 0) {
    VAR_9->if_drv_flags &= ~VAR_6;
    FUNC_3(VAR_12);
   }
   FUNC_1(VAR_12);
  }
  break;
 case 130:
  FUNC_0(VAR_12);
  if ((VAR_9->if_flags & VAR_8) != 0) {
   if ((VAR_9->if_drv_flags & VAR_6) != 0) {
    if (((VAR_9->if_flags ^ VAR_12->if_flags)
        & (VAR_7 | VAR_5)) != 0)
     FUNC_4(VAR_12);
   } else {
    if ((VAR_12->flags & VAR_0) == 0)
     FUNC_3(VAR_12);
   }
  } else {
   if ((VAR_9->if_drv_flags & VAR_6) != 0)
    FUNC_6(VAR_12);
  }
  VAR_12->if_flags = VAR_9->if_flags;
  FUNC_1(VAR_12);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_12);
  if ((VAR_9->if_drv_flags & VAR_6) != 0)
   FUNC_4(VAR_12);
  FUNC_1(VAR_12);
  break;
 case 129:
 case 132:
  VAR_14 = FUNC_7(VAR_12->miibus);
  VAR_15 = FUNC_9(VAR_9, VAR_13, &VAR_14->mii_media, VAR_10);
  break;
 case 131:
  FUNC_0(VAR_12);
  VAR_16 = VAR_13->ifr_reqcap ^ VAR_9->if_capenable;
  if ((VAR_16 & VAR_4) != 0 &&
      (VAR_9->if_capabilities & VAR_4) != 0) {
   VAR_9->if_capenable ^= VAR_4;
   FUNC_5(VAR_12);
  }
  FUNC_2(VAR_9);
  FUNC_1(VAR_12);
  break;
 default:
  VAR_15 = FUNC_8(VAR_9, VAR_10, VAR_11);
  break;
 }
 return (VAR_15);
}
