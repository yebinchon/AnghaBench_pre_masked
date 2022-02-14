
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {scalar_t__ dev_addr; scalar_t__ dev; } ;



__attribute__((used)) static bool FUNC_0(struct dma_debug_entry *VAR_0, struct dma_debug_entry *VAR_1)
{
 return ((VAR_0->dev_addr == VAR_1->dev_addr) &&
  (VAR_0->dev == VAR_1->dev)) ? 1 : 0;
}
