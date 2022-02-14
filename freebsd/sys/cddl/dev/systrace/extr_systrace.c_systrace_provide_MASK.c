
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
struct TYPE_2__ {int * pp_syscallnames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,char*,int ,void*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char*) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(void *VAR_5, dtrace_probedesc_t *VAR_6)
{
 int VAR_7;

 if (VAR_6 != ((void*)0))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_3(VAR_3, VAR_1,
      VAR_4.pp_syscallnames[VAR_7], "entry") != 0)
   continue;

  (void)FUNC_2(VAR_3, VAR_1,
      VAR_4.pp_syscallnames[VAR_7], "entry",
      VAR_2,
      (void *)((uintptr_t)FUNC_0(VAR_7)));
  (void)FUNC_2(VAR_3, VAR_1,
      VAR_4.pp_syscallnames[VAR_7], "return",
      VAR_2,
      (void *)((uintptr_t)FUNC_1(VAR_7)));
 }
}
