
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {TYPE_1__* session; } ;
typedef TYPE_2__ stream_ctx_t ;
typedef int serf_bucket_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ using_compression; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_1(serf_bucket_t *VAR_2,
              void *VAR_3,
              apr_pool_t *VAR_4 ,
              apr_pool_t *VAR_5)
{
  stream_ctx_t *VAR_6 = VAR_3;

  if (VAR_6->session->using_compression != VAR_1)
    {
      FUNC_0(VAR_2, "Accept-Encoding", "gzip");
    }

  return VAR_0;
}
