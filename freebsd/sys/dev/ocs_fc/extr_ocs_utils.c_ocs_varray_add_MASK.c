
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ entry_count; scalar_t__ array_count; int lock; void** array; } ;
typedef TYPE_1__ ocs_varray_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int32_t
FUNC_2(ocs_varray_t *VAR_0, void *VAR_1)
{
 uint32_t VAR_2 = -1;

 FUNC_0(&VAR_0->lock);
  if (VAR_0->entry_count < VAR_0->array_count) {
   VAR_0->array[VAR_0->entry_count++] = VAR_1;
   VAR_2 = 0;
  }
 FUNC_1(&VAR_0->lock);

 return VAR_2;
}
