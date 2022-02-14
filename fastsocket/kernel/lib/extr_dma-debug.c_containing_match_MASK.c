
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {scalar_t__ dev; scalar_t__ dev_addr; scalar_t__ size; } ;



__attribute__((used)) static bool FUNC_0(struct dma_debug_entry *VAR_0,
        struct dma_debug_entry *VAR_1)
{
 if (VAR_0->dev != VAR_1->dev)
  return 0;

 if ((VAR_1->dev_addr <= VAR_0->dev_addr) &&
     ((VAR_1->dev_addr + VAR_1->size) >= (VAR_0->dev_addr + VAR_0->size)))
  return 1;

 return 0;
}
