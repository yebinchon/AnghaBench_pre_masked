
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mutex__t ;
typedef int svn_fs_upgrade_notify_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,void*,int ,void*,int *) ;
 int FUNC_2 (int *,char const*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_0,
          const char *VAR_1,
          svn_fs_upgrade_notify_t VAR_2,
          void *VAR_3,
          svn_cancel_func_t VAR_4,
          void *VAR_5,
          svn_mutex__t *VAR_6,
          apr_pool_t *VAR_7,
          apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_2(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8));
  return FUNC_1(VAR_0, VAR_2, VAR_3,
                           VAR_4, VAR_5, VAR_7);
}
