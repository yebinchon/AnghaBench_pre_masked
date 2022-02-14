
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* dtrace_id_t ;
struct TYPE_2__ {void* sy_return; void* sy_entry; int * sy_systrace_args_func; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void *VAR_4, dtrace_id_t VAR_5, void *VAR_6)
{
 int VAR_7 = FUNC_1((uintptr_t)VAR_6);

 if (VAR_0[VAR_7].sy_systrace_args_func == ((void*)0))
  VAR_0[VAR_7].sy_systrace_args_func = VAR_1;

 if (FUNC_0((uintptr_t)VAR_6))
  VAR_0[VAR_7].sy_entry = VAR_5;
 else
  VAR_0[VAR_7].sy_return = VAR_5;
 VAR_3++;
 if (VAR_3 == 1)
  VAR_2 = 1;
}
