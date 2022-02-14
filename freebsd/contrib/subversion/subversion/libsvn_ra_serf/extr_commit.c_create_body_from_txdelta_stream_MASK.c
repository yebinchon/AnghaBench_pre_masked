
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_3__ {int session; int open_baton; int (* open_func ) (int **,int ,int *,int *) ;} ;
typedef TYPE_1__ open_txdelta_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (int **,int ,int *,int *) ;
 int * FUNC_3 (int *,int *,int ,TYPE_1__*) ;
 int * FUNC_4 (int *,int,int,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t **VAR_2,
                                void *VAR_3,
                                serf_bucket_alloc_t *VAR_4,
                                apr_pool_t *VAR_5 ,
                                apr_pool_t *VAR_6)
{
  open_txdelta_baton_t *VAR_7 = VAR_3;
  svn_txdelta_stream_t *VAR_8;
  svn_stream_t *VAR_9;
  int VAR_10;
  int VAR_11;

  FUNC_0(VAR_7->open_func(&VAR_8, VAR_7->open_baton, VAR_5, VAR_6));

  FUNC_1(&VAR_10, &VAR_11, VAR_7->session);
  VAR_9 = FUNC_4(VAR_8, VAR_10,
                                         VAR_11, VAR_5);
  *VAR_2 = FUNC_3(VAR_9, VAR_4,
                                                VAR_1, VAR_7);

  return VAR_0;
}
