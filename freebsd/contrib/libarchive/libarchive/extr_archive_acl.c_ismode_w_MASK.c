
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const wchar_t *VAR_3, const wchar_t *VAR_4, int *VAR_5)
{
 const wchar_t *VAR_6;

 if (VAR_3 >= VAR_4)
  return (0);
 VAR_6 = VAR_3;
 *VAR_5 = 0;
 while (VAR_6 < VAR_4) {
  switch (*VAR_6++) {
  case L'r': case L'R':
   *VAR_5 |= VAR_1;
   break;
  case L'w': case L'W':
   *VAR_5 |= VAR_2;
   break;
  case L'x': case L'X':
   *VAR_5 |= VAR_0;
   break;
  case L'-':
   break;
  default:
   return (0);
  }
 }
 return (1);
}
