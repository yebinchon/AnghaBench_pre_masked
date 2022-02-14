
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t size; scalar_t__* data; } ;
typedef TYPE_1__ emutls_address_array ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(emutls_address_array *VAR_0) {
  if (VAR_0) {
    uintptr_t VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1) {
      if (VAR_0->data[VAR_1])
        FUNC_0(VAR_0->data[VAR_1]);
    }
  }
}
