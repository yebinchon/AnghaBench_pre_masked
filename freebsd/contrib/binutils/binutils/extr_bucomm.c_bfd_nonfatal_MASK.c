
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*,char const*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

void
FUNC_3 (const char *VAR_2)
{
  const char *VAR_3 = FUNC_0 (FUNC_1 ());

  if (VAR_2)
    FUNC_2 (VAR_1, "%s: %s: %s\n", VAR_0, VAR_2, VAR_3);
  else
    FUNC_2 (VAR_1, "%s: %s\n", VAR_0, VAR_3);
}
