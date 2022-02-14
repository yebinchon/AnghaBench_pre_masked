
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_1)
{

  extern int VAR_2;

  const char *VAR_3;
  char *VAR_4;

  VAR_3 = FUNC_6 (VAR_2);
  if (VAR_3 == ((void*)0))
    VAR_3 = "unknown error";

  VAR_4 = (char *) FUNC_0 (FUNC_7 (VAR_3) + FUNC_7 (VAR_1) + 3);
  FUNC_5 (VAR_4, VAR_1);
  FUNC_4 (VAR_4, ": ");
  FUNC_4 (VAR_4, VAR_3);
  FUNC_3 (VAR_0, "\n%s.\n", VAR_4);
  FUNC_2 (VAR_0);
  FUNC_1 (1);
}
