
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
struct bounce_zone {int active_bpages; int reserved_bpages; int bounce_page_list; } ;
struct bounce_page {int vaddr; int busaddr; int dataoffs; int datacount; int datapage; int datavaddr; } ;
typedef int bus_size_t ;
typedef TYPE_2__* bus_dmamap_t ;
typedef TYPE_3__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ common; struct bounce_zone* bounce_zone; } ;
struct TYPE_7__ {int flags; scalar_t__ pagesneeded; scalar_t__ pagesreserved; int bpages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct bounce_page* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bounce_page*,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bus_addr_t
FUNC_8(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6, vm_offset_t VAR_7,
  bus_addr_t VAR_8, bus_size_t VAR_9)
{
 struct bounce_zone *VAR_10;
 struct bounce_page *VAR_11;

 FUNC_0(VAR_5->bounce_zone != ((void*)0), ("no bounce zone in dma tag"));
 FUNC_0((VAR_6->flags & VAR_1) != 0,
     ("add_bounce_page: bad map %p", VAR_6));

 VAR_10 = VAR_5->bounce_zone;
 if (VAR_6->pagesneeded == 0)
  FUNC_7("add_bounce_page: map doesn't need any pages");
 VAR_6->pagesneeded--;

 if (VAR_6->pagesreserved == 0)
  FUNC_7("add_bounce_page: map doesn't need any pages");
 VAR_6->pagesreserved--;

 FUNC_5(&VAR_3);
 VAR_11 = FUNC_2(&VAR_10->bounce_page_list);
 if (VAR_11 == ((void*)0))
  FUNC_7("add_bounce_page: free page list is empty");

 FUNC_4(&VAR_10->bounce_page_list, VAR_4);
 VAR_10->reserved_bpages--;
 VAR_10->active_bpages++;
 FUNC_6(&VAR_3);

 if (VAR_5->common.flags & VAR_0) {

  VAR_11->vaddr |= VAR_8 & VAR_2;
  VAR_11->busaddr |= VAR_8 & VAR_2;
 }
 VAR_11->datavaddr = VAR_7;
 VAR_11->datapage = FUNC_1(VAR_8);
 VAR_11->dataoffs = VAR_8 & VAR_2;
 VAR_11->datacount = VAR_9;
 FUNC_3(&(VAR_6->bpages), VAR_11, VAR_4);
 return (VAR_11->busaddr);
}
