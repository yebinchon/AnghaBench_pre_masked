
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int) ;

svn_error_t *
FUNC_1(void **VAR_1,
                                apr_size_t *VAR_2,
                                void *VAR_3,
                                apr_pool_t *VAR_4)
{
  svn_fs_fs__rep_header_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  *VAR_5 = *(svn_fs_fs__rep_header_t *)VAR_3;

  *VAR_2 = sizeof(*VAR_5);
  *VAR_1 = VAR_5;

  return VAR_0;
}
