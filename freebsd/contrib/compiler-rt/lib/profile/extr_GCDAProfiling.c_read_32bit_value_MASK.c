
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0() {
  uint32_t VAR_3;

  if (VAR_1)
    return (uint32_t)-1;

  VAR_3 = *(uint32_t*)&VAR_2[VAR_0];
  VAR_0 += 4;
  return VAR_3;
}
