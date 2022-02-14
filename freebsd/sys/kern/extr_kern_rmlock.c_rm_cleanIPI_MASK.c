
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmlock {int rm_activeReaders; } ;
struct rm_queue {struct rm_queue* rmq_next; } ;
struct rm_priotracker {scalar_t__ rmp_flags; struct rmlock* rmp_rmlock; } ;
struct pcpu {struct rm_queue pc_rm_queue; } ;


 int FUNC_0 (int *,struct rm_priotracker*,int ) ;
 scalar_t__ VAR_0 ;
 struct pcpu* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct pcpu *VAR_4;
 struct rmlock *VAR_5 = VAR_3;
 struct rm_priotracker *VAR_6;
 struct rm_queue *VAR_7;
 VAR_4 = FUNC_1();

 for (VAR_7 = VAR_4->pc_rm_queue.rmq_next; VAR_7 != &VAR_4->pc_rm_queue;
     VAR_7 = VAR_7->rmq_next) {
  VAR_6 = (struct rm_priotracker *)VAR_7;
  if (VAR_6->rmp_rmlock == VAR_5 && VAR_6->rmp_flags == 0) {
   VAR_6->rmp_flags = VAR_0;
   FUNC_2(&VAR_1);
   FUNC_0(&VAR_5->rm_activeReaders, VAR_6,
       VAR_2);
   FUNC_3(&VAR_1);
  }
 }
}
