
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* node_next; } ;
typedef TYPE_1__ node ;



void *
FUNC_0(
 void *VAR_0
 )
{
 node *VAR_1;

 VAR_1 = VAR_0;
 VAR_1--;

 if (VAR_1->node_next == ((void*)0))
  return ((void*)0);

 return VAR_1->node_next + 1;
}
