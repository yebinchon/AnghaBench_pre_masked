
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_REQUEST {int timer; int dma_map; int dma_tag; int physical_address; int controller_handle; } ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(struct ISCI_REQUEST *VAR_0,
    SCI_CONTROLLER_HANDLE_T VAR_1,
    bus_dma_tag_t VAR_2, bus_addr_t VAR_3)
{

 VAR_0->controller_handle = VAR_1;
 VAR_0->dma_tag = VAR_2;
 VAR_0->physical_address = VAR_3;
 FUNC_0(VAR_0->dma_tag, 0, &VAR_0->dma_map);
 FUNC_1(&VAR_0->timer, 1);
}
