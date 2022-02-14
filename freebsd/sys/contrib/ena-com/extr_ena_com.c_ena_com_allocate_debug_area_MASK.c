
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ena_host_attribute {scalar_t__ debug_area_size; int debug_area_virt_addr; int debug_area_dma_handle; int debug_area_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_host_attribute host_attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ena_com_dev *VAR_1,
    u32 VAR_2)
{
 struct ena_host_attribute *VAR_3 = &VAR_1->host_attr;

 FUNC_0(VAR_1->dmadev,
          VAR_2,
          VAR_3->debug_area_virt_addr,
          VAR_3->debug_area_dma_addr,
          VAR_3->debug_area_dma_handle);
 if (FUNC_1(!VAR_3->debug_area_virt_addr)) {
  VAR_3->debug_area_size = 0;
  return VAR_0;
 }

 VAR_3->debug_area_size = VAR_2;

 return 0;
}
