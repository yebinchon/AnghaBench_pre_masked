
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct xl_softc {int xl_if_flags; int xl_flags; int xl_fhandle; int xl_ftag; int ifmedia; int * xl_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; struct xl_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct xl_softc*,int ,int) ;
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
 int FUNC_1 (struct xl_softc*) ;
 int FUNC_2 (struct xl_softc*) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct mii_data* FUNC_4 (int *) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ,struct ifnet*) ;
 int FUNC_8 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_9 (struct xl_softc*) ;
 int VAR_14 ;
 int FUNC_10 (struct xl_softc*) ;
 int FUNC_11 (struct xl_softc*) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_15, u_long VAR_16, caddr_t VAR_17)
{
 struct xl_softc *VAR_18 = VAR_15->if_softc;
 struct ifreq *VAR_19 = (struct ifreq *) VAR_17;
 int VAR_20 = 0, VAR_21;
 struct mii_data *VAR_22 = ((void*)0);

 switch (VAR_16) {
 case 129:
  FUNC_1(VAR_18);
  if (VAR_15->if_flags & VAR_7) {
   if (VAR_15->if_drv_flags & VAR_5 &&
       (VAR_15->if_flags ^ VAR_18->xl_if_flags) &
       (VAR_6 | VAR_4))
    FUNC_10(VAR_18);
   else
    FUNC_9(VAR_18);
  } else {
   if (VAR_15->if_drv_flags & VAR_5)
    FUNC_11(VAR_18);
  }
  VAR_18->xl_if_flags = VAR_15->if_flags;
  FUNC_2(VAR_18);
  break;
 case 133:
 case 132:

  FUNC_1(VAR_18);
  if (VAR_15->if_drv_flags & VAR_5)
   FUNC_10(VAR_18);
  FUNC_2(VAR_18);
  break;
 case 131:
 case 128:
  if (VAR_18->xl_miibus != ((void*)0))
   VAR_22 = FUNC_4(VAR_18->xl_miibus);
  if (VAR_22 == ((void*)0))
   VAR_20 = FUNC_8(VAR_15, VAR_19,
       &VAR_18->ifmedia, VAR_16);
  else
   VAR_20 = FUNC_8(VAR_15, VAR_19,
       &VAR_22->mii_media, VAR_16);
  break;
 case 130:
  VAR_21 = VAR_19->ifr_reqcap ^ VAR_15->if_capenable;
  FUNC_1(VAR_18);
  if ((VAR_21 & VAR_2) != 0 &&
      (VAR_15->if_capabilities & VAR_2) != 0) {
   VAR_15->if_capenable ^= VAR_2;
   if ((VAR_15->if_capenable & VAR_2) != 0)
    VAR_15->if_hwassist |= VAR_8;
   else
    VAR_15->if_hwassist &= ~VAR_8;
  }
  if ((VAR_21 & VAR_1) != 0 &&
      (VAR_15->if_capabilities & VAR_1) != 0)
   VAR_15->if_capenable ^= VAR_1;
  if ((VAR_21 & VAR_3) != 0 &&
      (VAR_15->if_capabilities & VAR_3) != 0)
   VAR_15->if_capenable ^= VAR_3;
  FUNC_2(VAR_18);
  break;
 default:
  VAR_20 = FUNC_5(VAR_15, VAR_16, VAR_17);
  break;
 }

 return (VAR_20);
}
