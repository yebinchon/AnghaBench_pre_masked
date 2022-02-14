
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {uintptr_t size; scalar_t__ data; int skip_destructor_rounds; } ;
typedef TYPE_1__ emutls_address_array ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (TYPE_1__*,uintptr_t) ;
 TYPE_1__* FUNC_2 () ;
 uintptr_t FUNC_3 (uintptr_t) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,uintptr_t) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static __inline emutls_address_array *
FUNC_7(uintptr_t VAR_1) {
  emutls_address_array *VAR_2 = FUNC_2();
  if (VAR_2 == ((void*)0)) {
    uintptr_t VAR_3 = FUNC_3(VAR_1);
    VAR_2 = (emutls_address_array *)FUNC_4(FUNC_0(VAR_3));
    if (VAR_2) {
      FUNC_5(VAR_2->data, 0, VAR_3 * sizeof(void *));
      VAR_2->skip_destructor_rounds = VAR_0;
    }
    FUNC_1(VAR_2, VAR_3);
  } else if (VAR_1 > VAR_2->size) {
    uintptr_t VAR_4 = VAR_2->size;
    uintptr_t VAR_5 = FUNC_3(VAR_1);
    VAR_2 = (emutls_address_array *)FUNC_6(VAR_2, FUNC_0(VAR_5));
    if (VAR_2)
      FUNC_5(VAR_2->data + VAR_4, 0,
             (VAR_5 - VAR_4) * sizeof(void *));
    FUNC_1(VAR_2, VAR_5);
  }
  return VAR_2;
}
