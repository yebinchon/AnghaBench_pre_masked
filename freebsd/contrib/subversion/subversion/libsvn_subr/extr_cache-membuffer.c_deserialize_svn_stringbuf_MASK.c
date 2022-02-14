
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* len; void* data; void* blocksize; int * pool; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef void* apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void **VAR_1,
                          void *VAR_2,
                          apr_size_t VAR_3,
                          apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5 = FUNC_0(VAR_4, sizeof(svn_stringbuf_t));

  VAR_5->pool = VAR_4;
  VAR_5->blocksize = VAR_3;
  VAR_5->data = VAR_2;
  VAR_5->len = VAR_3-1;
  *VAR_1 = VAR_5;

  return VAR_0;
}
