
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_pulled_up; scalar_t__ port_powered; } ;
struct atmegadci_softc {TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct atmegadci_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct atmegadci_softc *VAR_1)
{


 if (!VAR_1->sc_flags.d_pulled_up &&
     VAR_1->sc_flags.port_powered) {
  VAR_1->sc_flags.d_pulled_up = 1;
  FUNC_0(VAR_1, VAR_0, 0);
 }
}
