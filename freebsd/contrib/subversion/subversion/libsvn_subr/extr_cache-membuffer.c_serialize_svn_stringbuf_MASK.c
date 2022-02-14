
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; void* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void **VAR_1,
                        apr_size_t *VAR_2,
                        void *VAR_3,
                        apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5 = VAR_3;

  *VAR_1 = VAR_5->data;
  *VAR_2 = VAR_5->len + 1;

  return VAR_0;
}
