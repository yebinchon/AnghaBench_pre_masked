
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc {int dummy; } ;
struct TYPE_3__ {int sq_flags; struct proc* sq_proc; int sq_list; int sq_ptrace; int sq_kill; int sq_signals; } ;
typedef TYPE_1__ sigqueue_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(sigqueue_t *VAR_1, struct proc *VAR_2)
{
 FUNC_0(VAR_1->sq_signals);
 FUNC_0(VAR_1->sq_kill);
 FUNC_0(VAR_1->sq_ptrace);
 FUNC_1(&VAR_1->sq_list);
 VAR_1->sq_proc = VAR_2;
 VAR_1->sq_flags = VAR_0;
}
