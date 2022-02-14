
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char*,char*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_revnum_t VAR_1, const char *VAR_2,
                         apr_pool_t *VAR_3)
{
  if (FUNC_1(VAR_1))
    {
      if (VAR_2)
        FUNC_0(FUNC_2(VAR_3, "%-10ld %s", VAR_1, VAR_2));
      else
        FUNC_0(FUNC_2(VAR_3, "%ld", VAR_1));
    }
  else if (VAR_2)
    FUNC_0(FUNC_2(VAR_3, "%-10s %s", "", VAR_2));

  return VAR_0;
}
