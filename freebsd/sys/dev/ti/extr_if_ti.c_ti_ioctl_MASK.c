
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ti_softc {int ti_if_flags; int ifmedia; } ;
struct ti_cmd_desc {int dummy; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct ti_softc* if_softc; } ;
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
 int FUNC_0 (int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_1 (struct ti_softc*) ;
 int FUNC_2 (struct ti_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_6 (struct ti_softc*) ;
 int FUNC_7 (struct ti_softc*) ;
 int FUNC_8 (struct ti_softc*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_14, u_long VAR_15, caddr_t VAR_16)
{
 struct ti_softc *VAR_17 = VAR_14->if_softc;
 struct ifreq *VAR_18 = (struct ifreq *) VAR_16;
 struct ti_cmd_desc VAR_19;
 int VAR_20, VAR_21 = 0;

 switch (VAR_15) {
 case 128:
  FUNC_1(VAR_17);
  if (VAR_18->ifr_mtu < VAR_1 || VAR_18->ifr_mtu > VAR_13)
   VAR_21 = VAR_0;
  else {
   VAR_14->if_mtu = VAR_18->ifr_mtu;
   if (VAR_14->if_drv_flags & VAR_6) {
    VAR_14->if_drv_flags &= ~VAR_6;
    FUNC_6(VAR_17);
   }
  }
  FUNC_2(VAR_17);
  break;
 case 130:
  FUNC_1(VAR_17);
  if (VAR_14->if_flags & VAR_8) {
   if (VAR_14->if_drv_flags & VAR_6 &&
       VAR_14->if_flags & VAR_7 &&
       !(VAR_17->ti_if_flags & VAR_7)) {
    FUNC_0(VAR_11,
        VAR_10, 0);
   } else if (VAR_14->if_drv_flags & VAR_6 &&
       !(VAR_14->if_flags & VAR_7) &&
       VAR_17->ti_if_flags & VAR_7) {
    FUNC_0(VAR_11,
        VAR_9, 0);
   } else
    FUNC_6(VAR_17);
  } else {
   if (VAR_14->if_drv_flags & VAR_6) {
    FUNC_8(VAR_17);
   }
  }
  VAR_17->ti_if_flags = VAR_14->if_flags;
  FUNC_2(VAR_17);
  break;
 case 134:
 case 133:
  FUNC_1(VAR_17);
  if (VAR_14->if_drv_flags & VAR_6)
   FUNC_7(VAR_17);
  FUNC_2(VAR_17);
  break;
 case 129:
 case 132:
  VAR_21 = FUNC_5(VAR_14, VAR_18, &VAR_17->ifmedia, VAR_15);
  break;
 case 131:
  FUNC_1(VAR_17);
  VAR_20 = VAR_18->ifr_reqcap ^ VAR_14->if_capenable;
  if ((VAR_20 & VAR_3) != 0 &&
      (VAR_14->if_capabilities & VAR_3) != 0) {
   VAR_14->if_capenable ^= VAR_3;
   if ((VAR_14->if_capenable & VAR_3) != 0)
    VAR_14->if_hwassist |= VAR_12;
                        else
    VAR_14->if_hwassist &= ~VAR_12;
                }
  if ((VAR_20 & VAR_2) != 0 &&
      (VAR_14->if_capabilities & VAR_2) != 0)
   VAR_14->if_capenable ^= VAR_2;
  if ((VAR_20 & VAR_5) != 0 &&
      (VAR_14->if_capabilities & VAR_5) != 0)
                        VAR_14->if_capenable ^= VAR_5;
  if ((VAR_20 & VAR_4) != 0 &&
      (VAR_14->if_capabilities & VAR_4) != 0)
   VAR_14->if_capenable ^= VAR_4;
  if ((VAR_20 & (VAR_3 | VAR_2 |
      VAR_5)) != 0) {
   if (VAR_14->if_drv_flags & VAR_6) {
    VAR_14->if_drv_flags &= ~VAR_6;
    FUNC_6(VAR_17);
   }
  }
  FUNC_2(VAR_17);
  FUNC_3(VAR_14);
  break;
 default:
  VAR_21 = FUNC_4(VAR_14, VAR_15, VAR_16);
  break;
 }

 return (VAR_21);
}
