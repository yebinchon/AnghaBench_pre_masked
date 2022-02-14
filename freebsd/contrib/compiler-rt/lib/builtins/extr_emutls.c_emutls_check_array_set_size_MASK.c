
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t size; } ;
typedef TYPE_1__ emutls_address_array ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static __inline void FUNC_2(emutls_address_array *VAR_0,
                                                 uintptr_t VAR_1) {
  if (VAR_0 == ((void*)0))
    FUNC_0();
  VAR_0->size = VAR_1;
  FUNC_1(VAR_0);
}
