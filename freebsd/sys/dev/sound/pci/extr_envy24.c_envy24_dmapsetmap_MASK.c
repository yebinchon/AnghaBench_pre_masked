
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sc_info {unsigned long paddr; unsigned long pmap; int dev; } ;
struct TYPE_3__ {unsigned long ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct sc_info *VAR_5 = (struct sc_info *)VAR_1;

 VAR_5->paddr = VAR_2->ds_addr;
}
