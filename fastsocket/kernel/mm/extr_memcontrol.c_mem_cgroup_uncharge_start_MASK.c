
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int do_batch; scalar_t__ memsw_bytes; scalar_t__ bytes; int * memcg; } ;
struct TYPE_4__ {TYPE_1__ memcg_batch; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(void)
{
 VAR_0->memcg_batch.do_batch++;

 if (VAR_0->memcg_batch.do_batch == 1) {
  VAR_0->memcg_batch.memcg = ((void*)0);
  VAR_0->memcg_batch.bytes = 0;
  VAR_0->memcg_batch.memsw_bytes = 0;
 }
}
