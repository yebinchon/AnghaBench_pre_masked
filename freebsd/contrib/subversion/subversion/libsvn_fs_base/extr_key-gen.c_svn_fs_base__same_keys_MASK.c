
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

svn_boolean_t
FUNC_1(const char *VAR_2, const char *VAR_3)
{
  if (! (VAR_2 || VAR_3))
    return VAR_1;
  if (VAR_2 && (! VAR_3))
    return VAR_0;
  if ((! VAR_2) && VAR_3)
    return VAR_0;
  return (FUNC_0(VAR_2, VAR_3) == 0);
}
