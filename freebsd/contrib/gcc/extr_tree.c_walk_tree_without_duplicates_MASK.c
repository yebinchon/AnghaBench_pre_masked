
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int walk_tree_fn ;
typedef int tree ;
struct pointer_set_t {int dummy; } ;


 struct pointer_set_t* FUNC_0 () ;
 int FUNC_1 (struct pointer_set_t*) ;
 int FUNC_2 (int *,int ,void*,struct pointer_set_t*) ;

tree
FUNC_3 (tree *VAR_0, walk_tree_fn VAR_1, void *VAR_2)
{
  tree VAR_3;
  struct pointer_set_t *VAR_4;

  VAR_4 = FUNC_0 ();
  VAR_3 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_4);
  FUNC_1 (VAR_4);
  return VAR_3;
}
