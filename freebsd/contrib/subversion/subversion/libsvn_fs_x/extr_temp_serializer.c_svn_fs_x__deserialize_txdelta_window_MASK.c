
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int new_data; int ops; struct TYPE_5__* window; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
typedef int svn_string_t ;
typedef TYPE_1__ svn_fs_x__txdelta_cached_window_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int **) ;
 int FUNC_1 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_2(void **VAR_1,
                                     void *VAR_2,
                                     apr_size_t VAR_3,
                                     apr_pool_t *VAR_4)
{
  svn_txdelta_window_t *VAR_5;


  svn_fs_x__txdelta_cached_window_t *VAR_6 =
      (svn_fs_x__txdelta_cached_window_t *)VAR_2;


  FUNC_1(VAR_6,
                                 (void **)&VAR_6->window);
  VAR_5 = VAR_6->window;

  FUNC_1(VAR_5, (void **)&VAR_5->ops);

  FUNC_0(VAR_5, (svn_string_t**)&VAR_5->new_data);


  *VAR_1 = VAR_6;

  return VAR_0;
}
