
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (void const*,int) ;
 int FUNC_1 (void const*,int) ;

__attribute__((used)) static size_t FUNC_2(const void* VAR_0, U32 VAR_1, unsigned VAR_2) {
  if (VAR_2 == 6) {
    return FUNC_0(VAR_0, VAR_1) & ((1 << VAR_1) - 1);
  }
  return FUNC_1(VAR_0, VAR_1) & ((1 << VAR_1) - 1);
}
