
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clocks_off; } ;
struct avr32dci_softc {TYPE_1__ sc_flags; int sc_bus; int (* sc_clocks_off ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct avr32dci_softc*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct avr32dci_softc *VAR_1)
{
 if (!VAR_1->sc_flags.clocks_off) {

  FUNC_0(5, "\n");

  FUNC_1(VAR_1, 0, VAR_0);


  (VAR_1->sc_clocks_off) (&VAR_1->sc_bus);

  VAR_1->sc_flags.clocks_off = 1;
 }
}
