
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;
struct TYPE_10__ {int size; int alignment; void* dma_b; scalar_t__ dma_addr; scalar_t__ dma_tag; scalar_t__ dma_map; } ;
typedef TYPE_2__ qlnx_dma_t ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,void*,void*,void*,void*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*) ;

void *
FUNC_5(void *VAR_1, bus_addr_t *VAR_2, uint32_t VAR_3)
{
 qlnx_dma_t VAR_4;
 qlnx_dma_t *VAR_5;
 qlnx_host_t *VAR_6;
 device_t VAR_7;

 VAR_6 = (qlnx_host_t *)VAR_1;
 VAR_7 = VAR_6->pci_dev;

 VAR_3 = (VAR_3 + (VAR_0 - 1)) & ~(VAR_0 - 1);

 FUNC_3(&VAR_4, 0, sizeof (qlnx_dma_t));

 VAR_4.size = VAR_3 + VAR_0;
 VAR_4.alignment = 8;

 if (FUNC_4((qlnx_host_t *)VAR_1, &VAR_4) != 0)
  return (((void*)0));
 FUNC_1((uint8_t *)VAR_4.dma_b, VAR_4.size);

 *VAR_2 = VAR_4.dma_addr;

 VAR_5 = (qlnx_dma_t *)((uint8_t *)VAR_4.dma_b + VAR_3);

 FUNC_2(VAR_5, &VAR_4, sizeof(qlnx_dma_t));

 FUNC_0(VAR_6, "[%p %p %p %p 0x%08x ]\n",
  (void *)VAR_4.dma_map, (void *)VAR_4.dma_tag,
  VAR_4.dma_b, (void *)VAR_4.dma_addr, VAR_3);

 return (VAR_4.dma_b);
}
