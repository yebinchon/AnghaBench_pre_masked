
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* smp_queue_head; TYPE_2__* smp_queue_tail; } ;
typedef TYPE_1__ smp_engine_t ;
struct TYPE_6__ {struct TYPE_6__* qnext; } ;
typedef TYPE_2__ ibnd_smp_t ;



__attribute__((used)) static ibnd_smp_t *FUNC_0(smp_engine_t * VAR_0)
{
 ibnd_smp_t *VAR_1 = VAR_0->smp_queue_head;
 ibnd_smp_t *VAR_2 = VAR_0->smp_queue_tail;
 ibnd_smp_t *VAR_3 = VAR_1;
 if (VAR_1) {
  if (VAR_2 == VAR_1)
   VAR_0->smp_queue_tail = ((void*)0);
  VAR_0->smp_queue_head = VAR_1->qnext;
 }
 return VAR_3;
}
