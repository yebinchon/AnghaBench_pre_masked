
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t next_index; size_t entry_count; void** array; } ;
typedef TYPE_1__ ocs_varray_t ;



void *
FUNC_0(ocs_varray_t *VAR_0)
{
 void *VAR_1;

 VAR_1 = VAR_0->array[VAR_0->next_index];
 if (++VAR_0->next_index >= VAR_0->entry_count) {
  VAR_0->next_index = 0;
 }
 return VAR_1;
}
