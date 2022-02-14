
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct memdesc {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_dmamap_callback_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {void* callback_arg; int * callback; int dmat; struct memdesc mem; } ;



void
FUNC_0(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1, struct memdesc *VAR_2,
    bus_dmamap_callback_t *VAR_3, void *VAR_4)
{

 VAR_1->mem = *VAR_2;
 VAR_1->dmat = VAR_0;
 VAR_1->callback = VAR_3;
 VAR_1->callback_arg = VAR_4;
}
