
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_0, int VAR_1)
{
  char *VAR_2 = VAR_0;
  int VAR_3;

  if (VAR_2 == 0)
    FUNC_1 ("a breakpoint number");

  VAR_3 = FUNC_2 (&VAR_2);
  if (VAR_3 == 0)
    FUNC_0 ("bad breakpoint number: '%s'", VAR_0);
  if (*VAR_2 == 0)
    FUNC_0 ("Second argument (specified ignore-count) is missing.");

  FUNC_6 (VAR_3,
      FUNC_3 (FUNC_7 (FUNC_4 (VAR_2))),
      VAR_1);
  if (VAR_1)
    FUNC_5 ("\n");
}
