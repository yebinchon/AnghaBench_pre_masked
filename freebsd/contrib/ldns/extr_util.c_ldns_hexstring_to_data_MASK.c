
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(uint8_t *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 if (!VAR_1 || !VAR_0) {
  return -1;
 }

 if (FUNC_1(VAR_1) % 2 != 0) {
  return -2;
 }

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1) / 2; VAR_2++) {
  VAR_0[VAR_2] =
   16 * (uint8_t) FUNC_0(VAR_1[VAR_2*2]) +
   (uint8_t) FUNC_0(VAR_1[VAR_2*2 + 1]);
 }

 return (int) VAR_2;
}
