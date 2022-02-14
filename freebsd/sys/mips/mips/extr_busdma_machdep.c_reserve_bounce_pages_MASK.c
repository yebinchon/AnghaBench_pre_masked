
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bounce_zone {int free_bpages; int reserved_bpages; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_6__ {struct bounce_zone* bounce_zone; } ;
struct TYPE_5__ {scalar_t__ pagesneeded; scalar_t__ pagesreserved; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3, int VAR_4)
{
 struct bounce_zone *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_1, VAR_0);
 VAR_5 = VAR_2->bounce_zone;
 VAR_6 = FUNC_0(VAR_5->free_bpages, VAR_3->pagesneeded - VAR_3->pagesreserved);
 if (VAR_4 == 0 && VAR_3->pagesneeded > (VAR_3->pagesreserved + VAR_6))
  return (VAR_3->pagesneeded - (VAR_3->pagesreserved + VAR_6));
 VAR_5->free_bpages -= VAR_6;
 VAR_5->reserved_bpages += VAR_6;
 VAR_3->pagesreserved += VAR_6;
 VAR_6 = VAR_3->pagesneeded - VAR_3->pagesreserved;

 return (VAR_6);
}
