
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct named_label_use_entry {int in_omp_scope; scalar_t__ names_in_scope; struct cp_binding_level* binding_level; struct named_label_use_entry* next; } ;
struct named_label_entry {int in_try_scope; int in_catch_scope; int in_omp_scope; struct named_label_use_entry* uses; scalar_t__ names_in_scope; struct cp_binding_level* binding_level; int bad_decls; } ;
struct cp_binding_level {int kind; scalar_t__ names; struct cp_binding_level* level_chain; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;



 int FUNC_2 (int *,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3 (void **VAR_0, void *VAR_1)
{
  struct named_label_entry *VAR_2 = (struct named_label_entry *) *VAR_0;
  struct cp_binding_level *VAR_3 = (struct cp_binding_level *) VAR_1;
  struct cp_binding_level *VAR_4 = VAR_3->level_chain;

  if (VAR_2->binding_level == VAR_3)
    {
      tree VAR_5;

      for (VAR_5 = VAR_2->names_in_scope; VAR_5; VAR_5 = FUNC_0 (VAR_5))
 if (FUNC_1 (VAR_5))
   VAR_2->bad_decls = FUNC_2 (((void*)0), VAR_5, VAR_2->bad_decls);

      VAR_2->binding_level = VAR_4;
      VAR_2->names_in_scope = VAR_4->names;
      switch (VAR_3->kind)
 {
 case 128:
   VAR_2->in_try_scope = 1;
   break;
 case 130:
   VAR_2->in_catch_scope = 1;
   break;
 case 129:
   VAR_2->in_omp_scope = 1;
   break;
 default:
   break;
 }
    }
  else if (VAR_2->uses)
    {
      struct named_label_use_entry *VAR_6;

      for (VAR_6 = VAR_2->uses; VAR_6 ; VAR_6 = VAR_6->next)
 if (VAR_6->binding_level == VAR_3)
   {
     VAR_6->binding_level = VAR_4;
     VAR_6->names_in_scope = VAR_4->names;
     if (VAR_3->kind == 129)
       VAR_6->in_omp_scope = 1;
   }
    }

  return 1;
}
