
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

char *
FUNC_4 (char *VAR_0, char **VAR_1)
{
  *VAR_1 = "";
  if (FUNC_3 (VAR_0, "operator", 8))
    return *VAR_1;
  VAR_0 += 8;



  if (FUNC_2 (*VAR_0) || *VAR_0 == '_' || *VAR_0 == '$' || *VAR_0 == '\0')
    return *VAR_1;


  while (*VAR_0 == ' ' || *VAR_0 == '\t')
    VAR_0++;



  if (FUNC_2 (*VAR_0) || *VAR_0 == '_' || *VAR_0 == '$')
    {
      char *VAR_2 = VAR_0 + 1;
      while (FUNC_1 (*VAR_2) || *VAR_2 == '_' || *VAR_2 == '$')
 VAR_2++;
      *VAR_1 = VAR_2;
      return VAR_0;
    }

  while (*VAR_0)
    switch (*VAR_0)
      {
      case '\\':
 if (VAR_0[1] == '*')
   {
     if (VAR_0[2] == '=')
       *VAR_1 = VAR_0 + 3;
     else
       *VAR_1 = VAR_0 + 2;
     return VAR_0;
   }
 else if (VAR_0[1] == '[')
   {
     if (VAR_0[2] == ']')
       FUNC_0 ("mismatched quoting on brackets, try 'operator\\[\\]'");
     else if (VAR_0[2] == '\\' && VAR_0[3] == ']')
       {
  *VAR_1 = VAR_0 + 4;
  return VAR_0;
       }
     else
       FUNC_0 ("nothing is allowed between '[' and ']'");
   }
 else
   {

     VAR_0++;
     continue;
   }
 break;
      case '!':
      case '=':
      case '*':
      case '/':
      case '%':
      case '^':
 if (VAR_0[1] == '=')
   *VAR_1 = VAR_0 + 2;
 else
   *VAR_1 = VAR_0 + 1;
 return VAR_0;
      case '<':
      case '>':
      case '+':
      case '-':
      case '&':
      case '|':
 if (VAR_0[0] == '-' && VAR_0[1] == '>')
   {

     if (VAR_0[2] == '*')
       {
  *VAR_1 = VAR_0 + 3;
  return VAR_0;
       }
     else if (VAR_0[2] == '\\')
       {
  *VAR_1 = VAR_0 + 4;
  return VAR_0;
       }
     else
       {
  *VAR_1 = VAR_0 + 2;
  return VAR_0;
       }
   }
 if (VAR_0[1] == '=' || VAR_0[1] == VAR_0[0])
   *VAR_1 = VAR_0 + 2;
 else
   *VAR_1 = VAR_0 + 1;
 return VAR_0;
      case '~':
      case ',':
 *VAR_1 = VAR_0 + 1;
 return VAR_0;
      case '(':
 if (VAR_0[1] != ')')
   FUNC_0 ("`operator ()' must be specified without whitespace in `()'");
 *VAR_1 = VAR_0 + 2;
 return VAR_0;
      case '?':
 if (VAR_0[1] != ':')
   FUNC_0 ("`operator ?:' must be specified without whitespace in `?:'");
 *VAR_1 = VAR_0 + 2;
 return VAR_0;
      case '[':
 if (VAR_0[1] != ']')
   FUNC_0 ("`operator []' must be specified without whitespace in `[]'");
 *VAR_1 = VAR_0 + 2;
 return VAR_0;
      default:
 FUNC_0 ("`operator %s' not supported", VAR_0);
 break;
      }

  *VAR_1 = "";
  return *VAR_1;
}
