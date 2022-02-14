
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhso_softc {int sc_mtx; int * sc_if_xfer; } ;
struct ifnet {int if_drv_flags; struct uhso_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_3)
{
 struct uhso_softc *VAR_4 = VAR_3->if_softc;

 if ((VAR_3->if_drv_flags & VAR_0) == 0) {
  FUNC_0(1, "Not running\n");
  return;
 }

 FUNC_1(&VAR_4->sc_mtx);
 FUNC_3(VAR_4->sc_if_xfer[VAR_1]);
 FUNC_3(VAR_4->sc_if_xfer[VAR_2]);
 FUNC_2(&VAR_4->sc_mtx);
 FUNC_0(3, "interface started\n");
}
