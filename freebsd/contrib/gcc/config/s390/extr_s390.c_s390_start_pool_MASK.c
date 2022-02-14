
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {struct constant_pool* next; int first_insn; } ;
typedef int rtx ;


 struct constant_pool* FUNC_0 () ;

__attribute__((used)) static struct constant_pool *
FUNC_1 (struct constant_pool **VAR_0, rtx VAR_1)
{
  struct constant_pool *VAR_2, **VAR_3;

  VAR_2 = FUNC_0 ();
  VAR_2->first_insn = VAR_1;

  for (VAR_3 = VAR_0; *VAR_3; VAR_3 = &(*VAR_3)->next)
    ;
  *VAR_3 = VAR_2;

  return VAR_2;
}
