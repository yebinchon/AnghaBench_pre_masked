
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ kind; struct cp_binding_level* level_chain; int type_shadowed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 struct cp_binding_level* VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_6)
{
  tree VAR_7 = VAR_0;

  FUNC_4 (VAR_1);
  FUNC_2 (VAR_2->kind != VAR_5);

  if (FUNC_1 (VAR_6) != VAR_0
      && FUNC_1 (VAR_6) != VAR_3)
    {
      struct cp_binding_level *VAR_8 = VAR_2;
      while (1)
 {
   if (FUNC_3 (VAR_6, VAR_8->type_shadowed))
     FUNC_0 (VAR_1,
        FUNC_1 (VAR_6));
   if (VAR_8->kind == VAR_4)
     VAR_8 = VAR_8->level_chain;
   else
     break;
 }
    }

  FUNC_0 (VAR_1, VAR_7);
}
