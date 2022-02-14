
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct my_softc {int ifmedia; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct my_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct my_softc*) ;
 int FUNC_1 (struct my_softc*) ;





 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_4 (struct my_softc*) ;
 int FUNC_5 (struct my_softc*) ;
 int FUNC_6 (struct my_softc*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet * VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct my_softc *VAR_5 = VAR_2->if_softc;
 struct ifreq *VAR_6 = (struct ifreq *) VAR_4;
 int VAR_7;

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_5);
  if (VAR_2->if_flags & VAR_1)
   FUNC_4(VAR_5);
  else if (VAR_2->if_drv_flags & VAR_0)
   FUNC_6(VAR_5);
  FUNC_1(VAR_5);
  VAR_7 = 0;
  break;
 case 132:
 case 131:
  FUNC_0(VAR_5);
  FUNC_5(VAR_5);
  FUNC_1(VAR_5);
  VAR_7 = 0;
  break;
 case 130:
 case 128:
  VAR_7 = FUNC_3(VAR_2, VAR_6, &VAR_5->ifmedia, VAR_3);
  break;
 default:
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 }
 return (VAR_7);
}
