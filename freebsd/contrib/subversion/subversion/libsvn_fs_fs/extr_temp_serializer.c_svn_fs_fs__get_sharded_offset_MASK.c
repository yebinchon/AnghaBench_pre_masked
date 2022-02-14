
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef size_t apr_int64_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(void **VAR_1,
                              const void *VAR_2,
                              apr_size_t VAR_3,
                              void *VAR_4,
                              apr_pool_t *VAR_5)
{
  const apr_off_t *VAR_6 = VAR_2;
  apr_int64_t VAR_7 = *(apr_int64_t *)VAR_4;

  *(apr_off_t *)VAR_1 = VAR_6[VAR_7];

  return VAR_0;
}
