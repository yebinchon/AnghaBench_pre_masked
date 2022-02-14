
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int array_count; int lock; scalar_t__ next_index; int * array; int os; } ;
typedef TYPE_1__ ocs_varray_t ;
typedef int ocs_os_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int *,char*,TYPE_1__*) ;
 void* FUNC_2 (int ,int,int) ;

ocs_varray_t *
FUNC_3(ocs_os_handle_t VAR_2, uint32_t VAR_3)
{
 ocs_varray_t *VAR_4;

 VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_4), VAR_1 | VAR_0);
 if (VAR_4 != ((void*)0)) {
  VAR_4->os = VAR_2;
  VAR_4->array_count = VAR_3;
  VAR_4->array = FUNC_2(VAR_2, sizeof(*VAR_4->array) * VAR_4->array_count, VAR_1 | VAR_0);
  if (VAR_4->array != ((void*)0)) {
   VAR_4->next_index = 0;
   FUNC_1(VAR_2, &VAR_4->lock, "varray:%p", VAR_4);
  } else {
   FUNC_0(VAR_2, VAR_4, sizeof(*VAR_4));
   VAR_4 = ((void*)0);
  }
 }
 return VAR_4;
}
