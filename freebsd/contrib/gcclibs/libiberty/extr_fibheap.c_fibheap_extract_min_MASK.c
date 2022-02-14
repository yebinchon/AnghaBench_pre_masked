
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_8__ {int * min; } ;
struct TYPE_7__ {void* data; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

void *
FUNC_2 (fibheap_t VAR_0)
{
  fibnode_t VAR_1;
  void *VAR_2 = ((void*)0);


  if (VAR_0->min != ((void*)0))
    {


      VAR_1 = FUNC_0 (VAR_0);
      VAR_2 = VAR_1->data;
      FUNC_1 (VAR_1);
    }

  return VAR_2;
}
