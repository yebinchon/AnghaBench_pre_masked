
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const char **VAR_0)
{
 const char *VAR_1;
 uint32_t VAR_2 = 0;

 VAR_1 = *VAR_0;

 while ((*VAR_1 >= '0') && (*VAR_1 <= '9')) {
  VAR_2 *= 10;
  VAR_2 += (*VAR_1 - '0');
  if (VAR_2 >= 1000000) {

   return (0xFFFFFFFF);
  }
  VAR_1++;
 }

 if (*VAR_1 == '.') {

  VAR_1++;
 }
 *VAR_0 = VAR_1;

 return (VAR_2);
}
