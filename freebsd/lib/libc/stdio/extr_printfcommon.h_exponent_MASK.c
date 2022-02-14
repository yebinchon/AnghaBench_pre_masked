
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(CHAR *VAR_1, int VAR_2, CHAR VAR_3)
{
 CHAR *VAR_4, *VAR_5;
 CHAR VAR_6[VAR_0];

 VAR_4 = VAR_1;
 *VAR_4++ = VAR_3;
 if (VAR_2 < 0) {
  VAR_2 = -VAR_2;
  *VAR_4++ = '-';
 }
 else
  *VAR_4++ = '+';
 VAR_5 = VAR_6 + VAR_0;
 if (VAR_2 > 9) {
  do {
   *--VAR_5 = FUNC_0(VAR_2 % 10);
  } while ((VAR_2 /= 10) > 9);
  *--VAR_5 = FUNC_0(VAR_2);
  for (; VAR_5 < VAR_6 + VAR_0; *VAR_4++ = *VAR_5++);
 }
 else {






  if (VAR_3 == 'e' || VAR_3 == 'E')
   *VAR_4++ = '0';
  *VAR_4++ = FUNC_0(VAR_2);
 }
 return (VAR_4 - VAR_1);
}
