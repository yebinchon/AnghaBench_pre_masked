
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int qlnxr_debug; int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;
struct TYPE_7__ {scalar_t__ dma_addr; int dma_b; scalar_t__ dma_tag; scalar_t__ dma_map; } ;
typedef TYPE_2__ qlnx_dma_t ;
typedef int device_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,void*,void*,int ,void*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void
FUNC_2(void *VAR_1, void *VAR_2, bus_addr_t VAR_3,
 uint32_t VAR_4)
{
 qlnx_dma_t VAR_5, *VAR_6;
 qlnx_host_t *VAR_7;
 device_t VAR_8;

 VAR_7 = (qlnx_host_t *)VAR_1;
 VAR_8 = VAR_7->pci_dev;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = (VAR_4 + (VAR_0 - 1)) & ~(VAR_0 - 1);

 VAR_6 = (qlnx_dma_t *)((uint8_t *)VAR_2 + VAR_4);

 FUNC_0(VAR_7, "[%p %p %p %p 0x%08x ]\n",
  (void *)VAR_6->dma_map, (void *)VAR_6->dma_tag,
  VAR_6->dma_b, (void *)VAR_6->dma_addr, VAR_4);

 VAR_5 = *VAR_6;

 if (!VAR_7->qlnxr_debug)
 FUNC_1((qlnx_host_t *)VAR_1, &VAR_5);
 return;
}
