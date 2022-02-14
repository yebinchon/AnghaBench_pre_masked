
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_mutex__t ;
typedef int svn_fs_t ;
typedef int svn_fs_progress_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int *,int *,int *) ;
 int * FUNC_2 (int *,int ,int ,int ,void*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_0, const char *VAR_1,
          svn_revnum_t VAR_2,
          svn_revnum_t VAR_3,
          svn_fs_progress_notify_func_t VAR_4,
          void *VAR_5,
          svn_cancel_func_t VAR_6,
          void *VAR_7,
          svn_mutex__t *VAR_8,
          apr_pool_t *VAR_9,
          apr_pool_t *VAR_10)
{
  FUNC_0(FUNC_1(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10));
  return FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5,
                           VAR_6, VAR_7, VAR_9);
}
