
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char*,int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_bucket_t **VAR_1,
                           void *VAR_2,
                           serf_bucket_alloc_t *VAR_3,
                           apr_pool_t *VAR_4 ,
                           apr_pool_t *VAR_5)
{
  serf_bucket_t *VAR_6;
  serf_bucket_t *VAR_7;

  VAR_6 = FUNC_2(VAR_3);
  FUNC_3(VAR_6, VAR_3);

  VAR_7 = FUNC_0("<D:options xmlns:D=\"DAV:\" />", VAR_3);
  FUNC_1(VAR_6, VAR_7);

  *VAR_1 = VAR_6;
  return VAR_0;
}
