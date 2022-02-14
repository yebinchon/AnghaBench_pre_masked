
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm_queue {struct rm_queue* rmq_next; struct rm_queue* rmq_prev; } ;
struct rm_priotracker {struct rm_queue rmp_cpuQueue; } ;
struct pcpu {struct rm_queue pc_rm_queue; } ;



__attribute__((used)) static void inline
FUNC_0(struct pcpu *VAR_0, struct rm_priotracker *VAR_1)
{
 struct rm_queue *VAR_2;


 VAR_1->rmp_cpuQueue.rmq_prev = &VAR_0->pc_rm_queue;
 VAR_2 = VAR_0->pc_rm_queue.rmq_next;
 VAR_1->rmp_cpuQueue.rmq_next = VAR_2;


 VAR_2->rmq_prev = &VAR_1->rmp_cpuQueue;


 VAR_0->pc_rm_queue.rmq_next = &VAR_1->rmp_cpuQueue;
}
