
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_queue {struct rm_queue* rmq_next; struct rm_queue* rmq_prev; } ;
struct TYPE_2__ {struct rm_queue* rmq_prev; struct rm_queue* rmq_next; } ;
struct rm_priotracker {TYPE_1__ rmp_cpuQueue; } ;
struct pcpu {int dummy; } ;



__attribute__((used)) static void inline
FUNC_0(struct pcpu *VAR_0, struct rm_priotracker *VAR_1)
{
 struct rm_queue *VAR_2, *VAR_3;

 VAR_2 = VAR_1->rmp_cpuQueue.rmq_next;
 VAR_3 = VAR_1->rmp_cpuQueue.rmq_prev;


 VAR_2->rmq_prev = VAR_3;


 VAR_3->rmq_next = VAR_2;
}
