
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,int ,int *) ;
 char const* FUNC_1 (int *,int ,int ,int *) ;

__attribute__((used)) static const char *
FUNC_2(svn_fs_t *VAR_1,
                           svn_revnum_t VAR_2,
                           svn_boolean_t VAR_3,
                           apr_pool_t *VAR_4)
{
  return VAR_3
       ? FUNC_1(VAR_1, VAR_2, VAR_0, VAR_4)
       : FUNC_0(VAR_1, VAR_2, VAR_4);
}
