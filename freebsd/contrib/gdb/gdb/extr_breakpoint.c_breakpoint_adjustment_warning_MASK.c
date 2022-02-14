
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (unsigned long,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3 (CORE_ADDR VAR_0, CORE_ADDR VAR_1,
                               int VAR_2, int VAR_3)
{
  char VAR_4[40];
  char VAR_5[40];

  FUNC_1 (VAR_4, FUNC_0 ((unsigned long) VAR_0, "08l"));
  FUNC_1 (VAR_5, FUNC_0 ((unsigned long) VAR_1, "08l"));
  if (VAR_3)
    FUNC_2 ("Breakpoint %d address previously adjusted from %s to %s.",
             VAR_2, VAR_4, VAR_5);
  else
    FUNC_2 ("Breakpoint address adjusted from %s to %s.", VAR_4, VAR_5);
}
