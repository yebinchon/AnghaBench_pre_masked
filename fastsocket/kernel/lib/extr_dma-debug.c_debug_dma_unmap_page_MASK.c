
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {size_t size; int direction; int type; int dev_addr; struct device* dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct dma_debug_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct device *VAR_3, dma_addr_t VAR_4,
     size_t VAR_5, int VAR_6, bool VAR_7)
{
 struct dma_debug_entry VAR_8 = {
  .type = VAR_0,
  .dev = VAR_3,
  .dev_addr = VAR_4,
  .size = VAR_5,
  .direction = VAR_6,
 };

 if (FUNC_1(VAR_2))
  return;

 if (VAR_7)
  VAR_8.type = VAR_1;

 FUNC_0(&VAR_8);
}
