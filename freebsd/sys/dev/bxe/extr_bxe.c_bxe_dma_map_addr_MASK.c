
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_dma {int nseg; scalar_t__ paddr; int msg; int sc; } ;
struct TYPE_3__ {scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int ,char*,int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
    struct bxe_dma *VAR_4 = VAR_0;

    if (VAR_3) {
        VAR_4->paddr = 0;
        VAR_4->nseg = 0;
        FUNC_0(VAR_4->sc, "Failed DMA alloc '%s' (%d)!\n", VAR_4->msg, VAR_3);
    } else {
        VAR_4->paddr = VAR_1->ds_addr;
        VAR_4->nseg = VAR_2;
    }
}
