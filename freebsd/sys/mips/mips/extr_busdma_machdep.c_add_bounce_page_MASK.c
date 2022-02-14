
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
struct bounce_zone {int active_bpages; int reserved_bpages; int bounce_page_list; } ;
struct bounce_page {int vaddr; int busaddr; int dataaddr; int datacount; int datavaddr; } ;
typedef int bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_6__ {int flags; struct bounce_zone* bounce_zone; } ;
struct TYPE_5__ {scalar_t__ pagesneeded; scalar_t__ pagesreserved; int bpages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 struct bounce_page* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bounce_page*,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bus_addr_t
FUNC_7(bus_dma_tag_t VAR_4, bus_dmamap_t VAR_5, vm_offset_t VAR_6,
  bus_addr_t VAR_7, bus_size_t VAR_8)
{
 struct bounce_zone *VAR_9;
 struct bounce_page *VAR_10;

 FUNC_0(VAR_4->bounce_zone != ((void*)0), ("no bounce zone in dma tag"));
 FUNC_0(VAR_5 != ((void*)0), ("add_bounce_page: bad map %p", VAR_5));

 VAR_9 = VAR_4->bounce_zone;
 if (VAR_5->pagesneeded == 0)
  FUNC_6("add_bounce_page: map doesn't need any pages");
 VAR_5->pagesneeded--;

 if (VAR_5->pagesreserved == 0)
  FUNC_6("add_bounce_page: map doesn't need any pages");
 VAR_5->pagesreserved--;

 FUNC_4(&VAR_2);
 VAR_10 = FUNC_1(&VAR_9->bounce_page_list);
 if (VAR_10 == ((void*)0))
  FUNC_6("add_bounce_page: free page list is empty");

 FUNC_3(&VAR_9->bounce_page_list, VAR_3);
 VAR_9->reserved_bpages--;
 VAR_9->active_bpages++;
 FUNC_5(&VAR_2);

 if (VAR_4->flags & VAR_0) {

  VAR_10->vaddr |= VAR_7 & VAR_1;
  VAR_10->busaddr |= VAR_7 & VAR_1;
 }
 VAR_10->datavaddr = VAR_6;
 VAR_10->dataaddr = VAR_7;
 VAR_10->datacount = VAR_8;
 FUNC_2(&(VAR_5->bpages), VAR_10, VAR_3);
 return (VAR_10->busaddr);
}
