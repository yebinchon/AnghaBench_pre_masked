
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bus_mtx; } ;
struct TYPE_3__ {int status_suspend; } ;
struct avr32dci_softc {TYPE_2__ sc_bus; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct avr32dci_softc*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct avr32dci_softc *VAR_2)
{
 if (!VAR_2->sc_flags.status_suspend) {
  return;
 }
 FUNC_0(VAR_2, VAR_0, 0);



 FUNC_1(&VAR_2->sc_bus.bus_mtx, VAR_1 / 125);


}
