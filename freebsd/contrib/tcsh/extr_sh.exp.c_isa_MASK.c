
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_0(Char *VAR_11, int VAR_12)
{
    if (VAR_11 == 0)
 return ((VAR_12 & VAR_10) != 0);
    if (*VAR_11 == '\0')
     return 0;
    if (VAR_11[1] == 0) {
 if (VAR_12 & VAR_0 && (*VAR_11 == '+' || *VAR_11 == '-'))
     return (1);
 if (VAR_12 & VAR_6 && (*VAR_11 == '*' || *VAR_11 == '/' || *VAR_11 == '%'))
     return (1);
 if (VAR_12 & VAR_10 && (*VAR_11 == '(' || *VAR_11 == ')' || *VAR_11 == '!' ||
         *VAR_11 == '~' || *VAR_11 == '^' || *VAR_11 == '"'))
     return (1);
    }
    else if (VAR_11[2] == 0) {
 if (VAR_12 & VAR_10) {
     if (VAR_11[0] == '|' && VAR_11[1] == '&')
  return (1);
     if (VAR_11[0] == '<' && VAR_11[1] == '<')
  return (1);
     if (VAR_11[0] == '>' && VAR_11[1] == '>')
  return (1);
 }
 if (VAR_12 & VAR_3) {
     if (VAR_11[0] == '=') {
  if (VAR_11[1] == '=')
      return (VAR_1);
  if (VAR_11[1] == '~')
      return (VAR_2);
     }
     else if (VAR_11[0] == '!') {
  if (VAR_11[1] == '=')
      return (VAR_7);
  if (VAR_11[1] == '~')
      return (VAR_8);
     }
 }
    }
    if (VAR_12 & VAR_9) {
 if (*VAR_11 == '<')
     return (VAR_5);
 if (*VAR_11 == '>')
     return (VAR_4);
    }
    return (0);
}
