
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct smc_softc {int (* smc_mii_mediaioctl ) (struct smc_softc*,struct ifreq*,int) ;int (* smc_mii_mediachg ) (struct smc_softc*) ;} ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct smc_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct smc_softc*) ;
 int FUNC_1 (struct smc_softc*) ;
 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct smc_softc*) ;
 int FUNC_4 (struct smc_softc*) ;
 int FUNC_5 (struct smc_softc*) ;
 int FUNC_6 (struct smc_softc*,struct ifreq*,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct smc_softc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->if_softc;
 VAR_7 = 0;

 switch (VAR_4) {
 case 129:
  if ((VAR_3->if_flags & VAR_2) == 0 &&
      (VAR_3->if_drv_flags & VAR_1) != 0) {
   FUNC_0(VAR_6);
   FUNC_4(VAR_6);
   FUNC_1(VAR_6);
  } else {
   FUNC_3(VAR_6);
   if (VAR_6->smc_mii_mediachg != ((void*)0))
    VAR_6->smc_mii_mediachg(VAR_6);
  }
  break;

 case 132:
 case 131:





  VAR_7 = VAR_0;
  break;

 case 130:
 case 128:
  if (VAR_6->smc_mii_mediaioctl == ((void*)0)) {
   VAR_7 = VAR_0;
   break;
  }
  VAR_6->smc_mii_mediaioctl(VAR_6, (struct ifreq *)VAR_5, VAR_4);
  break;

 default:
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
  break;
 }

 return (VAR_7);
}
