
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rmlock {int dummy; } ;
struct rm_queue {struct rm_queue* rmq_next; } ;
struct rm_priotracker {struct thread const* rmp_thread; struct rmlock const* rmp_rmlock; } ;
struct pcpu {struct rm_queue pc_rm_queue; } ;



__attribute__((used)) static int
FUNC_0(const struct pcpu *VAR_0, const struct rmlock *VAR_1,
    const struct thread *VAR_2)
{
 struct rm_queue *VAR_3;
 struct rm_priotracker *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 for (VAR_3 = VAR_0->pc_rm_queue.rmq_next; VAR_3 != &VAR_0->pc_rm_queue;
     VAR_3 = VAR_3->rmq_next) {
  VAR_4 = (struct rm_priotracker *)VAR_3;
  if ((VAR_4->rmp_rmlock == VAR_1) && (VAR_4->rmp_thread == VAR_2))
   VAR_5++;
 }
 return (VAR_5);
}
