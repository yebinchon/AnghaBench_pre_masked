
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct int_tree_map {int * to; } ;
struct TYPE_3__ {int hti; } ;
typedef TYPE_1__ referenced_var_iterator ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline tree
FUNC_1 (referenced_var_iterator *VAR_0)
{
  struct int_tree_map *VAR_1;
  VAR_1 = (struct int_tree_map *) FUNC_0 (&VAR_0->hti);
  if (!VAR_1)
    return ((void*)0);
  return VAR_1->to;
}
