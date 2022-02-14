
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct gimplify_omp_ctx {struct gimplify_omp_ctx* outer_context; scalar_t__ is_parallel; int variables; } ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_3__ {int value; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gimplify_omp_ctx*,int *,int) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

void
FUNC_3 (struct gimplify_omp_ctx *VAR_3, tree VAR_4)
{
  splay_tree_node VAR_5;

  if (VAR_4 == ((void*)0) || !FUNC_0 (VAR_4))
    return;

  do
    {
      VAR_5 = FUNC_2 (VAR_3->variables, (splay_tree_key)VAR_4);
      if (VAR_5 != ((void*)0))
 {
   if (VAR_5->value & VAR_2)
     VAR_5->value = VAR_0 | (VAR_5->value & VAR_1);
   else
     return;
 }
      else if (VAR_3->is_parallel)
 FUNC_1 (VAR_3, VAR_4, VAR_0);

      VAR_3 = VAR_3->outer_context;
    }
  while (VAR_3);
}
