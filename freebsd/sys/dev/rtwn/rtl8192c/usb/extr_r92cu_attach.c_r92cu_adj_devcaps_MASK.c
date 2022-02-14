
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_caps; } ;
struct rtwn_softc {TYPE_1__ sc_ic; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_1)
{

 VAR_1->sc_ic.ic_caps &= ~VAR_0;
}
