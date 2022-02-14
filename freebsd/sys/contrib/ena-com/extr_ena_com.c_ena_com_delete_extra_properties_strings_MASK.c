
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_extra_properties_strings {int * virt_addr; int dma_handle; int dma_addr; int size; } ;
struct ena_com_dev {int dmadev; struct ena_extra_properties_strings extra_properties_strings; } ;


 int FUNC_0 (int ,int ,int *,int ,int ) ;

void FUNC_1(struct ena_com_dev *VAR_0)
{
 struct ena_extra_properties_strings *VAR_1 =
    &VAR_0->extra_properties_strings;

 if (VAR_1->virt_addr) {
  FUNC_0(VAR_0->dmadev,
          VAR_1->size,
          VAR_1->virt_addr,
          VAR_1->dma_addr,
          VAR_1->dma_handle);
  VAR_1->virt_addr = ((void*)0);
 }
}
