
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ kind; struct cp_binding_level* level_chain; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct cp_binding_level* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_7 (tree VAR_4, tree VAR_5)
{
  tree VAR_6;

  if (VAR_4 == VAR_5
      || (FUNC_3 (VAR_5) != VAR_0 && !FUNC_0 (VAR_5)))
    return;

  VAR_6 = FUNC_1 (FUNC_3 (VAR_5) == VAR_0 ? VAR_5 : FUNC_4 (VAR_5));
  if (VAR_4 != VAR_6)
    FUNC_7 (VAR_4, VAR_6);
  if (FUNC_3 (VAR_5) == VAR_0)
    {
      struct cp_binding_level *VAR_7 = 0;


      while (VAR_1->kind == VAR_3)
 {
   struct cp_binding_level *VAR_8 = VAR_1;
   VAR_1 = VAR_8->level_chain;
   VAR_8->level_chain = VAR_7;
   VAR_7 = VAR_8;
 }

      FUNC_6 (FUNC_2 (VAR_5));
      VAR_2 = VAR_5;


      while (VAR_7)
 {
   struct cp_binding_level *VAR_9 = VAR_7;
   VAR_7 = VAR_9->level_chain;
   VAR_9->level_chain = VAR_1;
   VAR_1 = VAR_9;
 }
    }
  else
    FUNC_5 (VAR_5);
}
