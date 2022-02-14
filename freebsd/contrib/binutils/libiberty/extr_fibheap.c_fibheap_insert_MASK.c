
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef scalar_t__ fibheapkey_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_9__ {int nodes; TYPE_1__* min; } ;
struct TYPE_8__ {scalar_t__ key; void* data; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;

fibnode_t
FUNC_2 (fibheap_t VAR_0, fibheapkey_t VAR_1, void *VAR_2)
{
  fibnode_t VAR_3;


  VAR_3 = FUNC_1 ();


  VAR_3->data = VAR_2;
  VAR_3->key = VAR_1;


  FUNC_0 (VAR_0, VAR_3);



  if (VAR_0->min == ((void*)0) || VAR_3->key < VAR_0->min->key)
    VAR_0->min = VAR_3;

  VAR_0->nodes++;

  return VAR_3;
}
