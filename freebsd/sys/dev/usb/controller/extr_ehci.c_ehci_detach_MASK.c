
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sc_tmo_poll; int sc_tmo_pcd; int sc_bus; } ;
typedef TYPE_1__ ehci_softc_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

void
FUNC_8(ehci_softc_t *VAR_2)
{
 FUNC_2(&VAR_2->sc_bus);

 FUNC_6(&VAR_2->sc_tmo_pcd);
 FUNC_6(&VAR_2->sc_tmo_poll);

 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_3(&VAR_2->sc_bus);

 if (FUNC_4(VAR_2)) {
  FUNC_0("reset failed!\n");
 }


 FUNC_7(((void*)0), VAR_1 / 20);

 FUNC_5(&VAR_2->sc_tmo_pcd);
 FUNC_5(&VAR_2->sc_tmo_poll);
}
