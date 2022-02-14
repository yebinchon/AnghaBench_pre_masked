
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0() {
  uint32_t VAR_3 = 0;
  int VAR_4;

  if (VAR_1)
    return (uint32_t)-1;

  for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
    VAR_3 |= VAR_2[VAR_0++] << (8*VAR_4);
  return VAR_3;
}
