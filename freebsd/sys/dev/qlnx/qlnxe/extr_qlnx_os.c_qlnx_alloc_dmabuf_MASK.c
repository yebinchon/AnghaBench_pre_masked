
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent_tag; int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;
struct TYPE_7__ {scalar_t__ dma_addr; int dma_map; int dma_b; int dma_tag; int size; int alignment; } ;
typedef TYPE_2__ qlnx_dma_t ;
typedef int device_t ;
typedef int bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,scalar_t__*,int) ;
 int FUNC_4 (int ,void**,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(qlnx_host_t *VAR_5, qlnx_dma_t *VAR_6)
{
        int VAR_7 = 0;
        device_t VAR_8;
        bus_addr_t VAR_9;

        VAR_8 = VAR_5->pci_dev;

        VAR_7 = FUNC_1(
                        VAR_5->parent_tag,
                        VAR_6->alignment,
                        ((bus_size_t)(1ULL << 32)),
                        VAR_3,
                        VAR_3,
                        ((void*)0), ((void*)0),
                        VAR_6->size,
                        1,
                        VAR_6->size,
                        0,
                        ((void*)0), ((void*)0),
                        &VAR_6->dma_tag);

        if (VAR_7) {
                FUNC_0(VAR_5, "could not create dma tag\n");
                goto qlnx_alloc_dmabuf_exit;
        }
        VAR_7 = FUNC_4(VAR_6->dma_tag,
                        (void **)&VAR_6->dma_b,
                        (VAR_2 | VAR_0 | VAR_1),
                        &VAR_6->dma_map);
        if (VAR_7) {
                FUNC_2(VAR_6->dma_tag);
                FUNC_0(VAR_5, "bus_dmamem_alloc failed\n");
                goto qlnx_alloc_dmabuf_exit;
        }

        VAR_7 = FUNC_3(VAR_6->dma_tag,
                        VAR_6->dma_map,
                        VAR_6->dma_b,
                        VAR_6->size,
                        VAR_4,
                        &VAR_9, VAR_1);

        if (VAR_7 || !VAR_9) {
                FUNC_2(VAR_6->dma_tag);
                FUNC_5(VAR_6->dma_tag, VAR_6->dma_b,
                        VAR_6->dma_map);
                VAR_7 = -1;
                goto qlnx_alloc_dmabuf_exit;
        }

        VAR_6->dma_addr = VAR_9;

qlnx_alloc_dmabuf_exit:

        return VAR_7;
}
