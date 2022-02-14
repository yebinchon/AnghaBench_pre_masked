
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* var_ann_t ;
typedef int tree ;
struct ptr_info_def {scalar_t__ name_mem_tag; scalar_t__ value_escapes_p; int * pt_vars; scalar_t__ is_dereferenced; } ;
struct TYPE_3__ {int symbol_mem_tag; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct ptr_info_def* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 size_t VAR_1 ;
 int FUNC_12 (size_t) ;
 TYPE_1__* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (void)
{
  size_t VAR_2;
  tree VAR_3;

  for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
    {
      tree VAR_4;
      var_ann_t VAR_5;
      struct ptr_info_def *VAR_6;


      VAR_3 = FUNC_12 (VAR_2);
      if (!VAR_3)
 continue;



      if (!FUNC_0 (FUNC_4 (VAR_3)) || !FUNC_5 (VAR_3))
 continue;





      VAR_4 = FUNC_2 (VAR_3);
      if (FUNC_3 (VAR_4) == VAR_0
   && FUNC_11 (VAR_3))
 continue;

      VAR_6 = FUNC_1 (VAR_3);
      if (VAR_6 == ((void*)0))
 continue;

      VAR_5 = FUNC_13 (VAR_4);
      if (VAR_6->is_dereferenced && !VAR_6->name_mem_tag && !VAR_5->symbol_mem_tag)
 {
   FUNC_8 ("dereferenced pointers should have a name or a symbol tag");
   goto err;
 }

      if (VAR_6->name_mem_tag
   && (VAR_6->pt_vars == ((void*)0) || FUNC_6 (VAR_6->pt_vars)))
 {
   FUNC_8 ("pointers with a memory tag, should have points-to sets");
   goto err;
 }

      if (VAR_6->value_escapes_p
   && VAR_6->name_mem_tag
   && !FUNC_10 (VAR_6->name_mem_tag))
 {
   FUNC_8 ("pointer escapes but its name tag is not call-clobbered");
   goto err;
 }
    }

  return;

err:
  FUNC_7 (VAR_3);
  FUNC_9 ("verify_flow_sensitive_alias_info failed");
}
