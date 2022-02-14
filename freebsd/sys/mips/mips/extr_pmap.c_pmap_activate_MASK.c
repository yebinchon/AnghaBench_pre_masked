
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int ;
struct thread {struct proc* td_proc; } ;
struct proc {int p_vmspace; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_7__ {TYPE_1__* pm_asid; struct TYPE_7__* pm_segtab; int pm_active; } ;
struct TYPE_6__ {int asid; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int *) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (size_t,TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 size_t VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_8 (int ) ;

void
FUNC_9(struct thread *VAR_3)
{
 pmap_t VAR_4, VAR_5;
 struct proc *VAR_6 = VAR_3->td_proc;
 u_int VAR_7;

 FUNC_4();

 VAR_4 = FUNC_8(VAR_6->p_vmspace);
 VAR_5 = FUNC_2(VAR_0);
 VAR_7 = FUNC_2(VAR_7);

 if (VAR_5)
  FUNC_0(VAR_7, &VAR_5->pm_active);
 FUNC_1(VAR_7, &VAR_4->pm_active);
 FUNC_7(VAR_4);
 if (VAR_3 == VAR_1) {
  FUNC_3(VAR_2, VAR_4->pm_segtab);
  FUNC_6(VAR_4->pm_asid[VAR_7].asid);
 }

 FUNC_3(VAR_0, VAR_4);
 FUNC_5();
}
