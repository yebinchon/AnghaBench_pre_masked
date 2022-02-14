
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sg_ent {scalar_t__* addr; scalar_t__* len; } ;
struct TYPE_3__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static __inline void
FUNC_2(struct sg_ent *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0, VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {



  if (VAR_1[VAR_3].ds_len == 0)
   continue;
  if (VAR_3 && VAR_4 == 0)
   ++VAR_0;

  VAR_0->len[VAR_4] = FUNC_0(VAR_1[VAR_3].ds_len);
  VAR_0->addr[VAR_4] = FUNC_1(VAR_1[VAR_3].ds_addr);
  VAR_4 ^= 1;
 }

 if (VAR_4) {
  VAR_0->len[VAR_4] = 0;
  VAR_0->addr[VAR_4] = 0;
 }
}
