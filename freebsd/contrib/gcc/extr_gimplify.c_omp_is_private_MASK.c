
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct gimplify_omp_ctx {struct gimplify_omp_ctx* outer_context; scalar_t__ is_parallel; scalar_t__ is_combined_parallel; int variables; } ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_3__ {int value; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 struct gimplify_omp_ctx* VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5 (struct gimplify_omp_ctx *VAR_6, tree VAR_7)
{
  splay_tree_node VAR_8;

  VAR_8 = FUNC_4 (VAR_6->variables, (splay_tree_key)VAR_7);
  if (VAR_8 != ((void*)0))
    {
      if (VAR_8->value & VAR_4)
 {
   if (VAR_6 == VAR_5)
     {
       FUNC_2 ("iteration variable %qs should be private",
       FUNC_1 (FUNC_0 (VAR_7)));
       VAR_8->value = VAR_2;
       return 1;
     }
   else
     return 0;
 }
      else if ((VAR_8->value & VAR_0) != 0
        && (VAR_6 == VAR_5
     || (VAR_6->is_combined_parallel
         && VAR_5->outer_context == VAR_6)))
 {
   if ((VAR_8->value & VAR_1) != 0)
     FUNC_2 ("iteration variable %qs should not be firstprivate",
     FUNC_1 (FUNC_0 (VAR_7)));
   else if ((VAR_8->value & VAR_3) != 0)
     FUNC_2 ("iteration variable %qs should not be reduction",
     FUNC_1 (FUNC_0 (VAR_7)));
 }
      return 1;
    }

  if (VAR_6->is_parallel)
    return 0;
  else if (VAR_6->outer_context)
    return FUNC_5 (VAR_6->outer_context, VAR_7);
  else
    return !FUNC_3 (VAR_7);
}
