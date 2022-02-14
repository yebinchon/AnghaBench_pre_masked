
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mvs_dc_cb_args {int error; int maddr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct mvs_dc_cb_args *VAR_4 = (struct mvs_dc_cb_args *)VAR_0;

 if (!(VAR_4->error = VAR_3))
  VAR_4->maddr = VAR_1[0].ds_addr;
}
