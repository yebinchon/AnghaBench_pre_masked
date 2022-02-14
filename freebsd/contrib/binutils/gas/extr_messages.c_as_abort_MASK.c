
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
  if (VAR_4)
    FUNC_2 (VAR_1, FUNC_0("Internal error, aborting at %s line %d in %s\n"),
      VAR_2, VAR_3, VAR_4);
  else
    FUNC_2 (VAR_1, FUNC_0("Internal error, aborting at %s line %d\n"),
      VAR_2, VAR_3);
  FUNC_2 (VAR_1, "%s", FUNC_0("Please report this bug.\n"));
  FUNC_3 (VAR_0);
}
