
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vr_softc {int vr_if_flags; int vr_flags; int vr_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; struct vr_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct vr_softc*,int ,int) ;
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
 int FUNC_1 (struct vr_softc*) ;
 int FUNC_2 (struct vr_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct vr_softc*) ;
 int VAR_13 ;
 int FUNC_9 (struct vr_softc*) ;
 int FUNC_10 (struct vr_softc*) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_14, u_long VAR_15, caddr_t VAR_16)
{
 struct vr_softc *VAR_17;
 struct ifreq *VAR_18;
 struct mii_data *VAR_19;
 int VAR_20, VAR_21;

 VAR_17 = VAR_14->if_softc;
 VAR_18 = (struct ifreq *)VAR_16;
 VAR_20 = 0;

 switch (VAR_15) {
 case 129:
  FUNC_1(VAR_17);
  if (VAR_14->if_flags & VAR_8) {
   if (VAR_14->if_drv_flags & VAR_6) {
    if ((VAR_14->if_flags ^ VAR_17->vr_if_flags) &
        (VAR_7 | VAR_5))
     FUNC_9(VAR_17);
   } else {
    if ((VAR_17->vr_flags & VAR_10) == 0)
     FUNC_8(VAR_17);
   }
  } else {
   if (VAR_14->if_drv_flags & VAR_6)
    FUNC_10(VAR_17);
  }
  VAR_17->vr_if_flags = VAR_14->if_flags;
  FUNC_2(VAR_17);
  break;
 case 133:
 case 132:
  FUNC_1(VAR_17);
  FUNC_9(VAR_17);
  FUNC_2(VAR_17);
  break;
 case 131:
 case 128:
  VAR_19 = FUNC_3(VAR_17->vr_miibus);
  VAR_20 = FUNC_7(VAR_14, VAR_18, &VAR_19->mii_media, VAR_15);
  break;
 case 130:
  VAR_21 = VAR_18->ifr_reqcap ^ VAR_14->if_capenable;
  if ((VAR_21 & VAR_2) != 0 &&
      (VAR_2 & VAR_14->if_capabilities) != 0) {
   VAR_14->if_capenable ^= VAR_2;
   if ((VAR_2 & VAR_14->if_capenable) != 0)
    VAR_14->if_hwassist |= VAR_9;
   else
    VAR_14->if_hwassist &= ~VAR_9;
  }
  if ((VAR_21 & VAR_1) != 0 &&
      (VAR_1 & VAR_14->if_capabilities) != 0)
   VAR_14->if_capenable ^= VAR_1;
  if ((VAR_21 & VAR_4) != 0 &&
      (VAR_14->if_capabilities & VAR_4) != 0)
   VAR_14->if_capenable ^= VAR_4;
  if ((VAR_21 & VAR_3) != 0 &&
      (VAR_14->if_capabilities & VAR_3) != 0)
   VAR_14->if_capenable ^= VAR_3;
  break;
 default:
  VAR_20 = FUNC_4(VAR_14, VAR_15, VAR_16);
  break;
 }

 return (VAR_20);
}
