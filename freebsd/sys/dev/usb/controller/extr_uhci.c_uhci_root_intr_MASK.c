
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* sc_hub_idata; int sc_bus; int sc_root_intr; } ;
typedef TYPE_1__ uhci_softc_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int ,void*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(uhci_softc_t *VAR_7)
{
 FUNC_0(21, "\n");

 FUNC_2(&VAR_7->sc_bus, VAR_0);

 VAR_7->sc_hub_idata[0] = 0;

 if (FUNC_1(VAR_7, VAR_1) & (VAR_3 |
     VAR_4 | VAR_5)) {
  VAR_7->sc_hub_idata[0] |= 1 << 1;
 }
 if (FUNC_1(VAR_7, VAR_2) & (VAR_3 |
     VAR_4 | VAR_5)) {
  VAR_7->sc_hub_idata[0] |= 1 << 2;
 }


 FUNC_4(&VAR_7->sc_root_intr, VAR_6,
     (void *)&FUNC_5, VAR_7);

 if (VAR_7->sc_hub_idata[0] != 0) {
  FUNC_3(&VAR_7->sc_bus, VAR_7->sc_hub_idata,
      sizeof(VAR_7->sc_hub_idata));
 }
}
