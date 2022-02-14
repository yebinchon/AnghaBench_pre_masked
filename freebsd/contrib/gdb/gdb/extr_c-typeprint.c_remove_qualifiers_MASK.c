
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_0)
{
  int VAR_1 = 0;


  int VAR_2 = 0;
  char *VAR_3 = (char *) FUNC_0 (FUNC_1 (VAR_0));
  char *VAR_4;
  char *VAR_5 = 0;


  for (VAR_4 = VAR_0; *VAR_4; VAR_4++)
    {
      if (VAR_1)
 {
   if (*VAR_4 == VAR_1)
     VAR_1 = 0;
   else if (*VAR_4 == '\\' && *(VAR_4 + 1))
     VAR_4++;
 }
      else if (VAR_4[0] == ':' && VAR_4[1] == ':')
 {





   if (VAR_2 == 0)
     {
       VAR_5 = VAR_4 + 2;
       VAR_4++;
     }
 }
      else if (*VAR_4 == '"' || *VAR_4 == '\'')
 VAR_1 = *VAR_4;
      else if (*VAR_4 == '(')
 VAR_3[VAR_2++] = ')';
      else if (*VAR_4 == '[')
 VAR_3[VAR_2++] = ']';



      else if (*VAR_4 == '<')
 VAR_3[VAR_2++] = '>';
      else if (*VAR_4 == ')' || *VAR_4 == ']' || *VAR_4 == '>')
 {
   if (VAR_2 > 0 && VAR_3[VAR_2 - 1] == *VAR_4)
     VAR_2--;
   else
     {




       int VAR_6;

       for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--)
  if (VAR_3[VAR_6] == *VAR_4)
    {
      VAR_2 = VAR_6;
      break;
    }
     }
 }
    }

  if (VAR_5)
    return VAR_5;
  else


    return VAR_0;
}
