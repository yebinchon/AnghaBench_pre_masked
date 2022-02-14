
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* var_ann_t ;
typedef int tree ;
struct ptr_info_def {scalar_t__ pt_vars; scalar_t__ name_mem_tag; } ;
struct TYPE_5__ {int (* types_compatible_p ) (int ,int ) ;} ;
struct TYPE_4__ {scalar_t__ symbol_mem_tag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct ptr_info_def* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (int ) ;

void
FUNC_9 (tree VAR_2, tree VAR_3)
{
  tree VAR_4 = FUNC_2 (VAR_3);
  tree VAR_5 = FUNC_2 (VAR_2);
  var_ann_t VAR_6 = FUNC_8 (VAR_4);
  var_ann_t VAR_7 = FUNC_8 (VAR_5);

  FUNC_5 (FUNC_0 (FUNC_3 (VAR_2)));
  FUNC_5 (FUNC_0 (FUNC_3 (VAR_3)));
  if (VAR_6->symbol_mem_tag == VAR_0)
    VAR_6->symbol_mem_tag = VAR_7->symbol_mem_tag;
  else if (VAR_7->symbol_mem_tag == VAR_0)
    VAR_7->symbol_mem_tag = VAR_6->symbol_mem_tag;
  else
    FUNC_5 (VAR_6->symbol_mem_tag == VAR_7->symbol_mem_tag);
  if (FUNC_1 (VAR_2) && FUNC_1 (VAR_3))
    {
      struct ptr_info_def *VAR_8 = FUNC_1 (VAR_2);
      struct ptr_info_def *VAR_9 = FUNC_1 (VAR_3);
      if (VAR_8->name_mem_tag
   && VAR_9->name_mem_tag
   && VAR_8->pt_vars
   && VAR_9->pt_vars)
 FUNC_5 (FUNC_4 (VAR_9->pt_vars,
     VAR_8->pt_vars));
    }
}
