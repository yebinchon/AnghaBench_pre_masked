
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int md5_digest; int next_window; void* baton; } ;
typedef TYPE_1__ svn_txdelta_stream_t ;
typedef int svn_txdelta_next_window_fn_t ;
typedef int svn_txdelta_md5_digest_fn_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_txdelta_stream_t *
FUNC_1(void *VAR_0,
                          svn_txdelta_next_window_fn_t VAR_1,
                          svn_txdelta_md5_digest_fn_t VAR_2,
                          apr_pool_t *VAR_3)
{
  svn_txdelta_stream_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->baton = VAR_0;
  VAR_4->next_window = VAR_1;
  VAR_4->md5_digest = VAR_2;

  return VAR_4;
}
