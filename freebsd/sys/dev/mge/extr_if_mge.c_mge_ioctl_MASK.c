
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct mge_softc {int mge_if_flags; TYPE_1__* mii; int dev; int mge_ifmedia; int phy_attached; } ;
struct ifreq {int ifr_reqcap; int ifr_media; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; struct mge_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int mii_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (struct mge_softc*) ;
 int FUNC_2 (struct mge_softc*) ;
 int VAR_10 ;






 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct mge_softc*) ;
 int FUNC_9 (struct mge_softc*,int) ;
 int VAR_11 ;
 int FUNC_10 (struct mge_softc*,int ) ;
 int FUNC_11 (struct mge_softc*) ;
 int FUNC_12 (struct mge_softc*) ;

__attribute__((used)) static int
FUNC_13(struct ifnet *VAR_12, u_long VAR_13, caddr_t VAR_14)
{
 struct mge_softc *VAR_15 = VAR_12->if_softc;
 struct ifreq *VAR_16 = (struct ifreq *)VAR_14;
 int VAR_17, VAR_18;
 uint32_t VAR_19;

 VAR_18 = 0;

 switch (VAR_13) {
 case 129:
  FUNC_1(VAR_15);

  if (VAR_12->if_flags & VAR_6) {
   if (VAR_12->if_drv_flags & VAR_4) {
    VAR_19 = VAR_12->if_flags ^ VAR_15->mge_if_flags;
    if (VAR_19 & VAR_5)
     FUNC_10(VAR_15,
         VAR_10);

    if (VAR_19 & VAR_3)
     FUNC_11(VAR_15);
   } else
    FUNC_8(VAR_15);
  }
  else if (VAR_12->if_drv_flags & VAR_4)
   FUNC_12(VAR_15);

  VAR_15->mge_if_flags = VAR_12->if_flags;
  FUNC_2(VAR_15);
  break;
 case 133:
 case 132:
  if (VAR_12->if_drv_flags & VAR_4) {
   FUNC_1(VAR_15);
   FUNC_11(VAR_15);
   FUNC_2(VAR_15);
  }
  break;
 case 130:
  VAR_17 = VAR_12->if_capenable ^ VAR_16->ifr_reqcap;
  if (VAR_17 & VAR_0) {
   VAR_12->if_capenable &= ~VAR_0;
   VAR_12->if_capenable |= VAR_0 & VAR_16->ifr_reqcap;
   if (VAR_12->if_capenable & VAR_2)
    VAR_12->if_hwassist = VAR_9;
   else
    VAR_12->if_hwassist = 0;
  }
  break;
 case 131:
 case 128:




  if (!VAR_15->phy_attached && (VAR_13 == 128))
   return (0);
  else if (!VAR_15->phy_attached) {
   VAR_18 = FUNC_7(VAR_12, VAR_16, &VAR_15->mge_ifmedia,
       VAR_13);
   break;
  }

  if (FUNC_0(VAR_16->ifr_media) == VAR_7
      && !(VAR_16->ifr_media & VAR_8)) {
   FUNC_3(VAR_15->dev,
       "1000baseTX half-duplex unsupported\n");
   return 0;
  }
  VAR_18 = FUNC_7(VAR_12, VAR_16, &VAR_15->mii->mii_media, VAR_13);
  break;
 default:
  VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_14);
 }
 return (VAR_18);
}
