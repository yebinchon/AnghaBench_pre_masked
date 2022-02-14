
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2, const char *VAR_3)
{
  if (VAR_1)
    FUNC_1 (FUNC_0("\n\nUndefined symbols from %s[%s]:\n\n"), VAR_2, VAR_3);
  else
    FUNC_1 (FUNC_0("\n\nSymbols from %s[%s]:\n\n"), VAR_2, VAR_3);
  if (VAR_0 == 32)
    FUNC_1 (FUNC_0("Name                  Value   Class        Type         Size     Line  Section\n\n"));

  else
    FUNC_1 (FUNC_0("Name                  Value           Class        Type         Size             Line  Section\n\n"));

}
