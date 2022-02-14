
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*,char*,int*) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*,char*) ;

const char *
FUNC_6 (const char *VAR_0)
{
  char *VAR_1;

  while (1)
    {
      if ((VAR_1 = FUNC_5 (VAR_0, "__")) != ((void*)0))
 VAR_0 = VAR_1 + 2;
      else if ((VAR_1 = FUNC_4 (VAR_0, '.')) != ((void*)0))
 VAR_0 = VAR_1 + 1;
      else
 break;
    }

  if (VAR_0[0] == 'Q')
    {
      static char VAR_2[16];
      int VAR_3;
      if (VAR_0[1] == 'U' || VAR_0[1] == 'W')
 {
   if (FUNC_3 (VAR_0 + 2, "%x", &VAR_3) != 1)
     return VAR_0;
 }
      else
 return VAR_0;

      if (FUNC_0 (VAR_3) && FUNC_1 (VAR_3))
 FUNC_2 (VAR_2, "'%c'", VAR_3);
      else if (VAR_0[1] == 'U')
 FUNC_2 (VAR_2, "[\"%02x\"]", VAR_3);
      else
 FUNC_2 (VAR_2, "[\"%04x\"]", VAR_3);

      return VAR_2;
    }
  else
    return VAR_0;
}
