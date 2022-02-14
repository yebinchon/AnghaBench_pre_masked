
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pages; TYPE_2__* page; } ;
struct upgt_softc {TYPE_1__ sc_memory; } ;
struct TYPE_4__ {int used; int addr; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct upgt_softc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->sc_memory.pages; VAR_1++) {
  if (VAR_0->sc_memory.page[VAR_1].used == 0) {
   VAR_0->sc_memory.page[VAR_1].used = 1;
   return (VAR_0->sc_memory.page[VAR_1].addr);
  }
 }

 return (0);
}
