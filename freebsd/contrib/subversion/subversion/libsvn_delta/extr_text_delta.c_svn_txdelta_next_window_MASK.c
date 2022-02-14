
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_txdelta_window_t ;
struct TYPE_3__ {int baton; int * (* next_window ) (int **,int ,int *) ;} ;
typedef TYPE_1__ svn_txdelta_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int **,int ,int *) ;

svn_error_t *
FUNC_1(svn_txdelta_window_t **VAR_0,
                        svn_txdelta_stream_t *VAR_1,
                        apr_pool_t *VAR_2)
{
  return VAR_1->next_window(VAR_0, VAR_1->baton, VAR_2);
}
