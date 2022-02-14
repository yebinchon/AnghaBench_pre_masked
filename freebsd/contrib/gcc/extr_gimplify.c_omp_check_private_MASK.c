
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct gimplify_omp_ctx {int variables; struct gimplify_omp_ctx* outer_context; int is_parallel; } ;
typedef TYPE_2__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_5__ {scalar_t__ (* omp_privatize_by_reference ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__ decls; } ;
struct TYPE_6__ {int value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_4__ VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3 (struct gimplify_omp_ctx *VAR_2, tree VAR_3)
{
  splay_tree_node VAR_4;

  do
    {
      VAR_2 = VAR_2->outer_context;
      if (VAR_2 == ((void*)0))
 return !(FUNC_0 (VAR_3)

   || VAR_1.decls.omp_privatize_by_reference (VAR_3));

      VAR_4 = FUNC_1 (VAR_2->variables, (splay_tree_key) VAR_3);
      if (VAR_4 != ((void*)0))
 return (VAR_4->value & VAR_0) == 0;
    }
  while (!VAR_2->is_parallel);
  return 0;
}
