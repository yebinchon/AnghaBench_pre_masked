
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* fibnode_t ;
struct TYPE_6__ {struct TYPE_6__* right; struct TYPE_6__* left; TYPE_1__* parent; } ;
struct TYPE_5__ {TYPE_2__* child; } ;



__attribute__((used)) static fibnode_t
FUNC_0 (fibnode_t VAR_0)
{
  fibnode_t VAR_1;

  if (VAR_0 == VAR_0->left)
    VAR_1 = ((void*)0);
  else
    VAR_1 = VAR_0->left;

  if (VAR_0->parent != ((void*)0) && VAR_0->parent->child == VAR_0)
    VAR_0->parent->child = VAR_1;

  VAR_0->right->left = VAR_0->left;
  VAR_0->left->right = VAR_0->right;

  VAR_0->parent = ((void*)0);
  VAR_0->left = VAR_0;
  VAR_0->right = VAR_0;

  return VAR_1;
}
