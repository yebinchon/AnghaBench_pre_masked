
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int) ;

void
FUNC_3 (const char *VAR_0, int VAR_1, const char *VAR_2)
{
  if (VAR_2 != ((void*)0))
    FUNC_1 (FUNC_0("%P: internal error: aborting at %s line %d in %s\n"),
    VAR_0, VAR_1, VAR_2);
  else
    FUNC_1 (FUNC_0("%P: internal error: aborting at %s line %d\n"),
    VAR_0, VAR_1);
  FUNC_1 (FUNC_0("%P%F: please report this bug\n"));
  FUNC_2 (1);
}
