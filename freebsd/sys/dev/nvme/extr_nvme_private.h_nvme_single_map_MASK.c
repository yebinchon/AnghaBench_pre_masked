
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static __inline void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 uint64_t *VAR_4 = (uint64_t *)VAR_0;

 if (VAR_3 != 0)
  FUNC_0("nvme_single_map err %d\n", VAR_3);
 *VAR_4 = VAR_1[0].ds_addr;
}
