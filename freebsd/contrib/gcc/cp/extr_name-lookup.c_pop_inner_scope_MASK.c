
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ kind; struct cp_binding_level* level_chain; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct cp_binding_level* VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;

void
FUNC_6 (tree VAR_3, tree VAR_4)
{
  if (VAR_3 == VAR_4
      || (FUNC_2 (VAR_4) != VAR_0 && !FUNC_0 (VAR_4)))
    return;

  while (VAR_3 != VAR_4)
    {
      if (FUNC_2 (VAR_4) == VAR_0)
 {
   struct cp_binding_level *VAR_5 = 0;


   while (VAR_1->kind == VAR_2)
     {
       struct cp_binding_level *VAR_6 = VAR_1;
       VAR_1 = VAR_6->level_chain;
       VAR_6->level_chain = VAR_5;
       VAR_5 = VAR_6;
     }

   FUNC_4 ();


   while (VAR_5)
     {
       struct cp_binding_level *VAR_7 = VAR_5;
       VAR_5 = VAR_7->level_chain;
       VAR_7->level_chain = VAR_1;
       VAR_1 = VAR_7;
     }
 }
      else
 FUNC_5 ();

      VAR_4 = FUNC_1 (FUNC_2 (VAR_4) == VAR_0 ? VAR_4 : FUNC_3 (VAR_4));
    }
}
