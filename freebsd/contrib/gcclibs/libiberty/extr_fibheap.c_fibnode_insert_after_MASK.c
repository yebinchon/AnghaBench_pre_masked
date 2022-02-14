
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
struct TYPE_4__ {struct TYPE_4__* left; struct TYPE_4__* right; } ;



__attribute__((used)) static void
FUNC_0 (fibnode_t VAR_0, fibnode_t VAR_1)
{
  if (VAR_0 == VAR_0->right)
    {
      VAR_0->right = VAR_1;
      VAR_0->left = VAR_1;
      VAR_1->right = VAR_0;
      VAR_1->left = VAR_0;
    }
  else
    {
      VAR_1->right = VAR_0->right;
      VAR_0->right->left = VAR_1;
      VAR_0->right = VAR_1;
      VAR_1->left = VAR_0;
    }
}
