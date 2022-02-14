
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pages; TYPE_1__* page; } ;
struct upgt_softc {scalar_t__ sc_memaddr_frame_start; scalar_t__ sc_memaddr_frame_end; TYPE_2__ sc_memory; } ;
struct TYPE_3__ {scalar_t__ addr; scalar_t__ used; } ;


 int FUNC_0 (struct upgt_softc*,int ,char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct upgt_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->sc_memory.page[VAR_4].used = 0;

  if (VAR_4 == 0) {




   VAR_3->sc_memory.page[VAR_4].addr =
       VAR_3->sc_memaddr_frame_start + VAR_0;
  } else {
   VAR_3->sc_memory.page[VAR_4].addr =
       VAR_3->sc_memory.page[VAR_4 - 1].addr + VAR_0;
  }

  if (VAR_3->sc_memory.page[VAR_4].addr + VAR_0 >=
      VAR_3->sc_memaddr_frame_end)
   break;

  FUNC_0(VAR_3, VAR_1, "memory address page %d=0x%08x\n",
      VAR_4, VAR_3->sc_memory.page[VAR_4].addr);
 }

 VAR_3->sc_memory.pages = VAR_4;

 FUNC_0(VAR_3, VAR_1, "memory pages=%d\n", VAR_3->sc_memory.pages);
 return (0);
}
