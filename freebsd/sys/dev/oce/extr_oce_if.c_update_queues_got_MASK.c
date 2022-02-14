
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nrqs; int intr_count; int nwqs; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(POCE_SOFTC VAR_0)
{
 if (FUNC_1(VAR_0)) {
  VAR_0->nrqs = VAR_0->intr_count + 1;
  VAR_0->nwqs = VAR_0->intr_count;
 } else {
  VAR_0->nrqs = 1;
  VAR_0->nwqs = 1;
 }

 if (FUNC_0(VAR_0))
  VAR_0->nwqs = 1;
}
