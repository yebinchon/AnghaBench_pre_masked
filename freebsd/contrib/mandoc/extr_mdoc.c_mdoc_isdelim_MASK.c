
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mdelim { ____Placeholder_mdelim } mdelim ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

enum mdelim
FUNC_1(const char *VAR_4)
{

 if ('\0' == VAR_4[0])
  return VAR_2;

 if ('\0' == VAR_4[1])
  switch (VAR_4[0]) {
  case '(':
  case '[':
   return VAR_3;
  case '|':
   return VAR_1;
  case '.':
  case ',':
  case ';':
  case ':':
  case '?':
  case '!':
  case ')':
  case ']':
   return VAR_0;
  default:
   return VAR_2;
  }

 if ('\\' != VAR_4[0])
  return VAR_2;

 if (0 == FUNC_0(VAR_4 + 1, "."))
  return VAR_0;
 if (0 == FUNC_0(VAR_4 + 1, "fR|\\fP"))
  return VAR_1;

 return VAR_2;
}
