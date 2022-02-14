
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_2 ("\tRunning %s VxWorks process %s",
       VAR_1 ? "child" : "attached",
       FUNC_1 (FUNC_0 (VAR_0)));
  if (VAR_1)
    FUNC_2 (", function `%s'", VAR_1);
  FUNC_2 (".\n");
}
