
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int pages; TYPE_1__* page; } ;
struct upgt_softc {int sc_dev; TYPE_2__ sc_memory; } ;
struct TYPE_3__ {scalar_t__ addr; scalar_t__ used; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct upgt_softc *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->sc_memory.pages; VAR_2++) {
  if (VAR_0->sc_memory.page[VAR_2].addr == VAR_1) {
   VAR_0->sc_memory.page[VAR_2].used = 0;
   return;
  }
 }

 FUNC_0(VAR_0->sc_dev,
     "could not free memory address 0x%08x\n", VAR_1);
}
