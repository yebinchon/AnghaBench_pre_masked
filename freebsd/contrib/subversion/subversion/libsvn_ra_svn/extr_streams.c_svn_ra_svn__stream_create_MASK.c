
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_4__ {int timeout_fn; void* timeout_baton; int * out_stream; int * in_stream; } ;
typedef TYPE_1__ svn_ra_svn__stream_t ;
typedef int ra_svn_timeout_fn_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_ra_svn__stream_t *
FUNC_1(svn_stream_t *VAR_0,
                          svn_stream_t *VAR_1,
                          void *VAR_2,
                          ra_svn_timeout_fn_t VAR_3,
                          apr_pool_t *VAR_4)
{
  svn_ra_svn__stream_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->in_stream = VAR_0;
  VAR_5->out_stream = VAR_1;
  VAR_5->timeout_baton = VAR_2;
  VAR_5->timeout_fn = VAR_3;
  return VAR_5;
}
