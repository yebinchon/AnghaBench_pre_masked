
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;

svn_boolean_t
FUNC_0(const char *VAR_2, apr_size_t VAR_3)
{
  if (VAR_3 == 1 && VAR_2[0] == '/')
    return VAR_1;

  return VAR_0;
}
