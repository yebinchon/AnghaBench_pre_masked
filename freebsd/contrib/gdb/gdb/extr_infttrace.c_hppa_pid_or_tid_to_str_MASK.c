
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int pid_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;

char *
FUNC_7 (ptid_t VAR_0)
{
  static char VAR_1[100];
  pid_t VAR_2 = FUNC_0 (VAR_0);


  if (FUNC_3 (VAR_2))
    return FUNC_1 (VAR_0);


  FUNC_5 (VAR_1, "thread %d (", FUNC_4 (VAR_0));
  FUNC_6 (VAR_1, FUNC_2 (VAR_0));
  FUNC_6 (VAR_1, ")\0");

  return VAR_1;
}
