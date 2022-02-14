
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong_t ;



int
FUNC_0(int VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 ulong_t VAR_3;
 int VAR_4 = 0;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++) {
  VAR_4 = (VAR_4 << 4) + *VAR_2;
  if ((VAR_3 = (VAR_4 & 0xf0000000)) != 0) {
   VAR_4 ^= (VAR_3 >> 24);
   VAR_4 ^= VAR_3;
  }
 }

 return (VAR_4 % VAR_0);
}
