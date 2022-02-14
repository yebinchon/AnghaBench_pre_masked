
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int* sc_hub_idata; int sc_noport; int sc_bus; } ;
typedef TYPE_1__ ehci_softc_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_6(ehci_softc_t *VAR_2)
{
 uint16_t VAR_3;
 uint16_t VAR_4;

 FUNC_3(&VAR_2->sc_bus, VAR_1);


 FUNC_4(VAR_2->sc_hub_idata, 0, sizeof(VAR_2->sc_hub_idata));


 VAR_4 = (VAR_2->sc_noport + 1);
 if (VAR_4 > (8 * sizeof(VAR_2->sc_hub_idata))) {
  VAR_4 = (8 * sizeof(VAR_2->sc_hub_idata));
 }
 for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++) {

  if (FUNC_2(VAR_2, FUNC_1(VAR_3)) & VAR_0) {
   VAR_2->sc_hub_idata[VAR_3 / 8] |= 1 << (VAR_3 % 8);
   FUNC_0("port %d changed\n", VAR_3);
  }
 }
 FUNC_5(&VAR_2->sc_bus, VAR_2->sc_hub_idata,
     sizeof(VAR_2->sc_hub_idata));
}
