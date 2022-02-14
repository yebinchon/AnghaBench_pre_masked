
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct uhso_softc {int sc_mtx; } ;
struct ifnet {int if_flags; int if_drv_flags; struct uhso_softc* if_softc; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uhso_softc*) ;
 int FUNC_3 (struct uhso_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct uhso_softc *VAR_6;

 VAR_6 = VAR_3->if_softc;

 switch (VAR_4) {
 case 128:
  if (VAR_3->if_flags & VAR_2) {
   if (!(VAR_3->if_drv_flags & VAR_1)) {
    FUNC_2(VAR_6);
   }
  }
  else {
   if (VAR_3->if_drv_flags & VAR_1) {
    FUNC_0(&VAR_6->sc_mtx);
    FUNC_3(VAR_6);
    FUNC_1(&VAR_6->sc_mtx);
   }
  }
  break;
 case 129:
 case 131:
 case 130:
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
