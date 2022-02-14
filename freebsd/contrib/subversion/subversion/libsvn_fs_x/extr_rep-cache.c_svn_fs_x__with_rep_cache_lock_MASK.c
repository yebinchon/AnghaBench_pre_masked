
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_0,
                              svn_error_t *(*VAR_1)(void *,
                                                   apr_pool_t *),
                              void *VAR_2,
                              apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;

  FUNC_0(FUNC_1(VAR_0, VAR_3));
  VAR_4 = VAR_1(VAR_2, VAR_3);
  return FUNC_2(VAR_4, FUNC_3(VAR_0, VAR_3));
}
