
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char const* FUNC_1 (int *,int ,int *) ;
 char const* FUNC_2 (int *,int ,int ,int *) ;

const char *
FUNC_3(svn_fs_t *VAR_1,
                            svn_revnum_t VAR_2,
                            apr_pool_t *VAR_3)
{
  return FUNC_0(VAR_1, VAR_2)
       ? FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3)
       : FUNC_1(VAR_1, VAR_2, VAR_3);
}
