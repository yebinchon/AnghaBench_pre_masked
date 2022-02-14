
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*) ;

void
FUNC_6 (char *VAR_0)
{

  extern int VAR_1;

  const char *VAR_2;
  char *VAR_3;

  VAR_2 = FUNC_4 (VAR_1);
  if (VAR_2 == ((void*)0))
    VAR_2 = "unknown error";

  VAR_3 = (char *) FUNC_0 (FUNC_5 (VAR_2) + FUNC_5 (VAR_0) + 3);
  FUNC_3 (VAR_3, VAR_0);
  FUNC_2 (VAR_3, ": ");
  FUNC_2 (VAR_3, VAR_2);

  FUNC_1 ("%s.", VAR_3);
}
