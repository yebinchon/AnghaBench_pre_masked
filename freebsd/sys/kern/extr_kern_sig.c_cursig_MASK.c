
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct TYPE_4__ {TYPE_1__* p_sigacts; } ;
struct TYPE_3__ {int ps_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(struct thread *VAR_2)
{
 FUNC_0(VAR_2->td_proc, VAR_1);
 FUNC_4(&VAR_2->td_proc->p_sigacts->ps_mtx, VAR_1);
 FUNC_2(VAR_2, VAR_0);
 return (FUNC_1(VAR_2) ? FUNC_3(VAR_2) : 0);
}
