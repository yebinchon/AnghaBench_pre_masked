
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_3__ {int nelts; int nalloc; char* elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int,int) ;

svn_error_t *
FUNC_1(void **VAR_1,
                                void *VAR_2,
                                apr_size_t VAR_3,
                                apr_pool_t *VAR_4)
{
  apr_array_header_t *VAR_5 = FUNC_0(VAR_4, 1, sizeof(apr_off_t));

  VAR_5->nelts = (int) (VAR_3 / sizeof(apr_off_t));
  VAR_5->nalloc = (int) (VAR_3 / sizeof(apr_off_t));
  VAR_5->elts = (char*)VAR_2;

  *VAR_1 = VAR_5;

  return VAR_0;
}
