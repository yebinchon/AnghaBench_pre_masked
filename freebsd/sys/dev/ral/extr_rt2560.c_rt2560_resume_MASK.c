
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ic_nrunning; } ;
struct rt2560_softc {TYPE_1__ sc_ic; } ;


 int FUNC_0 (struct rt2560_softc*) ;

void
FUNC_1(void *VAR_0)
{
 struct rt2560_softc *VAR_1 = VAR_0;

 if (VAR_1->sc_ic.ic_nrunning > 0)
  FUNC_0(VAR_1);
}
