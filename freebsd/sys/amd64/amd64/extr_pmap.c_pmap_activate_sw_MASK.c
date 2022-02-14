
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int ;
struct thread {TYPE_1__* td_proc; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_6__ {int pm_active; } ;
struct TYPE_5__ {int p_vmspace; } ;


 int FUNC_0 (void*,int *) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (void*,int *) ;
 scalar_t__ VAR_0 ;
 void* FUNC_4 (void*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct thread*,TYPE_2__*,void*) ;
 TYPE_2__* FUNC_7 (int ) ;

void
FUNC_8(struct thread *VAR_3)
{
 pmap_t VAR_4, VAR_5;
 u_int VAR_6;

 VAR_4 = FUNC_4(VAR_2);
 VAR_5 = FUNC_7(VAR_3->td_proc->p_vmspace);
 if (VAR_4 == VAR_5) {
  if (VAR_1 != VAR_0)
   FUNC_5();
  return;
 }
 VAR_6 = FUNC_4(VAR_6);



 FUNC_2(VAR_6, &VAR_5->pm_active);

 FUNC_6(VAR_3, VAR_5, VAR_6);



 FUNC_0(VAR_6, &VAR_4->pm_active);

}
