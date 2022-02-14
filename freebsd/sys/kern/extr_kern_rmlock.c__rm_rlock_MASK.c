
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {size_t td_oncpu; int td_owepreempt; int td_critnest; } ;
struct TYPE_2__ {int lo_flags; } ;
struct rmlock {int rm_writecpus; TYPE_1__ lock_object; } ;
struct rm_priotracker {struct rmlock* rmp_rmlock; struct thread* rmp_thread; scalar_t__ rmp_flags; } ;
struct pcpu {int pc_cpuid; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct rmlock*,struct rm_priotracker*,int) ;
 struct pcpu** VAR_1 ;
 struct thread* VAR_2 ;
 int FUNC_6 (struct pcpu*,struct rm_priotracker*) ;
 int FUNC_7 () ;

int
FUNC_8(struct rmlock *VAR_3, struct rm_priotracker *VAR_4, int VAR_5)
{
 struct thread *VAR_6 = VAR_2;
 struct pcpu *VAR_7;

 if (FUNC_1())
  return (1);

 VAR_4->rmp_flags = 0;
 VAR_4->rmp_thread = VAR_6;
 VAR_4->rmp_rmlock = VAR_3;

 if (VAR_3->lock_object.lo_flags & VAR_0)
  FUNC_2();

 VAR_6->td_critnest++;

 FUNC_3();

 VAR_7 = VAR_1[VAR_6->td_oncpu];

 FUNC_6(VAR_7, VAR_4);

 FUNC_7();

 FUNC_3();

 VAR_6->td_critnest--;





 if (FUNC_4(0 == (VAR_6->td_owepreempt |
     FUNC_0(VAR_7->pc_cpuid, &VAR_3->rm_writecpus))))
  return (1);


 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
