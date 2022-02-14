
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ d_pulled_up; } ;
struct musbotg_softc {TYPE_1__ sc_flags; } ;


 int FUNC_0 (struct musbotg_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct musbotg_softc *VAR_0)
{


 if (VAR_0->sc_flags.d_pulled_up) {
  VAR_0->sc_flags.d_pulled_up = 0;
  FUNC_0(VAR_0, 0);
 }
}
