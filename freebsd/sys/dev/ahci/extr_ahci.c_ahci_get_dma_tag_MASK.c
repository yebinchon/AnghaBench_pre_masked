
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int dma_tag; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 struct ahci_controller* FUNC_0 (int ) ;

bus_dma_tag_t
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct ahci_controller *VAR_2 = FUNC_0(VAR_0);

 return (VAR_2->dma_tag);
}
