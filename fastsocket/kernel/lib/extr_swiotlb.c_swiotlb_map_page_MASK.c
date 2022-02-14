
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct device*,int ,size_t) ;
 void* VAR_1 ;
 void* FUNC_2 (struct device*,scalar_t__,size_t,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct device*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 (struct device*,size_t,int,int) ;
 int FUNC_7 (struct device*,void*) ;

dma_addr_t FUNC_8(struct device *VAR_3, struct page *VAR_4,
       unsigned long VAR_5, size_t VAR_6,
       enum dma_data_direction VAR_7,
       struct dma_attrs *VAR_8)
{
 phys_addr_t VAR_9 = FUNC_3(VAR_4) + VAR_5;
 dma_addr_t VAR_10 = FUNC_5(VAR_3, VAR_9);
 void *VAR_11;

 FUNC_0(VAR_7 == VAR_0);





 if (FUNC_1(VAR_3, VAR_10, VAR_6) && !VAR_2)
  return VAR_10;




 VAR_11 = FUNC_2(VAR_3, VAR_9, VAR_6, VAR_7);
 if (!VAR_11) {
  FUNC_6(VAR_3, VAR_6, VAR_7, 1);
  VAR_11 = VAR_1;
 }

 VAR_10 = FUNC_7(VAR_3, VAR_11);




 if (!FUNC_1(VAR_3, VAR_10, VAR_6))
  FUNC_4("map_single: bounce buffer is not DMA'ble");

 return VAR_10;
}
