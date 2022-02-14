
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct phys_addr {int dummy; } ;
struct _oce_dmamap_paddr_table {int max_entries; scalar_t__ num_entries; struct phys_addr* paddrs; } ;
struct TYPE_4__ {int ptr; int map; int tag; } ;
struct TYPE_5__ {int item_size; int num_items; TYPE_1__ dma; } ;
typedef TYPE_2__ oce_ring_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ,struct _oce_dmamap_paddr_table*,int ) ;
 int VAR_1 ;

uint32_t
FUNC_1(oce_ring_buffer_t *VAR_2, struct phys_addr *VAR_3)
{
 struct _oce_dmamap_paddr_table VAR_4;

 VAR_4.max_entries = 8;
 VAR_4.num_entries = 0;
 VAR_4.paddrs = VAR_3;

 FUNC_0(VAR_2->dma.tag,
   VAR_2->dma.map,
   VAR_2->dma.ptr,
   VAR_2->item_size * VAR_2->num_items,
   VAR_1, &VAR_4, VAR_0);

 return VAR_4.num_entries;
}
