
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uargs ;
struct syscall_args {int code; TYPE_1__* callp; int args; } ;
typedef enum systrace_probe_t { ____Placeholder_systrace_probe_t } systrace_probe_t ;
typedef int dtrace_id_t ;
struct TYPE_4__ {int* t_dtrace_systrace_args; } ;
struct TYPE_3__ {int sy_return; int (* sy_systrace_args_func ) (int,int ,int*,int*) ;int sy_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,int,int,int,int,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int*,int*) ;
 int FUNC_4 (int,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_5(struct syscall_args *VAR_3, enum systrace_probe_t VAR_4, int VAR_5)
{
 uint64_t VAR_6[FUNC_2(VAR_3->args)];
 dtrace_id_t VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = VAR_3->code;
 FUNC_1(VAR_6, 0, sizeof(VAR_6));

 if (VAR_4 == VAR_1) {
  if ((VAR_7 = VAR_3->callp->sy_entry) == VAR_0)
   return;

  if (VAR_3->callp->sy_systrace_args_func != ((void*)0))




   (*VAR_3->callp->sy_systrace_args_func)(VAR_9, VAR_3->args,
       VAR_6, &VAR_8);
  else





   FUNC_4(VAR_9, VAR_3->args, VAR_6, &VAR_8);




  VAR_2->t_dtrace_systrace_args = VAR_6;
 } else {
  if ((VAR_7 = VAR_3->callp->sy_return) == VAR_0)
   return;

  VAR_2->t_dtrace_systrace_args = ((void*)0);

  VAR_6[0] = VAR_6[1] = VAR_5;
 }


 FUNC_0(VAR_7, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4]);
}
