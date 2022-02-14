
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
typedef int pmap_t ;
struct TYPE_2__ {int p_vmspace; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct thread *VAR_0)
{
 pmap_t VAR_1;

 VAR_1 = FUNC_3(VAR_0->td_proc->p_vmspace);
 FUNC_0();
 (void)FUNC_2(VAR_1);
 FUNC_1();
}
