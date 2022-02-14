
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; struct dc_softc* if_softc; } ;
struct dc_softc {int dc_if_flags; int dc_miibus; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dc_softc*) ;
 int FUNC_2 (struct dc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_3 (struct dc_softc*) ;
 int VAR_7 ;
 int FUNC_4 (struct dc_softc*) ;
 int FUNC_5 (struct dc_softc*) ;
 struct mii_data* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*,int,scalar_t__) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int ,struct ifnet*) ;
 int FUNC_10 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct dc_softc *VAR_11 = VAR_8->if_softc;
 struct ifreq *VAR_12 = (struct ifreq *)VAR_10;
 struct mii_data *VAR_13;
 int VAR_14 = 0;

 switch (VAR_9) {
 case 129:
  FUNC_1(VAR_11);
  if (VAR_8->if_flags & VAR_6) {
   int VAR_15 = (VAR_8->if_flags ^ VAR_11->dc_if_flags) &
    (VAR_5 | VAR_3);

   if (VAR_8->if_drv_flags & VAR_4) {
    if (VAR_15)
     FUNC_4(VAR_11);
   } else {
    VAR_8->if_drv_flags &= ~VAR_4;
    FUNC_3(VAR_11);
   }
  } else {
   if (VAR_8->if_drv_flags & VAR_4)
    FUNC_5(VAR_11);
  }
  VAR_11->dc_if_flags = VAR_8->if_flags;
  FUNC_2(VAR_11);
  break;
 case 133:
 case 132:
  FUNC_1(VAR_11);
  if (VAR_8->if_drv_flags & VAR_4)
   FUNC_4(VAR_11);
  FUNC_2(VAR_11);
  break;
 case 131:
 case 128:
  VAR_13 = FUNC_6(VAR_11->dc_miibus);
  VAR_14 = FUNC_10(VAR_8, VAR_12, &VAR_13->mii_media, VAR_9);
  break;
 case 130:
  break;
 default:
  VAR_14 = FUNC_7(VAR_8, VAR_9, VAR_10);
  break;
 }

 return (VAR_14);
}
