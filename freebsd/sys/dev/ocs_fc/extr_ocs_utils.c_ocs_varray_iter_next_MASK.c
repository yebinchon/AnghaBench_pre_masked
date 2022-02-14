
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ ocs_varray_t ;


 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *
FUNC_3(ocs_varray_t *VAR_0)
{
 void *VAR_1 = ((void*)0);

 if (VAR_0 != ((void*)0)) {
  FUNC_1(&VAR_0->lock);
   VAR_1 = FUNC_0(VAR_0);
  FUNC_2(&VAR_0->lock);
 }
 return VAR_1;
}
