
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_softc {int sc_callout; int sc_bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,void*,struct xhci_softc*) ;
 int FUNC_3 (struct xhci_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct xhci_softc *VAR_1 = VAR_0;
 FUNC_1(&VAR_1->sc_bus);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->sc_bus);
 FUNC_2(&VAR_1->sc_callout, 1, (void *)&FUNC_4, VAR_1);
}
