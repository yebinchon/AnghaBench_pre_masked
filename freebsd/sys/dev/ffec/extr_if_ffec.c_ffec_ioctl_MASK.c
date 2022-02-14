
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; struct ffec_softc* if_softc; } ;
struct ffec_softc {int if_flags; struct mii_data* mii_softc; int is_detaching; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct ffec_softc*) ;
 int FUNC_1 (struct ffec_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct ffec_softc*) ;
 int FUNC_4 (struct ffec_softc*) ;
 int FUNC_5 (struct ffec_softc*) ;
 int FUNC_6 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7)
{
 struct ffec_softc *VAR_8;
 struct mii_data *VAR_9;
 struct ifreq *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = VAR_5->if_softc;
 VAR_10 = (struct ifreq *)VAR_7;

 VAR_12 = 0;
 switch (VAR_6) {
 case 129:
  FUNC_0(VAR_8);
  if (VAR_5->if_flags & VAR_4) {
   if (VAR_5->if_drv_flags & VAR_2) {
    if ((VAR_5->if_flags ^ VAR_8->if_flags) &
        (VAR_3 | VAR_1))
     FUNC_4(VAR_8);
   } else {
    if (!VAR_8->is_detaching)
     FUNC_3(VAR_8);
   }
  } else {
   if (VAR_5->if_drv_flags & VAR_2)
    FUNC_5(VAR_8);
  }
  VAR_8->if_flags = VAR_5->if_flags;
  FUNC_1(VAR_8);
  break;

 case 133:
 case 132:
  if (VAR_5->if_drv_flags & VAR_2) {
   FUNC_0(VAR_8);
   FUNC_4(VAR_8);
   FUNC_1(VAR_8);
  }
  break;

 case 128:
 case 131:
  VAR_9 = VAR_8->mii_softc;
  VAR_12 = FUNC_6(VAR_5, VAR_10, &VAR_9->mii_media, VAR_6);
  break;

 case 130:
  VAR_11 = VAR_5->if_capenable ^ VAR_10->ifr_reqcap;
  if (VAR_11 & VAR_0) {

   VAR_5->if_capenable ^= VAR_0;
  }
  break;

 default:
  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7);
  break;
 }

 return (VAR_12);
}
