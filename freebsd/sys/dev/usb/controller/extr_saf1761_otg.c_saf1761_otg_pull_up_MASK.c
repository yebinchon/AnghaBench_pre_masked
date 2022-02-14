
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_pulled_up; scalar_t__ port_powered; } ;
struct saf1761_otg_softc {TYPE_1__ sc_flags; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct saf1761_otg_softc *VAR_0)
{


 if (!VAR_0->sc_flags.d_pulled_up && VAR_0->sc_flags.port_powered) {
  FUNC_0("\n");

  VAR_0->sc_flags.d_pulled_up = 1;
 }
}
