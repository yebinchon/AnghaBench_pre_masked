
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhso_softc {int sc_mtx; struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uhso_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct uhso_softc *VAR_3 = VAR_2;
 struct ifnet *VAR_4 = VAR_3->sc_ifp;

 FUNC_1(&VAR_3->sc_mtx);
 FUNC_3(VAR_3);
 VAR_4 = VAR_3->sc_ifp;
 VAR_4->if_flags |= VAR_1;
 VAR_4->if_drv_flags |= VAR_0;
 FUNC_2(&VAR_3->sc_mtx);

 FUNC_0(2, "ifnet initialized\n");
}
