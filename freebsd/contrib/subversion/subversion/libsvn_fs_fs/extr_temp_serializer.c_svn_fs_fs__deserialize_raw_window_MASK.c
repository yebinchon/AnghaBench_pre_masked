
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ svn_fs_fs__raw_cached_window_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_2__*,void**) ;

svn_error_t *
FUNC_1(void **VAR_1,
                                  void *VAR_2,
                                  apr_size_t VAR_3,
                                  apr_pool_t *VAR_4)
{
  svn_fs_fs__raw_cached_window_t *VAR_5 =
      (svn_fs_fs__raw_cached_window_t *)VAR_2;


  FUNC_0(VAR_5, (void **)&VAR_5->window.data);


  *VAR_1 = VAR_2;

  return VAR_0;
}
