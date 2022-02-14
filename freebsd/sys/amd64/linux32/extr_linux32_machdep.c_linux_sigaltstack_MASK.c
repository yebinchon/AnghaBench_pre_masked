
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int dummy; } ;
struct linux_sigaltstack_args {int * uoss; int * uss; } ;
struct TYPE_7__ {int ss_flags; int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;
struct TYPE_8__ {int ss_flags; int ss_size; int ss_sp; } ;
typedef TYPE_2__ l_stack_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (struct thread*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct thread *VAR_0, struct linux_sigaltstack_args *VAR_1)
{
 stack_t VAR_2, VAR_3;
 l_stack_t VAR_4;
 int VAR_5;

 if (VAR_1->uss != ((void*)0)) {
  VAR_5 = FUNC_3(VAR_1->uss, &VAR_4, sizeof(l_stack_t));
  if (VAR_5)
   return (VAR_5);

  VAR_2.ss_sp = FUNC_0(VAR_4.ss_sp);
  VAR_2.ss_size = VAR_4.ss_size;
  VAR_2.ss_flags = FUNC_6(VAR_4.ss_flags);
 }
 VAR_5 = FUNC_5(VAR_0, (VAR_1->uss != ((void*)0)) ? &VAR_2 : ((void*)0),
     (VAR_1->uoss != ((void*)0)) ? &VAR_3 : ((void*)0));
 if (!VAR_5 && VAR_1->uoss != ((void*)0)) {
  VAR_4.ss_sp = FUNC_1(VAR_3.ss_sp);
  VAR_4.ss_size = VAR_3.ss_size;
  VAR_4.ss_flags = FUNC_2(VAR_3.ss_flags);
  VAR_5 = FUNC_4(&VAR_4, VAR_1->uoss, sizeof(l_stack_t));
 }

 return (VAR_5);
}
