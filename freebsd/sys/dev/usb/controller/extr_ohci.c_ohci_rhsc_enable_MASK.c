
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sc_eintrs; int sc_bus; } ;
typedef TYPE_1__ ohci_softc_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(ohci_softc_t *VAR_4)
{
 FUNC_0(5, "\n");

 FUNC_2(&VAR_4->sc_bus, VAR_0);

 VAR_4->sc_eintrs |= VAR_3;
 FUNC_1(VAR_4, VAR_1, VAR_3);


 FUNC_1(VAR_4, VAR_2, VAR_3);

 FUNC_3(VAR_4);
}
