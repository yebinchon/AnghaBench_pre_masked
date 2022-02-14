
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sis_softc {int sis_if_flags; int sis_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; struct sis_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct sis_softc*,int ,int) ;
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
 int FUNC_1 (struct sis_softc*) ;
 int FUNC_2 (struct sis_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct sis_softc*) ;
 int VAR_10 ;
 int FUNC_9 (struct sis_softc*) ;
 int FUNC_10 (struct sis_softc*) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_11, u_long VAR_12, caddr_t VAR_13)
{
 struct sis_softc *VAR_14 = VAR_11->if_softc;
 struct ifreq *VAR_15 = (struct ifreq *) VAR_13;
 struct mii_data *VAR_16;
 int VAR_17 = 0, VAR_18;

 switch (VAR_12) {
 case 129:
  FUNC_1(VAR_14);
  if (VAR_11->if_flags & VAR_8) {
   if ((VAR_11->if_drv_flags & VAR_6) != 0 &&
       ((VAR_11->if_flags ^ VAR_14->sis_if_flags) &
       (VAR_7 | VAR_5)) != 0)
    FUNC_9(VAR_14);
   else
    FUNC_8(VAR_14);
  } else if (VAR_11->if_drv_flags & VAR_6)
   FUNC_10(VAR_14);
  VAR_14->sis_if_flags = VAR_11->if_flags;
  FUNC_2(VAR_14);
  break;
 case 133:
 case 132:
  FUNC_1(VAR_14);
  if ((VAR_11->if_drv_flags & VAR_6) != 0)
   FUNC_9(VAR_14);
  FUNC_2(VAR_14);
  break;
 case 131:
 case 128:
  VAR_16 = FUNC_3(VAR_14->sis_miibus);
  VAR_17 = FUNC_7(VAR_11, VAR_15, &VAR_16->mii_media, VAR_12);
  break;
 case 130:
  FUNC_1(VAR_14);
  VAR_18 = VAR_15->ifr_reqcap ^ VAR_11->if_capenable;
  if ((VAR_18 & VAR_1) != 0 &&
      (VAR_11->if_capabilities & VAR_1) != 0) {
   if ((VAR_18 & VAR_4) != 0)
    VAR_11->if_capenable ^= VAR_4;
   if ((VAR_18 & VAR_3) != 0)
    VAR_11->if_capenable ^= VAR_3;
   if ((VAR_18 & VAR_2) != 0)
    VAR_11->if_capenable ^= VAR_2;
  }
  FUNC_2(VAR_14);
  break;
 default:
  VAR_17 = FUNC_4(VAR_11, VAR_12, VAR_13);
  break;
 }

 return (VAR_17);
}
