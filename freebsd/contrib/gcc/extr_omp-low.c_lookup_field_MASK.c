
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_6__ {int field_map; } ;
typedef TYPE_2__ omp_context ;
struct TYPE_5__ {int value; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline tree
FUNC_1 (tree VAR_0, omp_context *VAR_1)
{
  splay_tree_node VAR_2;
  VAR_2 = FUNC_0 (VAR_1->field_map, (splay_tree_key) VAR_0);
  return (tree) VAR_2->value;
}
