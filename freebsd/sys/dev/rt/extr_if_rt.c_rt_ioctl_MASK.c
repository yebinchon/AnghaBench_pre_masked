
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct rt_softc {int if_flags; int rt_ifmedia; int rt_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct rt_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt_softc*) ;
 int FUNC_1 (struct rt_softc*) ;



 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (struct rt_softc*) ;
 int FUNC_6 (struct rt_softc*) ;
 int FUNC_7 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct rt_softc *VAR_6;
 struct ifreq *VAR_7;



 int VAR_8, VAR_9;

 VAR_6 = VAR_3->if_softc;
 VAR_7 = (struct ifreq *) VAR_5;

 VAR_8 = 0;

 switch (VAR_4) {
 case 129:
  VAR_9 = 0;
  FUNC_0(VAR_6);
  if (VAR_3->if_flags & VAR_2) {
   if (VAR_3->if_drv_flags & VAR_0) {
    if ((VAR_3->if_flags ^ VAR_6->if_flags) &
        VAR_1)
     FUNC_7(VAR_3);
   } else {
    FUNC_5(VAR_6);
    VAR_9 = 1;
   }
  } else {
   if (VAR_3->if_drv_flags & VAR_0)
    FUNC_6(VAR_6);
  }
  VAR_6->if_flags = VAR_3->if_flags;
  FUNC_1(VAR_6);
  break;
 case 130:
 case 128:




  VAR_8 = FUNC_4(VAR_3, VAR_7, &VAR_6->rt_ifmedia, VAR_4);

  break;
 default:
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);
  break;
 }
 return (VAR_8);
}
