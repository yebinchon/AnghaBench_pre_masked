
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
typedef scalar_t__ u_int ;
struct uprof {scalar_t__ pr_off; scalar_t__ pr_size; } ;
struct thread {int td_flags; int td_pflags; scalar_t__ td_profil_ticks; scalar_t__ td_profil_addr; TYPE_2__* td_proc; } ;
struct TYPE_5__ {TYPE_1__* p_stats; } ;
struct TYPE_4__ {struct uprof p_prof; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct uprof*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

void
FUNC_5(struct thread *VAR_2, uintfptr_t VAR_3, u_int VAR_4)
{
 struct uprof *VAR_5;

 if (VAR_4 == 0)
  return;
 VAR_5 = &VAR_2->td_proc->p_stats->p_prof;
 FUNC_1(VAR_2->td_proc);
 if (VAR_3 < VAR_5->pr_off || FUNC_0(VAR_3, VAR_5) >= VAR_5->pr_size) {
  FUNC_2(VAR_2->td_proc);
  return;
 }

 FUNC_2(VAR_2->td_proc);
 VAR_2->td_profil_addr = VAR_3;
 VAR_2->td_profil_ticks = VAR_4;
 VAR_2->td_pflags |= VAR_1;
 FUNC_3(VAR_2);
 VAR_2->td_flags |= VAR_0;
 FUNC_4(VAR_2);
}
