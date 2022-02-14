
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int omp_context ;
struct TYPE_3__ {scalar_t__ value; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static omp_context *
FUNC_1 (tree VAR_1)
{
  splay_tree_node VAR_2;
  VAR_2 = FUNC_0 (VAR_0, (splay_tree_key) VAR_1);
  return VAR_2 ? (omp_context *) VAR_2->value : ((void*)0);
}
