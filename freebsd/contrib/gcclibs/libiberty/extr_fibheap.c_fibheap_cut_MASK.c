
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef int fibheap_t ;
struct TYPE_6__ {scalar_t__ mark; int * parent; int degree; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (fibheap_t VAR_0, fibnode_t VAR_1, fibnode_t VAR_2)
{
  FUNC_1 (VAR_1);
  VAR_2->degree--;
  FUNC_0 (VAR_0, VAR_1);
  VAR_1->parent = ((void*)0);
  VAR_1->mark = 0;
}
