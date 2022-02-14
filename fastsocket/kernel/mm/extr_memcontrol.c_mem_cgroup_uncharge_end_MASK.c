
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memcg_batch_info {TYPE_1__* memcg; scalar_t__ memsw_bytes; scalar_t__ bytes; scalar_t__ do_batch; } ;
struct TYPE_4__ {struct memcg_batch_info memcg_batch; } ;
struct TYPE_3__ {int memsw; int res; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(void)
{
 struct memcg_batch_info *VAR_1 = &VAR_0->memcg_batch;

 if (!VAR_1->do_batch)
  return;

 VAR_1->do_batch--;
 if (VAR_1->do_batch)
  return;

 if (!VAR_1->memcg)
  return;




 if (VAR_1->bytes)
  FUNC_1(&VAR_1->memcg->res, VAR_1->bytes);
 if (VAR_1->memsw_bytes)
  FUNC_1(&VAR_1->memcg->memsw, VAR_1->memsw_bytes);
 FUNC_0(VAR_1->memcg);

 VAR_1->memcg = ((void*)0);
}
