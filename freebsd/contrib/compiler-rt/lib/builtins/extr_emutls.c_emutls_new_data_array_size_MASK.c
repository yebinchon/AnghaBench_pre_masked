
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int emutls_address_array ;



__attribute__((used)) static __inline uintptr_t FUNC_0(uintptr_t VAR_0) {



  uintptr_t VAR_1 = sizeof(emutls_address_array) / sizeof(void *);
  return ((VAR_0 + VAR_1 + 15) & ~((uintptr_t)15)) - VAR_1;
}
