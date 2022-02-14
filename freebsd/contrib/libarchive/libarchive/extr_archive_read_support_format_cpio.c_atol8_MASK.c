
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



__attribute__((used)) static int64_t
FUNC_0(const char *VAR_0, unsigned VAR_1)
{
 int64_t VAR_2;
 int VAR_3;

 VAR_2 = 0;
 while (VAR_1-- > 0) {
  if (*VAR_0 >= '0' && *VAR_0 <= '7')
   VAR_3 = *VAR_0 - '0';
  else
   return (VAR_2);
  VAR_0++;
  VAR_2 <<= 3;
  VAR_2 |= VAR_3;
 }
 return (VAR_2);
}
