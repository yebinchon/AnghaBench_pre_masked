
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_os_handle_t ;
struct TYPE_4__ {int size; int count; int elems_per_row; int n_rows; int bytes_per_row; int array_rows_len; int ** array_rows; int os; } ;
typedef TYPE_1__ ocs_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int ,int,int) ;
 int VAR_2 ;

ocs_array_t *
FUNC_3(ocs_os_handle_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 ocs_array_t *VAR_6 = ((void*)0);
 uint32_t VAR_7;




 if (VAR_4 > VAR_2) {
  FUNC_1(((void*)0), "Error: size exceeds slab length\n");
  return ((void*)0);
 }

 VAR_6 = FUNC_2(VAR_3, sizeof(*VAR_6), VAR_1 | VAR_0);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_6->os = VAR_3;
 VAR_6->size = VAR_4;
 VAR_6->count = VAR_5;
 VAR_6->elems_per_row = VAR_2 / VAR_4;
 VAR_6->n_rows = (VAR_5 + VAR_6->elems_per_row - 1) / VAR_6->elems_per_row;
 VAR_6->bytes_per_row = VAR_6->elems_per_row * VAR_6->size;

 VAR_6->array_rows_len = VAR_6->n_rows * sizeof(*VAR_6->array_rows);
 VAR_6->array_rows = FUNC_2(VAR_3, VAR_6->array_rows_len, VAR_1 | VAR_0);
 if (VAR_6->array_rows == ((void*)0)) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }
 for (VAR_7 = 0; VAR_7 < VAR_6->n_rows; VAR_7++) {
  VAR_6->array_rows[VAR_7] = FUNC_2(VAR_3, VAR_6->bytes_per_row, VAR_1 | VAR_0);
  if (VAR_6->array_rows[VAR_7] == ((void*)0)) {
   FUNC_0(VAR_6);
   return ((void*)0);
  }
 }

 return VAR_6;
}
