
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mfsplay_tree_node ;
struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; } ;



__attribute__((used)) static mfsplay_tree_node
FUNC_0 (mfsplay_tree_node * VAR_0, unsigned VAR_1,
                              unsigned VAR_2)
{
  unsigned VAR_3 = VAR_1 + (VAR_2 - VAR_1) / 2;
  mfsplay_tree_node VAR_4 = VAR_0[VAR_3];



  if (VAR_1 + 1 <= VAR_3)
    VAR_4->left = FUNC_0 (VAR_0, VAR_1, VAR_3 - 1);
  else
    VAR_4->left = ((void*)0);

  if (VAR_3 + 1 <= VAR_2)
    VAR_4->right = FUNC_0 (VAR_0, VAR_3 + 1, VAR_2);
  else
    VAR_4->right = ((void*)0);

  return VAR_4;
}
