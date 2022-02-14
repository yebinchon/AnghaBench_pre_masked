
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* smp_queue_tail; TYPE_2__* smp_queue_head; } ;
typedef TYPE_1__ smp_engine_t ;
struct TYPE_6__ {struct TYPE_6__* qnext; } ;
typedef TYPE_2__ ibnd_smp_t ;



__attribute__((used)) static void FUNC_0(smp_engine_t * VAR_0, ibnd_smp_t * VAR_1)
{
 VAR_1->qnext = ((void*)0);
 if (!VAR_0->smp_queue_head) {
  VAR_0->smp_queue_head = VAR_1;
  VAR_0->smp_queue_tail = VAR_1;
 } else {
  VAR_0->smp_queue_tail->qnext = VAR_1;
  VAR_0->smp_queue_tail = VAR_1;
 }
}
