
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int change_connect; scalar_t__ change_suspend; scalar_t__ status_suspend; scalar_t__ status_bus_reset; scalar_t__ status_vbus; scalar_t__ port_powered; } ;
struct saf1761_otg_softc {int sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (struct saf1761_otg_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct saf1761_otg_softc*) ;

void
FUNC_4(struct saf1761_otg_softc *VAR_1)
{
 FUNC_1(&VAR_1->sc_bus);


 FUNC_0(VAR_1, VAR_0, 0);

 VAR_1->sc_flags.port_powered = 0;
 VAR_1->sc_flags.status_vbus = 0;
 VAR_1->sc_flags.status_bus_reset = 0;
 VAR_1->sc_flags.status_suspend = 0;
 VAR_1->sc_flags.change_suspend = 0;
 VAR_1->sc_flags.change_connect = 1;

 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->sc_bus);
}
