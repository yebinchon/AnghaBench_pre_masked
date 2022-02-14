
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {int ctrlbase; } ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned long,unsigned long,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct sc_info *VAR_5 = VAR_1;

 VAR_5->ctrlbase = VAR_4? 0 : (u_int32_t)VAR_2->ds_addr;

 if (VAR_0) {
  FUNC_0("ds1: setmap (%lx, %lx), nseg=%d, error=%d\n",
         (unsigned long)VAR_2->ds_addr, (unsigned long)VAR_2->ds_len,
         VAR_3, VAR_4);
 }
}
