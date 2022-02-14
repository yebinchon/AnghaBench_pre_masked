
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axp2xx_softc {int nregs; TYPE_2__** regs; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ xref; TYPE_1__* def; } ;
struct TYPE_3__ {intptr_t id; } ;


 int VAR_0 ;
 struct axp2xx_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, phandle_t VAR_2, int VAR_3, pcell_t *VAR_4,
    intptr_t *VAR_5)
{
 struct axp2xx_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_6->nregs; VAR_7++) {
  if (VAR_6->regs[VAR_7] == ((void*)0))
   continue;
  if (VAR_6->regs[VAR_7]->xref == VAR_2) {
   *VAR_5 = VAR_6->regs[VAR_7]->def->id;
   return (0);
  }
 }

 return (VAR_0);
}
