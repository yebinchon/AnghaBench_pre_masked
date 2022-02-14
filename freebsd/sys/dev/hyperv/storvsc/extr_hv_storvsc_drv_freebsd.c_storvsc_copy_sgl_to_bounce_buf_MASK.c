
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct sglist {TYPE_1__* sg_segs; } ;
struct TYPE_5__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int ss_len; scalar_t__ ss_paddr; } ;


 int FUNC_0 (void*,void*,int ) ;

__attribute__((used)) static void
FUNC_1(struct sglist *VAR_0,
          bus_dma_segment_t *VAR_1,
          unsigned int VAR_2,
          uint64_t VAR_3)
{
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3 & (1 << VAR_4)) {
   FUNC_0((void*)VAR_0->sg_segs[VAR_4].ss_paddr,
       (void*)VAR_1[VAR_4].ds_addr,
       VAR_1[VAR_4].ds_len);

   VAR_0->sg_segs[VAR_4].ss_len =
       VAR_1[VAR_4].ds_len;
  }
 }
}
