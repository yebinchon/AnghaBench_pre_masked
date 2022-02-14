
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_dma_tag_common {int lowaddr; int highaddr; int alignment; scalar_t__ (* filter ) (int ,int) ;struct bus_dma_tag_common* parent; int filterarg; } ;
typedef int bus_addr_t ;


 scalar_t__ FUNC_0 (int ,int) ;

int
FUNC_1(struct bus_dma_tag_common *VAR_0, bus_addr_t VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 do {
  if (((VAR_1 > VAR_0->lowaddr && VAR_1 <= VAR_0->highaddr) ||
      ((VAR_1 & (VAR_0->alignment - 1)) != 0)) &&
      (VAR_0->filter == ((void*)0) ||
      (*VAR_0->filter)(VAR_0->filterarg, VAR_1) != 0))
   VAR_2 = 1;

  VAR_0 = VAR_0->parent;
 } while (VAR_2 == 0 && VAR_0 != ((void*)0));
 return (VAR_2);
}
