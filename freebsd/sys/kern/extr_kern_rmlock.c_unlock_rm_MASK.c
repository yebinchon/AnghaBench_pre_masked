
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rmlock {int dummy; } ;
struct rm_queue {struct rm_queue* rmq_next; } ;
struct rm_priotracker {struct thread* rmp_thread; struct rmlock* rmp_rmlock; } ;
struct pcpu {struct rm_queue pc_rm_queue; } ;
struct lock_object {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct thread* VAR_2 ;
 struct pcpu* FUNC_3 () ;
 int FUNC_4 (struct rmlock*,int) ;
 int FUNC_5 (struct rmlock*,struct rm_priotracker*) ;
 scalar_t__ FUNC_6 (struct rmlock*) ;
 int FUNC_7 (struct rmlock*) ;

__attribute__((used)) static uintptr_t
FUNC_8(struct lock_object *VAR_3)
{
 struct thread *VAR_4;
 struct pcpu *VAR_5;
 struct rmlock *VAR_6;
 struct rm_queue *VAR_7;
 struct rm_priotracker *VAR_8;
 uintptr_t VAR_9;

 VAR_6 = (struct rmlock *)VAR_3;
 VAR_8 = ((void*)0);
 VAR_9 = 0;
 FUNC_4(VAR_6, VAR_0 | VAR_1);
 if (FUNC_6(VAR_6))
  FUNC_7(VAR_6);
 else {





  FUNC_1();
  VAR_4 = VAR_2;
  VAR_5 = FUNC_3();
  for (VAR_7 = VAR_5->pc_rm_queue.rmq_next;
      VAR_7 != &VAR_5->pc_rm_queue; VAR_7 = VAR_7->rmq_next) {
   VAR_8 = (struct rm_priotracker *)VAR_7;
    if ((VAR_8->rmp_rmlock == VAR_6) &&
        (VAR_8->rmp_thread == VAR_4)) {
     VAR_9 = (uintptr_t)VAR_8;
     break;
    }
  }
  FUNC_0(VAR_8 != ((void*)0),
      ("rm_priotracker is non-NULL when lock held in read mode"));
  FUNC_2();
  FUNC_5(VAR_6, VAR_8);
 }
 return (VAR_9);
}
