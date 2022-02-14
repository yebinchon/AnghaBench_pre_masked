
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {int dummy; } ;
struct linux_sigaltstack_args {int * uoss; int * uss; } ;
struct TYPE_8__ {int ss_flags; int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;
typedef int lss ;
struct TYPE_9__ {int ss_flags; int ss_size; int ss_sp; } ;
typedef TYPE_2__ l_stack_t ;


 int FUNC_0 (int ,char*,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (struct thread*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int VAR_0 ;

int
FUNC_9(struct thread *VAR_1, struct linux_sigaltstack_args *VAR_2)
{
 stack_t VAR_3, VAR_4;
 l_stack_t VAR_5;
 int VAR_6;

 FUNC_8(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_0, "%p, %p", VAR_2->uss, VAR_2->uoss);

 if (VAR_2->uss != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_2->uss, &VAR_5, sizeof(l_stack_t));
  if (VAR_6)
   return (VAR_6);

  VAR_3.ss_sp = FUNC_1(VAR_5.ss_sp);
  VAR_3.ss_size = VAR_5.ss_size;
  VAR_3.ss_flags = FUNC_7(VAR_5.ss_flags);
 }
 VAR_6 = FUNC_6(VAR_1, (VAR_2->uss != ((void*)0)) ? &VAR_3 : ((void*)0),
     (VAR_2->uoss != ((void*)0)) ? &VAR_4 : ((void*)0));
 if (!VAR_6 && VAR_2->uoss != ((void*)0)) {
  VAR_5.ss_sp = FUNC_2(VAR_4.ss_sp);
  VAR_5.ss_size = VAR_4.ss_size;
  VAR_5.ss_flags = FUNC_3(VAR_4.ss_flags);
  VAR_6 = FUNC_5(&VAR_5, VAR_2->uoss, sizeof(l_stack_t));
 }

 return (VAR_6);
}
