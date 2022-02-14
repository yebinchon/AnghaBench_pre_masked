
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, int *VAR_1, char *VAR_2)
{

 *VAR_2 = VAR_0[*VAR_1];

 switch (*VAR_2) {
 case '+':
 case '-':
 case '*':
 case '/':
 case '%':
 case '&':
 case ':':
  break;
 case '<':
  switch (VAR_0[*VAR_1 + 1]) {
  case '=':
   *VAR_2 = 'l';
   (*VAR_1)++;
   break;
  case '>':
   *VAR_2 = '!';
   (*VAR_1)++;
   break;
  case '?':
   *VAR_2 = 'i';
   (*VAR_1)++;
   break;
  default:
   break;
  }
  break;
 case '>':
  switch (VAR_0[*VAR_1 + 1]) {
  case '=':
   *VAR_2 = 'g';
   (*VAR_1)++;
   break;
  case '?':
   *VAR_2 = 'a';
   (*VAR_1)++;
   break;
  default:
   break;
  }
  break;
 case '=':
  if ('=' == VAR_0[*VAR_1 + 1])
   (*VAR_1)++;
  break;
 default:
  return 0;
 }
 (*VAR_1)++;

 return *VAR_2;
}
