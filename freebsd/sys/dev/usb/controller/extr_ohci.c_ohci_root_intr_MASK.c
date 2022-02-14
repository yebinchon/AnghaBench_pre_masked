
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* sc_hub_idata; int sc_noport; int sc_bus; } ;
typedef TYPE_1__ ohci_softc_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_6(ohci_softc_t *VAR_2)
{
 uint32_t VAR_3;
 uint16_t VAR_4;
 uint16_t VAR_5;

 FUNC_3(&VAR_2->sc_bus, VAR_0);


 FUNC_4(VAR_2->sc_hub_idata, 0, sizeof(VAR_2->sc_hub_idata));

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 FUNC_0("sc=%p hstatus=0x%08x\n",
     VAR_2, VAR_3);


 VAR_5 = (VAR_2->sc_noport + 1);
 if (VAR_5 > (8 * sizeof(VAR_2->sc_hub_idata))) {
  VAR_5 = (8 * sizeof(VAR_2->sc_hub_idata));
 }
 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++) {

  if (FUNC_2(VAR_2, FUNC_1(VAR_4)) >> 16) {
   VAR_2->sc_hub_idata[VAR_4 / 8] |= 1 << (VAR_4 % 8);
   FUNC_0("port %d changed\n", VAR_4);
  }
 }

 FUNC_5(&VAR_2->sc_bus, VAR_2->sc_hub_idata,
     sizeof(VAR_2->sc_hub_idata));
}
