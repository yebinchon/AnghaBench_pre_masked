
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int VAR_0 ;

void
FUNC_3 (const char *VAR_1)
{
  if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
    FUNC_2 (VAR_0, "%s\n", FUNC_0 (FUNC_1 ()));
  else
    FUNC_2 (VAR_0, "%s: %s\n", VAR_1, FUNC_0 (FUNC_1 ()));
}
