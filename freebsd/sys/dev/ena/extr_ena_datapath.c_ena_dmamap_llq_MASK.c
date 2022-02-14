
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ena_com_buf {int len; scalar_t__ paddr; } ;
struct TYPE_3__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct ena_com_buf *VAR_4 = VAR_0;

 if (FUNC_1(VAR_3 != 0)) {
  VAR_4->paddr = 0;
  return;
 }

 FUNC_0(VAR_2 == 1, ("Invalid num of segments for LLQ dma"));

 VAR_4->paddr = VAR_1->ds_addr;
 VAR_4->len = VAR_1->ds_len;
}
