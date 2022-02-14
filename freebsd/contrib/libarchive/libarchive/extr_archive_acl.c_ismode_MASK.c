
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_3, const char *VAR_4, int *VAR_5)
{
 const char *VAR_6;

 if (VAR_3 >= VAR_4)
  return (0);
 VAR_6 = VAR_3;
 *VAR_5 = 0;
 while (VAR_6 < VAR_4) {
  switch (*VAR_6++) {
  case 'r': case 'R':
   *VAR_5 |= VAR_1;
   break;
  case 'w': case 'W':
   *VAR_5 |= VAR_2;
   break;
  case 'x': case 'X':
   *VAR_5 |= VAR_0;
   break;
  case '-':
   break;
  default:
   return (0);
  }
 }
 return (1);
}
