
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_upgrade_notify_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct upgrade_baton_t {void* cancel_baton; int cancel_func; void* notify_baton; int notify_func; int * fs; } ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int ,void*,int *) ;
 int VAR_0 ;

svn_error_t *
FUNC_1(svn_fs_t *VAR_1,
                   svn_fs_upgrade_notify_t VAR_2,
                   void *VAR_3,
                   svn_cancel_func_t VAR_4,
                   void *VAR_5,
                   apr_pool_t *VAR_6)
{
  struct upgrade_baton_t VAR_7;
  VAR_7.fs = VAR_1;
  VAR_7.notify_func = VAR_2;
  VAR_7.notify_baton = VAR_3;
  VAR_7.cancel_func = VAR_4;
  VAR_7.cancel_baton = VAR_5;

  return FUNC_0(VAR_1, VAR_0, (void *)&VAR_7, VAR_6);
}
