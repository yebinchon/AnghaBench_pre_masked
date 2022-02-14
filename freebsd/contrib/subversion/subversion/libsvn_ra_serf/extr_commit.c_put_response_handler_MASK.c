
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
struct TYPE_4__ {int handler; TYPE_1__* file_ctx; } ;
typedef TYPE_2__ put_response_ctx_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int pool; int remote_result_checksum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,char const*,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(serf_request_t *VAR_2,
                     serf_bucket_t *VAR_3,
                     void *VAR_4,
                     apr_pool_t *VAR_5)
{
  put_response_ctx_t *VAR_6 = VAR_4;
  serf_bucket_t *VAR_7;
  const char *VAR_8;

  VAR_7 = FUNC_2(VAR_3);
  VAR_8 = FUNC_1(VAR_7, VAR_0);
  FUNC_0(FUNC_3(&VAR_6->file_ctx->remote_result_checksum,
                                 VAR_1, VAR_8, VAR_6->file_ctx->pool));

  return FUNC_4(
           FUNC_5(VAR_2, VAR_3,
                                          VAR_6->handler, VAR_5));
}
