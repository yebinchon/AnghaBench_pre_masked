
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
struct TYPE_3__ {int handler; } ;
typedef TYPE_1__ post_response_ctx_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(serf_request_t *VAR_1,
                      serf_bucket_t *VAR_2,
                      void *VAR_3,
                      apr_pool_t *VAR_4)
{
  post_response_ctx_t *VAR_5 = VAR_3;
  serf_bucket_t *VAR_6 = FUNC_1(VAR_2);


  FUNC_0(VAR_6, VAR_0, VAR_5);


  return FUNC_2(VAR_1, VAR_2,
                                        VAR_5->handler, VAR_4);
}
