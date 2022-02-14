
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct bfe_softc* if_softc; } ;
struct bfe_softc {int bfe_flags; int bfe_miibus; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bfe_softc*) ;
 int FUNC_1 (struct bfe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_2 (struct bfe_softc*) ;
 int FUNC_3 (struct bfe_softc*) ;
 int FUNC_4 (struct bfe_softc*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct bfe_softc *VAR_6 = VAR_3->if_softc;
 struct ifreq *VAR_7 = (struct ifreq *) VAR_5;
 struct mii_data *VAR_8;
 int VAR_9 = 0;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_6);
  if (VAR_3->if_flags & VAR_2) {
   if (VAR_3->if_drv_flags & VAR_1)
    FUNC_3(VAR_6);
   else if ((VAR_6->bfe_flags & VAR_0) == 0)
    FUNC_2(VAR_6);
  } else if (VAR_3->if_drv_flags & VAR_1)
   FUNC_4(VAR_6);
  FUNC_1(VAR_6);
  break;
 case 132:
 case 131:
  FUNC_0(VAR_6);
  if (VAR_3->if_drv_flags & VAR_1)
   FUNC_3(VAR_6);
  FUNC_1(VAR_6);
  break;
 case 130:
 case 128:
  VAR_8 = FUNC_5(VAR_6->bfe_miibus);
  VAR_9 = FUNC_7(VAR_3, VAR_7, &VAR_8->mii_media, VAR_4);
  break;
 default:
  VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_5);
  break;
 }

 return (VAR_9);
}
