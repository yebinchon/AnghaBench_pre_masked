
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vge_softc {int vge_flags; int vge_if_flags; int vge_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct vge_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct vge_softc*,int ,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int) ;
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







 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct vge_softc*) ;
 int FUNC_3 (struct vge_softc*) ;
 int FUNC_4 (struct ifnet*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,struct ifnet*) ;
 int FUNC_9 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_10 (struct vge_softc*) ;
 int VAR_24 ;
 int FUNC_11 (struct vge_softc*) ;
 int FUNC_12 (struct vge_softc*) ;
 int FUNC_13 (struct vge_softc*) ;

__attribute__((used)) static int
FUNC_14(struct ifnet *VAR_25, u_long VAR_26, caddr_t VAR_27)
{
 struct vge_softc *VAR_28 = VAR_25->if_softc;
 struct ifreq *VAR_29 = (struct ifreq *) VAR_27;
 struct mii_data *VAR_30;
 int VAR_31 = 0, VAR_32;

 switch (VAR_26) {
 case 128:
  FUNC_2(VAR_28);
  if (VAR_29->ifr_mtu < VAR_1 || VAR_29->ifr_mtu > VAR_23)
   VAR_31 = VAR_0;
  else if (VAR_25->if_mtu != VAR_29->ifr_mtu) {
   if (VAR_29->ifr_mtu > VAR_2 &&
       (VAR_28->vge_flags & VAR_18) == 0)
    VAR_31 = VAR_0;
   else
    VAR_25->if_mtu = VAR_29->ifr_mtu;
  }
  FUNC_3(VAR_28);
  break;
 case 130:
  FUNC_2(VAR_28);
  if ((VAR_25->if_flags & VAR_14) != 0) {
   if ((VAR_25->if_drv_flags & VAR_12) != 0 &&
       ((VAR_25->if_flags ^ VAR_28->vge_if_flags) &
       (VAR_13 | VAR_11)) != 0)
    FUNC_11(VAR_28);
   else
    FUNC_10(VAR_28);
  } else if ((VAR_25->if_drv_flags & VAR_12) != 0)
   FUNC_13(VAR_28);
  VAR_28->vge_if_flags = VAR_25->if_flags;
  FUNC_3(VAR_28);
  break;
 case 134:
 case 133:
  FUNC_2(VAR_28);
  if (VAR_25->if_drv_flags & VAR_12)
   FUNC_11(VAR_28);
  FUNC_3(VAR_28);
  break;
 case 132:
 case 129:
  VAR_30 = FUNC_5(VAR_28->vge_miibus);
  VAR_31 = FUNC_9(VAR_25, VAR_29, &VAR_30->mii_media, VAR_26);
  break;
 case 131:
  VAR_32 = VAR_29->ifr_reqcap ^ VAR_25->if_capenable;
  FUNC_2(VAR_28);
  if ((VAR_32 & VAR_5) != 0 &&
      (VAR_25->if_capabilities & VAR_5) != 0) {
   VAR_25->if_capenable ^= VAR_5;
   if ((VAR_25->if_capenable & VAR_5) != 0)
    VAR_25->if_hwassist |= VAR_17;
   else
    VAR_25->if_hwassist &= ~VAR_17;
  }
  if ((VAR_32 & VAR_4) != 0 &&
      (VAR_25->if_capabilities & VAR_4) != 0)
   VAR_25->if_capenable ^= VAR_4;
  if ((VAR_32 & VAR_10) != 0 &&
      (VAR_25->if_capabilities & VAR_10) != 0)
   VAR_25->if_capenable ^= VAR_10;
  if ((VAR_32 & VAR_9) != 0 &&
      (VAR_25->if_capabilities & VAR_9) != 0)
   VAR_25->if_capenable ^= VAR_9;
  if ((VAR_32 & VAR_8) != 0 &&
      (VAR_25->if_capabilities & VAR_8) != 0)
   VAR_25->if_capenable ^= VAR_8;
  if ((VAR_32 & VAR_6) != 0 &&
      (VAR_25->if_capabilities & VAR_6) != 0)
   VAR_25->if_capenable ^= VAR_6;
  if ((VAR_32 & VAR_7) != 0 &&
      (VAR_7 & VAR_25->if_capabilities) != 0) {
   VAR_25->if_capenable ^= VAR_7;
   FUNC_12(VAR_28);
  }
  FUNC_3(VAR_28);
  FUNC_4(VAR_25);
  break;
 default:
  VAR_31 = FUNC_6(VAR_25, VAR_26, VAR_27);
  break;
 }

 return (VAR_31);
}
