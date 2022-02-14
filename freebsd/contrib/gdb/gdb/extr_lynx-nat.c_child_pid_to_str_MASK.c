
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int) ;

char *
FUNC_3 (ptid_t VAR_0)
{
  static char VAR_1[40];

  FUNC_2 (VAR_1, "process %d thread %d", FUNC_0 (VAR_0), FUNC_1 (VAR_0));

  return VAR_1;
}
