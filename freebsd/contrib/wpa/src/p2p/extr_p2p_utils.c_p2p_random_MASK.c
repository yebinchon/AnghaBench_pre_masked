
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (unsigned char*,size_t) ;

int FUNC_1(char *VAR_0, size_t VAR_1)
{
 u8 VAR_2;
 size_t VAR_3;
 u8 VAR_4 = 'Z' - 'A' + 1;
 u8 VAR_5 = 10;

 if (FUNC_0((unsigned char *) VAR_0, VAR_1))
  return -1;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = VAR_0[VAR_3];
  VAR_2 %= 2 * VAR_4 + VAR_5;
  if (VAR_2 < VAR_4)
   VAR_0[VAR_3] = 'A' + VAR_2;
  else if (VAR_2 < 2 * VAR_4)
   VAR_0[VAR_3] = 'a' + (VAR_2 - VAR_4);
  else
   VAR_0[VAR_3] = '0' + (VAR_2 - 2 * VAR_4);
 }

 return 0;
}
