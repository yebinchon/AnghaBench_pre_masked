
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned long,unsigned long,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 bus_addr_t *VAR_5 = VAR_1;

 *VAR_5 = VAR_4? 0 : VAR_2->ds_addr;

 if (VAR_0) {
  FUNC_0("setmap (%lx, %lx), nseg=%d, error=%d\n",
      (unsigned long)VAR_2->ds_addr, (unsigned long)VAR_2->ds_len,
      VAR_3, VAR_4);
 }
}
