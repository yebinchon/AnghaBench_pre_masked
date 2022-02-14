
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int) ;

svn_error_t *
FUNC_2(void **VAR_1,
                                  void *VAR_2,
                                  apr_size_t VAR_3,
                                  apr_pool_t *VAR_4)
{
  svn_fs_fs__rep_header_t *VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  FUNC_0(VAR_3 == sizeof(*VAR_5));

  *VAR_5 = *(svn_fs_fs__rep_header_t *)VAR_2;
  *VAR_1 = VAR_2;

  return VAR_0;
}
