
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 unsigned int VAR_1 ;
 char* VAR_2 ;
 unsigned int VAR_3 ;

void
FUNC_0 (char **VAR_4, unsigned int *VAR_5)
{
  if (VAR_0 != ((void*)0)
      && (VAR_5 == ((void*)0) || VAR_1 >= 0))
    {
      *VAR_4 = VAR_0;
      if (VAR_5 != ((void*)0))
 *VAR_5 = VAR_1;
    }
  else if (VAR_2 != ((void*)0))
    {
      *VAR_4 = VAR_2;
      if (VAR_5 != ((void*)0))
 *VAR_5 = VAR_3;
    }
  else
    {
      *VAR_4 = 0;
      if (VAR_5 != ((void*)0))
 *VAR_5 = 0;
    }
}
