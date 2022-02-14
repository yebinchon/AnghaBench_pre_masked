
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

void
FUNC_4 (const char *VAR_0, const char *VAR_1, const char *VAR_2,
     const char *VAR_3, int VAR_4)
{
  const char *VAR_5;
  char *VAR_6;

  if (VAR_3 != ((void*)0))
    VAR_5 = VAR_3;
  else
    {
      if (VAR_0 != ((void*)0))
 VAR_5 = VAR_0;
      else
 VAR_5 = "";
    }

  if (VAR_2 != ((void*)0))
    {
      VAR_6 = (char *) FUNC_0 (FUNC_3 (VAR_1) + FUNC_3 (VAR_2) + 2);
      FUNC_2 (VAR_6, "%s.%s", VAR_1, VAR_2);
      VAR_1 = VAR_6;
    }

  FUNC_1 (VAR_5, VAR_1, VAR_4);
}
