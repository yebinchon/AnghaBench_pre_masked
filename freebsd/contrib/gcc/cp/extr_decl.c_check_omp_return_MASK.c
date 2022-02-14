
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_binding_level {scalar_t__ kind; struct cp_binding_level* level_chain; } ;


 struct cp_binding_level* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;

bool
FUNC_1 (void)
{
  struct cp_binding_level *VAR_2;
  for (VAR_2 = VAR_0; VAR_2 ; VAR_2 = VAR_2->level_chain)
    if (VAR_2->kind == VAR_1)
      {
 FUNC_0 ("invalid exit from OpenMP structured block");
 return 0;
      }
  return 1;
}
