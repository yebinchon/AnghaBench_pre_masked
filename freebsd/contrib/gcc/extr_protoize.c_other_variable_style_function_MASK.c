
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_1)
{
  const char *VAR_2;
  int VAR_3 = FUNC_1 (VAR_0);

  for (VAR_2 = VAR_1; VAR_2; )
    {
      const char *VAR_4;

      if ((VAR_4 = FUNC_2 (VAR_2, VAR_0)) == 0)
 return 0;
      else
 if (!FUNC_0 (VAR_4[-1]) && !FUNC_0 (VAR_4[VAR_3]))
   return 1;
 else
   VAR_2 = VAR_4 + 1;
    }
  return 0;

}
