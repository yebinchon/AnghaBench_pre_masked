
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef scalar_t__ fibheapkey_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_16__ {TYPE_1__* min; } ;
struct TYPE_15__ {scalar_t__ key; struct TYPE_15__* parent; void* data; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,void*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;

void *
FUNC_4 (fibheap_t VAR_0, fibnode_t VAR_1,
                          fibheapkey_t VAR_2, void *VAR_3)
{
  void *VAR_4;
  fibheapkey_t VAR_5;
  fibnode_t VAR_6;




  if (FUNC_1 (VAR_0, VAR_2, VAR_3, VAR_1) > 0)
    return ((void*)0);

  VAR_4 = VAR_1->data;
  VAR_5 = VAR_1->key;
  VAR_1->data = VAR_3;
  VAR_1->key = VAR_2;
  VAR_6 = VAR_1->parent;

  if (VAR_5 == VAR_2)
    return VAR_4;




  if (VAR_6 != ((void*)0) && FUNC_2 (VAR_0, VAR_1, VAR_6) <= 0)
    {
      FUNC_3 (VAR_0, VAR_1, VAR_6);
      FUNC_0 (VAR_0, VAR_6);
    }

  if (FUNC_2 (VAR_0, VAR_1, VAR_0->min) <= 0)
    VAR_0->min = VAR_1;

  return VAR_4;
}
