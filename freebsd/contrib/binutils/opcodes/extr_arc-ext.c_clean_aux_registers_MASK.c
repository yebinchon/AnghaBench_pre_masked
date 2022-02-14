
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ExtAuxRegister {struct ExtAuxRegister* name; struct ExtAuxRegister* next; } ;


 int FUNC_0 (struct ExtAuxRegister*) ;

__attribute__((used)) static void
FUNC_1(struct ExtAuxRegister *VAR_0)
{
  if (VAR_0 -> next)
    {
      FUNC_1( VAR_0->next);
      FUNC_0(VAR_0 -> name);
      FUNC_0(VAR_0 -> next);
      VAR_0 ->next = ((void*)0);
    }
  else
    FUNC_0(VAR_0 -> name);
}
