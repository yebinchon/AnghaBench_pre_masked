
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5 (CORE_ADDR VAR_0, char *VAR_1)
{

  if (FUNC_3 ())
    return (VAR_0) >= FUNC_2 (VAR_0) && (VAR_0) < FUNC_1 (VAR_0);
  else
    return VAR_1 && FUNC_4 ("_sigtramp", VAR_1) == 0;



}
