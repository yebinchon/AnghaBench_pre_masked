
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_9__ {int min; scalar_t__ nodes; TYPE_1__* root; } ;
struct TYPE_8__ {struct TYPE_8__* left; struct TYPE_8__* right; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

fibheap_t
FUNC_2 (fibheap_t VAR_0, fibheap_t VAR_1)
{
  fibnode_t VAR_2, VAR_3, VAR_4;


  if ((VAR_2 = VAR_0->root) == ((void*)0))
    {
      FUNC_1 (VAR_0);
      return VAR_1;
    }
  if ((VAR_3 = VAR_1->root) == ((void*)0))
    {
      FUNC_1 (VAR_1);
      return VAR_0;
    }


  VAR_2->left->right = VAR_3;
  VAR_3->left->right = VAR_2;
  VAR_4 = VAR_2->left;
  VAR_2->left = VAR_3->left;
  VAR_3->left = VAR_4;
  VAR_0->nodes += VAR_1->nodes;


  if (FUNC_0 (VAR_0, VAR_1->min, VAR_0->min) < 0)
    VAR_0->min = VAR_1->min;

  FUNC_1 (VAR_1);
  return VAR_0;
}
