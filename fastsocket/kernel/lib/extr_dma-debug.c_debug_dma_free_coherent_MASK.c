
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
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;

void FUNC_3(struct device *VAR_3, size_t VAR_4,
    void *VAR_5, dma_addr_t VAR_6)
{
 struct dma_debug_entry VAR_7 = {
  .type = VAR_1,
  .dev = VAR_3,
  .paddr = FUNC_2(VAR_5),
  .dev_addr = VAR_6,
  .size = VAR_4,
  .direction = VAR_0,
 };

 if (FUNC_1(VAR_2))
  return;

 FUNC_0(&VAR_7);
}
