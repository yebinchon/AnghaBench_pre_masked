
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct are_softc* if_softc; } ;
struct are_softc {int are_if_flags; int are_ifmedia; int are_miibus; int are_detach; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct are_softc*) ;
 int FUNC_1 (struct are_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_2 (struct are_softc*) ;
 int FUNC_3 (struct are_softc*) ;
 int FUNC_4 (struct are_softc*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct are_softc *VAR_7 = VAR_4->if_softc;
 struct ifreq *VAR_8 = (struct ifreq *) VAR_6;



 int VAR_9;

 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_7);
  if (VAR_4->if_flags & VAR_3) {
   if (VAR_4->if_drv_flags & VAR_1) {
    if ((VAR_4->if_flags ^ VAR_7->are_if_flags) &
        (VAR_2 | VAR_0))
     FUNC_3(VAR_7);
   } else {
    if (VAR_7->are_detach == 0)
     FUNC_2(VAR_7);
   }
  } else {
   if (VAR_4->if_drv_flags & VAR_1)
    FUNC_4(VAR_7);
  }
  VAR_7->are_if_flags = VAR_4->if_flags;
  FUNC_1(VAR_7);
  VAR_9 = 0;
  break;
 case 133:
 case 132:
  FUNC_0(VAR_7);
  FUNC_3(VAR_7);
  FUNC_1(VAR_7);
  VAR_9 = 0;
  break;
 case 131:
 case 128:




  VAR_9 = FUNC_7(VAR_4, VAR_8, &VAR_7->are_ifmedia, VAR_5);

  break;
 case 130:
  VAR_9 = 0;
  break;
 default:
  VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_6);
  break;
 }

 return (VAR_9);
}
