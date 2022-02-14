
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usie_softc {int sc_mtx; int * sc_if_xfer; } ;
struct ifnet {int if_drv_flags; struct usie_softc* if_softc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_2)
{
 struct usie_softc *VAR_3 = VAR_2->if_softc;

 if (!(VAR_2->if_drv_flags & VAR_0)) {
  FUNC_0("Not running\n");
  return;
 }
 FUNC_2(&VAR_3->sc_mtx);
 FUNC_4(VAR_3->sc_if_xfer[VAR_1]);
 FUNC_3(&VAR_3->sc_mtx);

 FUNC_1(3, "interface started\n");
}
