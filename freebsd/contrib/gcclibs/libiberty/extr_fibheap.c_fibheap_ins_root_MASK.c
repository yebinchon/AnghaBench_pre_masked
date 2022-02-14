
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_8__ {TYPE_1__* root; } ;
struct TYPE_7__ {struct TYPE_7__* right; struct TYPE_7__* left; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (fibheap_t VAR_0, fibnode_t VAR_1)
{


  if (VAR_0->root == ((void*)0))
    {
      VAR_0->root = VAR_1;
      VAR_1->left = VAR_1;
      VAR_1->right = VAR_1;
      return;
    }



  FUNC_0 (VAR_0->root, VAR_1);
}
