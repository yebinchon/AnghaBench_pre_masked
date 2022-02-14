
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(void **VAR_1,
                              apr_size_t *VAR_2,
                              void *VAR_3,
                              apr_pool_t *VAR_4)
{
  svn_string_t *VAR_5 = VAR_3;

  *VAR_1 = (void *)VAR_5->data;
  *VAR_2 = VAR_5->len;

  return VAR_0;
}
