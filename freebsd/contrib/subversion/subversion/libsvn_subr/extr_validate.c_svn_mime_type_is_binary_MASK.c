
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int const) ;

svn_boolean_t
FUNC_2(const char *VAR_0)
{

  const apr_size_t VAR_1 = FUNC_0(VAR_0, "; ");
  return ((FUNC_1(VAR_0, "text/", 5) != 0)
          && (VAR_1 != 15 || FUNC_1(VAR_0, "image/x-xbitmap", VAR_1) != 0)
          && (VAR_1 != 15 || FUNC_1(VAR_0, "image/x-xpixmap", VAR_1) != 0)
          );
}
