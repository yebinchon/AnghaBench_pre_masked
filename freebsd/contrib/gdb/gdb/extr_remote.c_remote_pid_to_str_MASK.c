
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_2 (ptid_t VAR_0)
{
  static char VAR_1[30];

  FUNC_1 (VAR_1, "Thread %d", FUNC_0 (VAR_0));
  return VAR_1;
}
