
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_context_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_socket_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;

serf_bucket_t *FUNC_2(
    serf_context_t *VAR_1,
    apr_socket_t *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    serf_bucket_t *VAR_4 = FUNC_0(VAR_2, VAR_3);


    FUNC_1(VAR_4,
                                            VAR_0,
                                            VAR_1);

    return VAR_4;
}
