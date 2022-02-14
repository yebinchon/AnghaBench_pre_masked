
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; scalar_t__ binding_depth; struct TYPE_8__* level_chain; scalar_t__ has_visibility; } ;
typedef TYPE_1__ cxx_scope ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (char*) ;

cxx_scope *
FUNC_7 (void)
{
  cxx_scope *VAR_10 = VAR_3;

  if (VAR_10->kind == VAR_9 && VAR_2)
    VAR_3 = VAR_2;


  if (FUNC_0 (VAR_5))
    FUNC_2 (!FUNC_3 (VAR_10));

  if (VAR_0)
    {
      FUNC_4 (--VAR_1);
      FUNC_1 (VAR_10, VAR_6, "leave");
      if (VAR_7 != (VAR_10 == VAR_2))
 {
   FUNC_4 (VAR_1);
   FUNC_6 ("XXX is_class_level != (current_scope == class_scope)\n");
 }
      VAR_7 = 0;
    }







  VAR_3 = VAR_10->level_chain;






  if (VAR_10->kind != VAR_9
      && VAR_10->kind != VAR_8)
    {
      VAR_10->level_chain = VAR_4;
      FUNC_2 (!VAR_0
    || VAR_10->binding_depth == VAR_1);
      VAR_4 = VAR_10;
    }



  if (VAR_10->kind == VAR_8)
    {
      VAR_2 = ((void*)0);
      for (VAR_10 = VAR_3; VAR_10; VAR_10 = VAR_10->level_chain)
 if (VAR_10->kind == VAR_8)
   {
     VAR_2 = VAR_10;
     break;
   }
    }

  return VAR_3;
}
