
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bounce_zone {int reserved_bpages; int free_bpages; } ;
struct bounce_page {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_7__ {struct bounce_zone* bounce_zone; } ;
struct TYPE_6__ {int flags; scalar_t__ sync_count; scalar_t__ pagesneeded; scalar_t__ pagesreserved; int bpages; } ;


 int VAR_0 ;
 struct bounce_page* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,struct bounce_page*) ;
 int VAR_1 ;

void
FUNC_3(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3)
{
 struct bounce_page *VAR_4;
 struct bounce_zone *VAR_5;

 if ((VAR_5 = VAR_2->bounce_zone) != ((void*)0)) {
  while ((VAR_4 = FUNC_0(&VAR_3->bpages)) != ((void*)0)) {
   FUNC_1(&VAR_3->bpages, VAR_1);
   FUNC_2(VAR_2, VAR_4);
  }

  VAR_5 = VAR_2->bounce_zone;
  VAR_5->free_bpages += VAR_3->pagesreserved;
  VAR_5->reserved_bpages -= VAR_3->pagesreserved;
  VAR_3->pagesreserved = 0;
  VAR_3->pagesneeded = 0;
 }
 VAR_3->sync_count = 0;
 VAR_3->flags &= ~VAR_0;
}
