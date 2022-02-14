
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
typedef int * pmap_t ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct thread* VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (struct thread*,int *,int ) ;
 int FUNC_4 (struct thread*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(void)
{
 struct thread *VAR_5;
 pmap_t VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_5 = VAR_2;
 VAR_6 = &VAR_5->td_proc->p_vmspace->vm_pmap;
 FUNC_0(VAR_6);
 FUNC_5(&VAR_3);
 FUNC_3(VAR_5, ((void*)0), VAR_1);
 VAR_7 = FUNC_2();
 if (VAR_7 != 0) {
  FUNC_4(VAR_5, ((void*)0));
  FUNC_6(&VAR_3);
  FUNC_1(VAR_6);
 }
 return (VAR_7);
}
