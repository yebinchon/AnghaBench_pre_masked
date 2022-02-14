
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_ra_serf__stream_bucket_errfunc_t ;
struct TYPE_6__ {TYPE_1__* read_baton; int read; } ;
struct TYPE_5__ {TYPE_2__ databuf; void* errfunc_baton; int errfunc; int * stream; } ;
typedef TYPE_1__ stream_bucket_ctx_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;


 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

serf_bucket_t *
FUNC_3(svn_stream_t *VAR_2,
                                  serf_bucket_alloc_t *VAR_3,
                                  svn_ra_serf__stream_bucket_errfunc_t VAR_4,
                                  void *VAR_5)
{
  stream_bucket_ctx_t *VAR_6;

  VAR_6 = FUNC_1(VAR_3, sizeof(*VAR_6));
  VAR_6->stream = VAR_2;
  VAR_6->errfunc = VAR_4;
  VAR_6->errfunc_baton = VAR_5;
  FUNC_2(&VAR_6->databuf);
  VAR_6->databuf.read = VAR_1;
  VAR_6->databuf.read_baton = VAR_6;

  return FUNC_0(&VAR_0, VAR_3, VAR_6);
}
