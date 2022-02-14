
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {size_t count; size_t elems_per_row; size_t size; scalar_t__* array_rows; } ;
typedef TYPE_1__ ocs_array_t ;



void *FUNC_0(ocs_array_t *VAR_0, uint32_t VAR_1)
{
 void *VAR_2 = ((void*)0);

 if (VAR_1 < VAR_0->count) {
  uint32_t VAR_3 = VAR_1 / VAR_0->elems_per_row;
  uint32_t VAR_4 = VAR_1 % VAR_0->elems_per_row;
  VAR_2 = ((uint8_t*)VAR_0->array_rows[VAR_3]) + (VAR_4 * VAR_0->size);
 }
 return VAR_2;
}
