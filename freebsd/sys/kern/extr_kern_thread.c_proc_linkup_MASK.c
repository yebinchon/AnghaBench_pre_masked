
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct proc {scalar_t__ p_numthreads; int p_mqnotifier; TYPE_1__* p_ksi; int p_sigqueue; } ;
struct TYPE_2__ {int ksi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,struct proc*) ;
 int FUNC_3 (struct thread*,struct proc*) ;

void
FUNC_4(struct proc *VAR_2, struct thread *VAR_3)
{

 FUNC_2(&VAR_2->p_sigqueue, VAR_2);
 VAR_2->p_ksi = FUNC_1(1);
 if (VAR_2->p_ksi != ((void*)0)) {

  VAR_2->p_ksi->ksi_flags = VAR_0 | VAR_1;
 }
 FUNC_0(&VAR_2->p_mqnotifier);
 VAR_2->p_numthreads = 0;
 FUNC_3(VAR_3, VAR_2);
}
