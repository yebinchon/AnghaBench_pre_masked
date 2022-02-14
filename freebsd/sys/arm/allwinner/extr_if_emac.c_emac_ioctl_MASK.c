
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct emac_softc* if_softc; } ;
struct emac_softc {int emac_if_flags; int emac_miibus; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct emac_softc*) ;
 int FUNC_1 (struct emac_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct emac_softc*) ;
 int FUNC_4 (struct emac_softc*) ;
 int FUNC_5 (struct emac_softc*) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct emac_softc *VAR_7;
 struct mii_data *VAR_8;
 struct ifreq *VAR_9;
 int VAR_10 = 0;

 VAR_7 = VAR_4->if_softc;
 VAR_9 = (struct ifreq *)VAR_6;

 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_7);
  if (VAR_4->if_flags & VAR_3) {
   if ((VAR_4->if_drv_flags & VAR_1) != 0) {
    if ((VAR_4->if_flags ^ VAR_7->emac_if_flags) &
        (VAR_2 | VAR_0))
     FUNC_4(VAR_7);
   } else
    FUNC_3(VAR_7);
  } else {
   if ((VAR_4->if_drv_flags & VAR_1) != 0)
    FUNC_5(VAR_7);
  }
  VAR_7->emac_if_flags = VAR_4->if_flags;
  FUNC_1(VAR_7);
  break;
 case 132:
 case 131:
  FUNC_0(VAR_7);
  if (VAR_4->if_drv_flags & VAR_1) {
   FUNC_4(VAR_7);
  }
  FUNC_1(VAR_7);
  break;
 case 130:
 case 128:
  VAR_8 = FUNC_2(VAR_7->emac_miibus);
  VAR_10 = FUNC_7(VAR_4, VAR_9, &VAR_8->mii_media, VAR_5);
  break;
 default:
  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_6);
  break;
 }
 return (VAR_10);
}
