
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,int *,int *,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

void
FUNC_4 (const char *VAR_0)
{
  if (FUNC_3 (VAR_0, "S") == 0)
    FUNC_2 ("srec", ((void*)0), ((void*)0), 1);

  else if (FUNC_3 (VAR_0, "IEEE") == 0)
    FUNC_2 ("ieee", ((void*)0), ((void*)0), 1);

  else if (FUNC_3 (VAR_0, "COFF") == 0)
    FUNC_2 ("coff-m68k", ((void*)0), ((void*)0), 1);

  else
    FUNC_1 (FUNC_0("%P%F: unknown format type %s\n"), VAR_0);
}
