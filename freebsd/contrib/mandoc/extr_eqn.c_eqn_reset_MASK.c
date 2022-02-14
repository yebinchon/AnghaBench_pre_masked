
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {scalar_t__ toksz; scalar_t__ sz; int * end; int start; int data; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct eqn_node *VAR_0)
{
 FUNC_0(VAR_0->data);
 VAR_0->data = VAR_0->start = *(VAR_0->end = ((void*)0));
 VAR_0->sz = VAR_0->toksz = 0;
}
