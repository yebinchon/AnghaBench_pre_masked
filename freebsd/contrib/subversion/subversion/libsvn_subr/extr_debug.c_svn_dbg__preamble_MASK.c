
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char const* VAR_0 ;
 long VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 char* FUNC_1 (char const*,char) ;

void
FUNC_2(const char *VAR_3, long VAR_4, FILE *VAR_5)
{
  VAR_2 = VAR_5;

  if (VAR_5 != ((void*)0) && !FUNC_0())
    {

      const char *VAR_6 = FUNC_1(VAR_3, '/');

      if (VAR_6 == ((void*)0))
        VAR_6 = FUNC_1(VAR_3, '\\');
      if (VAR_6)
        VAR_0 = VAR_6 + 1;
      else
        VAR_0 = VAR_3;
    }
  VAR_1 = VAR_4;
}
