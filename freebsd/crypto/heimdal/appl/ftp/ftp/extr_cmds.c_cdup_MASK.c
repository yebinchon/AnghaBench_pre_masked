
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;

void
FUNC_2(int VAR_3, char **VAR_4)
{

 if (FUNC_0("CDUP") == VAR_0 && VAR_1 == 500) {
  if (VAR_2)
   FUNC_1("CDUP command not recognized, trying XCUP\n");
  FUNC_0("XCUP");
 }
}
