
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;

__attribute__((used)) static char *
FUNC_1 (char *const *VAR_0)
{
  char *VAR_1;
  char *VAR_2;
  size_t VAR_3;
  int VAR_4, VAR_5, VAR_6;

  VAR_3 = 0;
  for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
    {





      for (VAR_5 = 0; VAR_0[VAR_4][VAR_5]; VAR_5++)
 {
   if (VAR_0[VAR_4][VAR_5] == '"')
     {

       for (VAR_6 = VAR_5 - 1; VAR_6 >= 0 && VAR_0[VAR_4][VAR_6] == '\\'; VAR_6--)
  VAR_3++;

       VAR_3++;
     }
 }


      for (VAR_6 = VAR_5 - 1; VAR_6 >= 0 && VAR_0[VAR_4][VAR_6] == '\\'; VAR_6--)
 VAR_3++;
      VAR_3 += VAR_5;
      VAR_3 += 3;
    }
  VAR_1 = FUNC_0 (VAR_3);
  VAR_2 = VAR_1;
  for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
    {
      *VAR_2++ = '"';
      for (VAR_5 = 0; VAR_0[VAR_4][VAR_5]; VAR_5++)
 {
   if (VAR_0[VAR_4][VAR_5] == '"')
     {
       for (VAR_6 = VAR_5 - 1; VAR_6 >= 0 && VAR_0[VAR_4][VAR_6] == '\\'; VAR_6--)
  *VAR_2++ = '\\';
       *VAR_2++ = '\\';
     }
   *VAR_2++ = VAR_0[VAR_4][VAR_5];
 }
      for (VAR_6 = VAR_5 - 1; VAR_6 >= 0 && VAR_0[VAR_4][VAR_6] == '\\'; VAR_6--)
 *VAR_2++ = '\\';
      *VAR_2++ = '"';
      *VAR_2++ = ' ';
    }
  VAR_2[-1] = '\0';
  return VAR_1;
}
