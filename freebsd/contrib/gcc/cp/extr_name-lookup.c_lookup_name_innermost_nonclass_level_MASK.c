
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ kind; struct cp_binding_level* level_chain; } ;
struct TYPE_4__ {scalar_t__ value; struct cp_binding_level* scope; } ;
typedef TYPE_1__ cxx_binding ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cp_binding_level* FUNC_7 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_6)
{
  struct cp_binding_level *VAR_7;
  tree VAR_8 = VAR_0;

  FUNC_8 (VAR_2);
  VAR_7 = FUNC_7 ();

  if (VAR_7->kind == VAR_5)
    {
      VAR_8 = FUNC_2 (VAR_6);


      if (VAR_8 != VAR_0 && FUNC_5 (VAR_8) == VAR_1)
 VAR_8 = FUNC_6 (VAR_8);
    }
  else if (FUNC_1 (VAR_6)
    && FUNC_3 (FUNC_1 (VAR_6)))
    {
      cxx_binding *VAR_9;
      VAR_9 = FUNC_1 (VAR_6);
      while (1)
 {
   if (VAR_9->scope == VAR_7
       && !(FUNC_5 (VAR_9->value) == VAR_3
     && FUNC_0 (VAR_9->value)))
     FUNC_4 (VAR_2, VAR_9->value);

   if (VAR_7->kind == VAR_4)
     VAR_7 = VAR_7->level_chain;
   else
     break;
 }
    }

  FUNC_4 (VAR_2, VAR_8);
}
