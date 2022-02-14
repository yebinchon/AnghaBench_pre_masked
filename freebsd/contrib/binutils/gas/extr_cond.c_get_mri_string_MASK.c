
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static char *
FUNC_1 (int VAR_2, int *VAR_3)
{
  char *VAR_4;
  char *VAR_5;

  FUNC_0 ();
  VAR_5 = VAR_4 = VAR_0;
  if (*VAR_0 == '\'')
    {
      ++VAR_5;
      ++VAR_0;
      while (! VAR_1[(unsigned char) *VAR_0])
 {
   *VAR_5++ = *VAR_0++;
   if (VAR_5[-1] == '\'')
     {
       if (*VAR_0 != '\'')
  break;
       ++VAR_0;
     }
 }
      FUNC_0 ();
    }
  else
    {
      while (*VAR_0 != VAR_2
      && ! VAR_1[(unsigned char) *VAR_0])
 ++VAR_0;
      VAR_5 = VAR_0;
      while (VAR_5 > VAR_4 && (VAR_5[-1] == ' ' || VAR_5[-1] == '\t'))
 --VAR_5;
    }

  *VAR_3 = VAR_5 - VAR_4;
  return VAR_4;
}
