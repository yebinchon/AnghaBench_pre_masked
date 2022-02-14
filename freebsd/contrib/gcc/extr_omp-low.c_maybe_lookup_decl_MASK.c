
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_2__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_6__ {int decl_map; } ;
struct TYPE_8__ {TYPE_1__ cb; } ;
typedef TYPE_3__ omp_context ;
struct TYPE_7__ {scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline tree
FUNC_1 (tree VAR_1, omp_context *VAR_2)
{
  splay_tree_node VAR_3;
  VAR_3 = FUNC_0 (VAR_2->cb.decl_map, (splay_tree_key) VAR_1);
  return VAR_3 ? (tree) VAR_3->value : VAR_0;
}
