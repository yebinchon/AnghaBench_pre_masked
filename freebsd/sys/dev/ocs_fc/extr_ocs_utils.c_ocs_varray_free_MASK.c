
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int array_count; int os; struct TYPE_4__* array; int lock; } ;
typedef TYPE_1__ ocs_varray_t ;


 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(ocs_varray_t *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_1(&VAR_0->lock);
  if (VAR_0->array != ((void*)0)) {
   FUNC_0(VAR_0->os, VAR_0->array, sizeof(*VAR_0->array) * VAR_0->array_count);
  }
  FUNC_0(VAR_0->os, VAR_0, sizeof(*VAR_0));
 }
}
