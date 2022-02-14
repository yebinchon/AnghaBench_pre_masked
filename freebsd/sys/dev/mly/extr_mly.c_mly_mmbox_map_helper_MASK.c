
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mly_softc {int mly_mmbox_busaddr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
    struct mly_softc *VAR_4 = (struct mly_softc *)VAR_0;

    FUNC_0(1);

    VAR_4->mly_mmbox_busaddr = VAR_1->ds_addr;
}
