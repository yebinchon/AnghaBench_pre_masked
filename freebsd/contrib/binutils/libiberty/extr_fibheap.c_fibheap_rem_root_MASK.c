
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_7__ {int * root; } ;
struct TYPE_6__ {struct TYPE_6__* left; } ;


 int * FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (fibheap_t VAR_0, fibnode_t VAR_1)
{
  if (VAR_1->left == VAR_1)
    VAR_0->root = ((void*)0);
  else
    VAR_0->root = FUNC_0 (VAR_1);
}
