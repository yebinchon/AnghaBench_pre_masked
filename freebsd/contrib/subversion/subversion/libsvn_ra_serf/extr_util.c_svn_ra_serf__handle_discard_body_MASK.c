
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int *) ;

svn_error_t *
FUNC_2(serf_request_t *VAR_1,
                                 serf_bucket_t *VAR_2,
                                 void *VAR_3,
                                 apr_pool_t *VAR_4)
{
  apr_status_t VAR_5;

  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5)
    return FUNC_1(VAR_5, ((void*)0));

  return VAR_0;
}
