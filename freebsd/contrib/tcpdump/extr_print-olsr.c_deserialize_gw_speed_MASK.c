
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_0(uint8_t VAR_2) {
  uint32_t VAR_3;
  uint32_t VAR_4;

  if (!VAR_2) {
    return 0;
  }

  if (VAR_2 == VAR_1) {

    return VAR_0;
  }

  VAR_3 = (VAR_2 >> 3) + 1;
  VAR_4 = VAR_2 & 7;

  while (VAR_4-- > 0) {
    VAR_3 *= 10;
  }
  return VAR_3;
}
