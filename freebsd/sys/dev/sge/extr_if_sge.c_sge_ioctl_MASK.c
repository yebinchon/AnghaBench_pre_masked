
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sge_softc {int sge_if_flags; int sge_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; struct sge_softc* if_softc; } ;
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
 int FUNC_0 (struct sge_softc*) ;
 int FUNC_1 (struct sge_softc*) ;






 int FUNC_2 (struct ifnet*) ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_6 (struct sge_softc*) ;
 int FUNC_7 (struct sge_softc*) ;
 int FUNC_8 (struct sge_softc*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_12, u_long VAR_13, caddr_t VAR_14)
{
 struct sge_softc *VAR_15;
 struct ifreq *VAR_16;
 struct mii_data *VAR_17;
 int VAR_18 = 0, VAR_19, VAR_20;

 VAR_15 = VAR_12->if_softc;
 VAR_16 = (struct ifreq *)VAR_14;

 switch(VAR_13) {
 case 129:
  FUNC_0(VAR_15);
  if ((VAR_12->if_flags & VAR_10) != 0) {
   if ((VAR_12->if_drv_flags & VAR_8) != 0 &&
       ((VAR_12->if_flags ^ VAR_15->sge_if_flags) &
       (VAR_9 | VAR_7)) != 0)
    FUNC_7(VAR_15);
   else
    FUNC_6(VAR_15);
  } else if ((VAR_12->if_drv_flags & VAR_8) != 0)
   FUNC_8(VAR_15);
  VAR_15->sge_if_flags = VAR_12->if_flags;
  FUNC_1(VAR_15);
  break;
 case 130:
  FUNC_0(VAR_15);
  VAR_20 = 0;
  VAR_19 = VAR_16->ifr_reqcap ^ VAR_12->if_capenable;
  if ((VAR_19 & VAR_3) != 0 &&
      (VAR_12->if_capabilities & VAR_3) != 0) {
   VAR_12->if_capenable ^= VAR_3;
   if ((VAR_12->if_capenable & VAR_3) != 0)
    VAR_12->if_hwassist |= VAR_11;
   else
    VAR_12->if_hwassist &= ~VAR_11;
  }
  if ((VAR_19 & VAR_1) != 0 &&
      (VAR_12->if_capabilities & VAR_1) != 0)
   VAR_12->if_capenable ^= VAR_1;
  if ((VAR_19 & VAR_4) != 0 &&
      (VAR_12->if_capabilities & VAR_4) != 0)
   VAR_12->if_capenable ^= VAR_4;
  if ((VAR_19 & VAR_2) != 0 &&
      (VAR_12->if_capabilities & VAR_2) != 0) {
   VAR_12->if_capenable ^= VAR_2;
   if ((VAR_12->if_capenable & VAR_2) != 0)
    VAR_12->if_hwassist |= VAR_0;
   else
    VAR_12->if_hwassist &= ~VAR_0;
  }
  if ((VAR_19 & VAR_6) != 0 &&
      (VAR_12->if_capabilities & VAR_6) != 0)
   VAR_12->if_capenable ^= VAR_6;
  if ((VAR_19 & VAR_5) != 0 &&
      (VAR_12->if_capabilities & VAR_5) != 0) {




   VAR_12->if_capenable ^= VAR_5;
   if ((VAR_12->if_capenable & VAR_5) == 0)
    VAR_12->if_capenable &=
        ~(VAR_6 | VAR_4);
   VAR_20 = 1;
  }
  if (VAR_20 > 0 && (VAR_12->if_drv_flags & VAR_8) != 0) {
   VAR_12->if_drv_flags &= ~VAR_8;
   FUNC_6(VAR_15);
  }
  FUNC_1(VAR_15);
  FUNC_2(VAR_12);
  break;
 case 133:
 case 132:
  FUNC_0(VAR_15);
  if ((VAR_12->if_drv_flags & VAR_8) != 0)
   FUNC_7(VAR_15);
  FUNC_1(VAR_15);
  break;
 case 131:
 case 128:
  VAR_17 = FUNC_3(VAR_15->sge_miibus);
  VAR_18 = FUNC_5(VAR_12, VAR_16, &VAR_17->mii_media, VAR_13);
  break;
 default:
  VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_14);
  break;
 }

 return (VAR_18);
}
