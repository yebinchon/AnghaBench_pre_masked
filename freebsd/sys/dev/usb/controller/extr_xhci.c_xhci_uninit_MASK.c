
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_softc {int sc_cmd_sx; int sc_cmd_cv; int sc_bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;

void
FUNC_3(struct xhci_softc *VAR_1)
{






 FUNC_2(&VAR_1->sc_bus, &VAR_0);

 FUNC_0(&VAR_1->sc_cmd_cv);
 FUNC_1(&VAR_1->sc_cmd_sx);
}
