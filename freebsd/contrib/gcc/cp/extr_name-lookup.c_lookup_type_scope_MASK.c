
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ tag_scope ;
struct cp_binding_level {scalar_t__ kind; scalar_t__ this_entity; struct cp_binding_level* level_chain; } ;
struct TYPE_7__ {struct cp_binding_level* scope; scalar_t__ value; scalar_t__ type; } ;
typedef TYPE_1__ cxx_binding ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_2 ;
 struct cp_binding_level* VAR_3 ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ,scalar_t__) ;
 TYPE_1__* FUNC_7 (scalar_t__,TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

tree
FUNC_10 (tree VAR_10, tag_scope VAR_11)
{
  cxx_binding *VAR_12 = ((void*)0);
  tree VAR_13 = VAR_1;

  FUNC_9 (VAR_2);


  if (VAR_3->kind != VAR_6)
    VAR_12 = FUNC_7 (VAR_10, ((void*)0), 1);
  for (; VAR_12; VAR_12 = FUNC_7 (VAR_10, VAR_12, 1))
    {
      if (FUNC_8 (VAR_12->type, VAR_0)
   && (VAR_11 != VAR_8
       || FUNC_2 (VAR_12)
       || FUNC_0 (VAR_12->type) == VAR_12->scope->this_entity))
 VAR_13 = VAR_12->type;
      else if ((VAR_11 != VAR_8
  || !FUNC_1 (VAR_12))
        && FUNC_8 (VAR_12->value, VAR_0))
 VAR_13 = VAR_12->value;

      if (VAR_13)
 break;
    }


  if (!VAR_13)
    {
      VAR_12 = FUNC_6
        (FUNC_3 (FUNC_5 ()), VAR_10);

      if (VAR_12)
 {

   if (FUNC_8 (VAR_12->type, VAR_0))
     VAR_13 = VAR_12->type;
   else if (FUNC_8 (VAR_12->value, VAR_0))
     VAR_13 = VAR_12->value;
 }

    }



  if (VAR_13)
    {
      struct cp_binding_level *VAR_14 = VAR_3;
      while (VAR_14)
 {
   if (VAR_12->scope == VAR_14)
     FUNC_4 (VAR_2, VAR_13);

   if (VAR_14->kind == VAR_5 || VAR_14->kind == VAR_7)
     VAR_14 = VAR_14->level_chain;
   else if (VAR_14->kind == VAR_4
     && VAR_11 == VAR_9)
     VAR_14 = VAR_14->level_chain;
   else
     break;
 }
    }

  FUNC_4 (VAR_2, VAR_1);
}
