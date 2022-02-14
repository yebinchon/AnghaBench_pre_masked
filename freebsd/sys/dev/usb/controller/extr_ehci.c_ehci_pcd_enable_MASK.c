
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sc_eintrs; int sc_bus; } ;
typedef TYPE_1__ ehci_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ehci_softc_t *VAR_4)
{
 FUNC_1(&VAR_4->sc_bus, VAR_3);

 VAR_4->sc_eintrs |= VAR_0;
 FUNC_0(VAR_4, VAR_1, VAR_4->sc_eintrs);


 FUNC_0(VAR_4, VAR_2, VAR_0);

 FUNC_2(VAR_4);
}
