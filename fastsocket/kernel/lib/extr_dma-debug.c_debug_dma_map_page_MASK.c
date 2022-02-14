
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_debug_entry {size_t size; int direction; int type; int dev_addr; scalar_t__ paddr; struct device* dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct dma_debug_entry*) ;
 int FUNC_2 (struct device*,void*,size_t) ;
 int FUNC_3 (struct device*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dma_debug_entry* FUNC_4 () ;
 int FUNC_5 (struct device*,int ) ;
 int VAR_2 ;
 void* FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(struct device *VAR_3, struct page *VAR_4, size_t VAR_5,
   size_t VAR_6, int VAR_7, dma_addr_t VAR_8,
   bool VAR_9)
{
 struct dma_debug_entry *VAR_10;

 if (FUNC_8(VAR_2))
  return;

 if (FUNC_8(FUNC_5(VAR_3, VAR_8)))
  return;

 VAR_10 = FUNC_4();
 if (!VAR_10)
  return;

 VAR_10->dev = VAR_3;
 VAR_10->type = VAR_0;
 VAR_10->paddr = FUNC_7(VAR_4) + VAR_5;
 VAR_10->dev_addr = VAR_8;
 VAR_10->size = VAR_6;
 VAR_10->direction = VAR_7;

 if (VAR_9)
  VAR_10->type = VAR_1;

 if (!FUNC_0(VAR_4)) {
  void *VAR_11 = FUNC_6(VAR_4) + VAR_5;

  FUNC_3(VAR_3, VAR_11);
  FUNC_2(VAR_3, VAR_11, VAR_6);
 }

 FUNC_1(VAR_10);
}
