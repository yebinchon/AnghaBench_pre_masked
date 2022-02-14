
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
typedef int * pmap_t ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_pmap; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct thread*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct thread *VAR_3;
 pmap_t VAR_4;

 FUNC_1();

 VAR_4 = &VAR_0->p_vmspace->vm_pmap;
 VAR_3 = VAR_1;
 FUNC_2(VAR_3, ((void*)0));
 FUNC_3(&VAR_2);
 FUNC_0(VAR_4);
}
