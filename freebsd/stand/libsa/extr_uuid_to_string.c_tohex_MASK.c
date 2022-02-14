
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(char **VAR_0, int VAR_1, uint32_t VAR_2)
{
 static const char *VAR_3 = "0123456789abcdef";
 char *VAR_4 = *VAR_0;
 int VAR_5;

 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--) {
  VAR_4[VAR_5] = VAR_3[VAR_2 & 0xf];
  VAR_2 >>= 4;
 }
 *VAR_0 = VAR_4 + VAR_1;
}
