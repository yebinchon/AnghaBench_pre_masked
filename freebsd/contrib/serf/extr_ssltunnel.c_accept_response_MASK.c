
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int req_ctx_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static serf_bucket_t* FUNC_3(serf_request_t *VAR_0,
                                      serf_bucket_t *VAR_1,
                                      void *VAR_2,
                                      apr_pool_t *VAR_3)
{
    serf_bucket_t *VAR_4;
    serf_bucket_alloc_t *VAR_5;





    VAR_5 = FUNC_2(VAR_0);


    VAR_4 = FUNC_0(VAR_1, VAR_5);

    return FUNC_1(VAR_4, VAR_5);
}
