
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_boolean_t ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, svn_boolean_t VAR_1)
{
  char *VAR_2 = VAR_0;
  while (*VAR_2)
    {
      *VAR_2 = (char)(VAR_1 ? FUNC_1(*VAR_2) : FUNC_0(*VAR_2));
      ++VAR_2;
    }
}
