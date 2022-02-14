
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _oce_dmamap_paddr_table {int max_entries; int num_entries; TYPE_1__* paddrs; } ;
struct TYPE_5__ {int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int hi; int lo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bus_dma_segment_t * VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 struct _oce_dmamap_paddr_table *VAR_5 =
     (struct _oce_dmamap_paddr_table *)VAR_0;

 if (VAR_3 == 0) {
  if (VAR_2 <= VAR_5->max_entries) {
   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_5->paddrs[VAR_4].lo = FUNC_1(VAR_1[VAR_4].ds_addr);
    VAR_5->paddrs[VAR_4].hi = FUNC_0(VAR_1[VAR_4].ds_addr);
   }
   VAR_5->num_entries = VAR_2;
  }
 }
}
