
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, char *VAR_1)
{
  int VAR_2 = 0;
  char *VAR_3;
  int VAR_4;
  while (*VAR_1 == '[')
    {
      VAR_2++;
      VAR_1++;
    }
  switch (VAR_1[0])
    {
    case 'L':

      VAR_1++;
      VAR_3 = VAR_0;
      for (; *VAR_1 != ';' && *VAR_1 != '\0'; VAR_1++)
 {
   if (*VAR_1 == '/')
     *VAR_3++ = '.';
   else
     *VAR_3++ = *VAR_1;
 }
      break;
    default:
      VAR_3 = FUNC_0 (FUNC_1 (VAR_1[0]));
      VAR_4 = FUNC_3 (VAR_3);
      FUNC_2 (VAR_0, VAR_3);
      VAR_3 = VAR_0 + VAR_4;
      break;
    }
  while (--VAR_2 >= 0)
    {
      *VAR_3++ = '[';
      *VAR_3++ = ']';
    }
}
