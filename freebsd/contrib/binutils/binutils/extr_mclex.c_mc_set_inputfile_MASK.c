
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char* FUNC_0 (char const*,char) ;
 char* FUNC_1 (char const*) ;

void
FUNC_2 (const char *VAR_1)
{
  if (! VAR_1 || *VAR_1 == 0)
    VAR_0 = "-";
  else
    {
      const char *VAR_2 = FUNC_0 (VAR_1, '/');
      const char *VAR_3 = FUNC_0 (VAR_1, '\\');

      if (! VAR_2)
 VAR_2 = VAR_3;
      if (VAR_2 && VAR_3 && VAR_2 < VAR_3)
 VAR_2 = VAR_3;
      if (! VAR_2)
 VAR_2 = VAR_1;
      else
 VAR_2++;
      VAR_2 = FUNC_1 (VAR_2);
      VAR_0 = VAR_2;
    }
}
