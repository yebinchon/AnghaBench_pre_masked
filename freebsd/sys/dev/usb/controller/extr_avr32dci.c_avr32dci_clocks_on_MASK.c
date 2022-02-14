
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ clocks_off; scalar_t__ port_powered; } ;
struct avr32dci_softc {TYPE_1__ sc_flags; int sc_bus; int (* sc_clocks_on ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct avr32dci_softc*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct avr32dci_softc *VAR_1)
{
 if (VAR_1->sc_flags.clocks_off &&
     VAR_1->sc_flags.port_powered) {

  FUNC_0(5, "\n");


  (VAR_1->sc_clocks_on) (&VAR_1->sc_bus);

  FUNC_1(VAR_1, VAR_0, 0);

  VAR_1->sc_flags.clocks_off = 0;
 }
}
