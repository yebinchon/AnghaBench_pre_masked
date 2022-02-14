
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

void
FUNC_4 (const char *VAR_2, int VAR_3, const char *VAR_4)
{
  FUNC_1 ();
  FUNC_2 (VAR_1, "%s", FUNC_0("Internal error!\n"));
  if (VAR_4)
    FUNC_2 (VAR_1, FUNC_0("Assertion failure in %s at %s line %d.\n"),
      VAR_4, VAR_2, VAR_3);
  else
    FUNC_2 (VAR_1, FUNC_0("Assertion failure at %s line %d.\n"), VAR_2, VAR_3);
  FUNC_2 (VAR_1, "%s", FUNC_0("Please report this bug.\n"));
  FUNC_3 (VAR_0);
}
