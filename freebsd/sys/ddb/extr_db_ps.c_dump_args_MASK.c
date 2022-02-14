
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {TYPE_1__* p_args; } ;
struct TYPE_2__ {char* ar_args; scalar_t__ ar_length; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(volatile struct proc *VAR_0)
{
 char *VAR_1;
 int VAR_2, VAR_3;

 if (VAR_0->p_args == ((void*)0))
  return;
 VAR_1 = VAR_0->p_args->ar_args;
 VAR_3 = (int)VAR_0->p_args->ar_length;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1[VAR_2] == '\0')
   FUNC_0(" ");
  else
   FUNC_0("%c", VAR_1[VAR_2]);
 }
}
