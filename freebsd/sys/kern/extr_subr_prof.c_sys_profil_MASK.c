
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uprof {int pr_scale; int pr_size; int pr_base; int pr_off; } ;
struct thread {struct proc* td_proc; } ;
struct profil_args {int scale; int size; int samples; int offset; } ;
struct proc {TYPE_1__* p_stats; } ;
struct TYPE_2__ {struct uprof p_prof; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;

int
FUNC_6(struct thread *VAR_1, struct profil_args *VAR_2)
{
 struct uprof *VAR_3;
 struct proc *VAR_4;

 if (VAR_2->scale > (1 << 16))
  return (VAR_0);

 VAR_4 = VAR_1->td_proc;
 if (VAR_2->scale == 0) {
  FUNC_0(VAR_4);
  FUNC_5(VAR_4);
  FUNC_3(VAR_4);
  return (0);
 }
 FUNC_0(VAR_4);
 VAR_3 = &VAR_1->td_proc->p_stats->p_prof;
 FUNC_1(VAR_4);
 VAR_3->pr_off = VAR_2->offset;
 VAR_3->pr_scale = VAR_2->scale;
 VAR_3->pr_base = VAR_2->samples;
 VAR_3->pr_size = VAR_2->size;
 FUNC_2(VAR_4);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);

 return (0);
}
