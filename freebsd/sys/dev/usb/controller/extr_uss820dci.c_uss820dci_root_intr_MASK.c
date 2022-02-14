
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uss820dci_softc {int* sc_hub_idata; int sc_bus; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct uss820dci_softc *VAR_1)
{
 FUNC_0(9, "\n");

 FUNC_1(&VAR_1->sc_bus, VAR_0);


 VAR_1->sc_hub_idata[0] = 0x02;

 FUNC_2(&VAR_1->sc_bus, VAR_1->sc_hub_idata,
     sizeof(VAR_1->sc_hub_idata));
}
