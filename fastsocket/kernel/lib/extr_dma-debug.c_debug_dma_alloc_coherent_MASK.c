
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {size_t size; int direction; int dev_addr; int paddr; struct device* dev; int type; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_debug_entry*) ;
 int VAR_1 ;
 struct dma_debug_entry* FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*) ;

void FUNC_4(struct device *VAR_3, size_t VAR_4,
         dma_addr_t VAR_5, void *VAR_6)
{
 struct dma_debug_entry *VAR_7;

 if (FUNC_2(VAR_2))
  return;

 if (FUNC_2(VAR_6 == ((void*)0)))
  return;

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return;

 VAR_7->type = VAR_1;
 VAR_7->dev = VAR_3;
 VAR_7->paddr = FUNC_3(VAR_6);
 VAR_7->size = VAR_4;
 VAR_7->dev_addr = VAR_5;
 VAR_7->direction = VAR_0;

 FUNC_0(VAR_7);
}
