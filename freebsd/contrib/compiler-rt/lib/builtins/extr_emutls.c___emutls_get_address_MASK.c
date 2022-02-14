
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** data; } ;
typedef TYPE_1__ emutls_address_array ;
typedef int __emutls_control ;


 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 uintptr_t FUNC_2 (int *) ;

void *FUNC_3(__emutls_control *VAR_0) {
  uintptr_t VAR_1 = FUNC_2(VAR_0);
  emutls_address_array *VAR_2 = FUNC_1(VAR_1--);
  if (VAR_2->data[VAR_1] == ((void*)0))
    VAR_2->data[VAR_1] = FUNC_0(VAR_0);
  return VAR_2->data[VAR_1];
}
