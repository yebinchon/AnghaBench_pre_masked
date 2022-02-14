
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_5__ {scalar_t__ lowaddr; scalar_t__ highaddr; scalar_t__ (* filter ) (int ,scalar_t__) ;struct TYPE_5__* parent; int filterarg; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1, bus_addr_t VAR_2,
    bus_size_t VAR_3)
{

 if (FUNC_1(VAR_1, VAR_2, VAR_3))
  return (1);





 if (FUNC_0(VAR_0, VAR_2))
  return (1);
 while (VAR_0 != ((void*)0) && FUNC_2(VAR_0)) {
  if ((VAR_2 >= VAR_0->lowaddr && VAR_2 <= VAR_0->highaddr) &&
      (VAR_0->filter == ((void*)0) ||
      VAR_0->filter(VAR_0->filterarg, VAR_2) != 0))
   return (1);
  VAR_0 = VAR_0->parent;
 }

 return (0);
}
