
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_tristate_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

svn_tristate_t
FUNC_2(const char *VAR_3)
{
  if (VAR_3 == ((void*)0))
    return VAR_2;
  else if (0 == FUNC_1(VAR_3, "true")
           || 0 == FUNC_1(VAR_3, "yes")
           || 0 == FUNC_1(VAR_3, "on")
           || 0 == FUNC_0(VAR_3, "1"))
    return VAR_1;
  else if (0 == FUNC_1(VAR_3, "false")
           || 0 == FUNC_1(VAR_3, "no")
           || 0 == FUNC_1(VAR_3, "off")
           || 0 == FUNC_0(VAR_3, "0"))
    return VAR_0;

  return VAR_2;
}
