
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct nlm_xlpge_softc {int if_flags; int * mii_bus; int link; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct nlm_xlpge_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct nlm_xlpge_softc*) ;
 int FUNC_1 (struct nlm_xlpge_softc*) ;
 struct mii_data* FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (struct nlm_xlpge_softc*) ;
 int FUNC_6 (struct nlm_xlpge_softc*) ;
 int FUNC_7 (struct nlm_xlpge_softc*) ;
 int FUNC_8 (struct nlm_xlpge_softc*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct mii_data *VAR_7;
 struct nlm_xlpge_softc *VAR_8;
 struct ifreq *VAR_9;
 int VAR_10;

 VAR_8 = VAR_4->if_softc;
 VAR_10 = 0;
 VAR_9 = (struct ifreq *)VAR_6;

 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_8);
  VAR_8->if_flags = VAR_4->if_flags;
  if (VAR_4->if_flags & VAR_1) {
   if ((VAR_4->if_drv_flags & VAR_0) == 0)
    FUNC_5(VAR_8);
   else
    FUNC_8(VAR_8);
   FUNC_6(VAR_8);
   VAR_8->link = VAR_3;
  } else {
   if (VAR_4->if_drv_flags & VAR_0)
    FUNC_7(VAR_8);
   VAR_8->link = VAR_2;
  }
  FUNC_1(VAR_8);
  VAR_10 = 0;
  break;
 case 130:
 case 128:
  if (VAR_8->mii_bus != ((void*)0)) {
   VAR_7 = FUNC_2(VAR_8->mii_bus);
   VAR_10 = FUNC_4(VAR_4, VAR_9, &VAR_7->mii_media,
       VAR_5);
  }
  break;
 default:
  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6);
  break;
 }

 return (VAR_10);
}
