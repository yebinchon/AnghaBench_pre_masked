
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; scalar_t__ len; scalar_t__ blocksize; int * pool; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (char*) ;

svn_stringbuf_t *
FUNC_2(char *VAR_0, apr_pool_t *VAR_1)
{
  svn_stringbuf_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  VAR_2->pool = VAR_1;
  VAR_2->data = VAR_0;
  VAR_2->len = FUNC_1(VAR_0);
  VAR_2->blocksize = VAR_2->len + 1;

  return VAR_2;
}
