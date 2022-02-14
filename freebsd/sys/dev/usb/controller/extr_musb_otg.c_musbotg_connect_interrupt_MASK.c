
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int change_connect; } ;
struct musbotg_softc {int sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct musbotg_softc*) ;

void
FUNC_3(struct musbotg_softc *VAR_0)
{
 FUNC_0(&VAR_0->sc_bus);
 VAR_0->sc_flags.change_connect = 1;


 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->sc_bus);
}
