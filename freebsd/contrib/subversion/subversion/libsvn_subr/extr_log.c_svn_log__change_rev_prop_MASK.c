
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char const*,int *) ;

const char *
FUNC_2(svn_revnum_t VAR_0, const char *VAR_1, apr_pool_t *VAR_2)
{
  return FUNC_0(VAR_2, "change-rev-prop r%ld %s", VAR_0,
                      FUNC_1(VAR_1, VAR_2));
}
