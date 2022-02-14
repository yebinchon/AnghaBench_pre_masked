
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_2__ {int nelts; int elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int * VAR_0 ;
 void* FUNC_0 (int *,int ,int) ;

svn_error_t *
FUNC_1(void **VAR_1,
                              apr_size_t *VAR_2,
                              void *VAR_3,
                              apr_pool_t *VAR_4)
{
  apr_array_header_t *VAR_5 = VAR_3;

  *VAR_2 = sizeof(apr_off_t) *VAR_5->nelts;
  *VAR_1 = FUNC_0(VAR_4, VAR_5->elts, *VAR_2);

  return VAR_0;
}
