
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ d_pulled_up; } ;
struct avr32dci_softc {TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct avr32dci_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct avr32dci_softc *VAR_1)
{


 if (VAR_1->sc_flags.d_pulled_up) {
  VAR_1->sc_flags.d_pulled_up = 0;
  FUNC_0(VAR_1, VAR_0, 0);
 }
}
