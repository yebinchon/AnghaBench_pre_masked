
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct memdesc {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_dmamap_callback_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {int flags; void* callback_arg; int * callback; int dmat; struct memdesc mem; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
    struct memdesc *VAR_3, bus_dmamap_callback_t *VAR_4, void *VAR_5)
{

 if ((VAR_2->flags & VAR_0) == 0)
  return;
 VAR_2->mem = *VAR_3;
 VAR_2->dmat = VAR_1;
 VAR_2->callback = VAR_4;
 VAR_2->callback_arg = VAR_5;
}
