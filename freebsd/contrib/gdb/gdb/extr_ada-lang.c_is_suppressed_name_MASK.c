
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* mangled; } ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_1)
{
  if (FUNC_0 (VAR_1, "_ada_", 5))
    VAR_1 += 5;
  if (VAR_1[0] == '_' || VAR_1[0] == '\000')
    return 1;
  else
    {
      const char *VAR_2;
      const char *VAR_3 = FUNC_3 (VAR_1, "___");
      if (VAR_3 != ((void*)0) && VAR_3[3] != 'X')
 return 1;
      if (VAR_3 == ((void*)0))
 VAR_3 = VAR_1 + FUNC_2 (VAR_1);
      for (VAR_2 = VAR_3 - 1; VAR_2 != VAR_1; VAR_2 -= 1)
 if (FUNC_1 (*VAR_2))
   {
     int VAR_4;
     if (VAR_2[0] == 'X' && VAR_2[-1] != '_')
       goto OK;
     if (*VAR_2 != 'O')
       return 1;
     for (VAR_4 = 0; VAR_0[VAR_4].mangled != ((void*)0); VAR_4 += 1)
       if (FUNC_0 (VAR_0[VAR_4].mangled, VAR_2,
     FUNC_2 (VAR_0[VAR_4].mangled)))
  goto OK;
     return 1;
   OK:;
   }
      return 0;
    }
}
