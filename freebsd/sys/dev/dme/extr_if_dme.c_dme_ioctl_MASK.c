
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct dme_softc* if_softc; } ;
struct dme_softc {int dme_miibus; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct dme_softc*) ;
 int FUNC_1 (struct dme_softc*) ;
 int VAR_0 ;
 int VAR_1 ;



 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct dme_softc*) ;
 int FUNC_4 (struct dme_softc*) ;
 int FUNC_5 (struct dme_softc*) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct dme_softc *VAR_5;
 struct mii_data *VAR_6;
 struct ifreq *VAR_7;
 int VAR_8 = 0;

 VAR_5 = VAR_2->if_softc;
 VAR_7 = (struct ifreq *)VAR_4;

 switch (VAR_3) {
 case 129:




  FUNC_0(VAR_5);
  if (VAR_2->if_flags & VAR_1) {
   if ((VAR_2->if_drv_flags & VAR_0) == 0) {
    FUNC_3(VAR_5);
   }
  } else {
   if ((VAR_2->if_drv_flags & VAR_0) != 0) {
    FUNC_5(VAR_5);
   }
  }
  FUNC_4(VAR_5);
  FUNC_1(VAR_5);
  break;
 case 130:
 case 128:
  VAR_6 = FUNC_2(VAR_5->dme_miibus);
  VAR_8 = FUNC_7(VAR_2, VAR_7, &VAR_6->mii_media, VAR_3);
  break;
 default:
  VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4);
  break;
 }
 return (VAR_8);
}
