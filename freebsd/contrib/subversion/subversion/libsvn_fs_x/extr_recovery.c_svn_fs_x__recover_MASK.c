
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_3__ {void* cancel_baton; int cancel_func; int * fs; } ;
typedef TYPE_1__ recover_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,TYPE_1__*,int *) ;

svn_error_t *
FUNC_1(svn_fs_t *VAR_1,
                  svn_cancel_func_t VAR_2,
                  void *VAR_3,
                  apr_pool_t *VAR_4)
{
  recover_baton_t VAR_5;





  VAR_5.fs = VAR_1;
  VAR_5.cancel_func = VAR_2;
  VAR_5.cancel_baton = VAR_3;
  return FUNC_0(VAR_1, VAR_0, &VAR_5, VAR_4);
}
