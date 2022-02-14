
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef scalar_t__ const u_char ;



__attribute__((used)) static int
FUNC_0(const u_int8_t *VAR_0, u_char VAR_1, size_t VAR_2, size_t *VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_0[VAR_4] != VAR_1) {
   *VAR_3 = VAR_4;
   return 1;
  }
 }
 return 0;
}
