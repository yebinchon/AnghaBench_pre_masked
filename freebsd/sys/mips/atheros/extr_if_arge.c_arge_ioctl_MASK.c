
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; struct arge_softc* if_softc; } ;
struct arge_softc {int arge_if_flags; int arge_ifmedia; int arge_miibus; int arge_detach; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct arge_softc*) ;
 int FUNC_1 (struct arge_softc*) ;
 int FUNC_2 (struct arge_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_3 (struct arge_softc*) ;
 int VAR_7 ;
 int FUNC_4 (struct arge_softc*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,struct ifnet*) ;
 int FUNC_9 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct arge_softc *VAR_11 = VAR_8->if_softc;
 struct ifreq *VAR_12 = (struct ifreq *) VAR_10;
 struct mii_data *VAR_13;
 int VAR_14;




 switch (VAR_9) {
 case 129:
  FUNC_0(VAR_11);
  if ((VAR_8->if_flags & VAR_6) != 0) {
   if ((VAR_8->if_drv_flags & VAR_4) != 0) {
    if (((VAR_8->if_flags ^ VAR_11->arge_if_flags)
        & (VAR_5 | VAR_3)) != 0) {

    }

   } else {
    if (!VAR_11->arge_detach)
     FUNC_3(VAR_11);
   }
  } else if ((VAR_8->if_drv_flags & VAR_4) != 0) {
   VAR_8->if_drv_flags &= ~VAR_4;
   FUNC_4(VAR_11);
  }
  VAR_11->arge_if_flags = VAR_8->if_flags;
  FUNC_1(VAR_11);
  VAR_14 = 0;
  break;
 case 133:
 case 132:

  VAR_14 = 0;
  break;
 case 131:
 case 128:
  if (VAR_11->arge_miibus) {
   VAR_13 = FUNC_5(VAR_11->arge_miibus);
   VAR_14 = FUNC_9(VAR_8, VAR_12, &VAR_13->mii_media,
       VAR_9);
  }
  else
   VAR_14 = FUNC_9(VAR_8, VAR_12, &VAR_11->arge_ifmedia,
       VAR_9);
  break;
 case 130:
 default:
  VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_10);
  break;
 }

 return (VAR_14);
}
