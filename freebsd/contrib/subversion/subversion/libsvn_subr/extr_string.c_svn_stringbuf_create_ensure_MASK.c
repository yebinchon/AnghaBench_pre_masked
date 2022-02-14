
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int * pool; scalar_t__ blocksize; scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (void**,scalar_t__*,scalar_t__,int *) ;

svn_stringbuf_t *
FUNC_1(apr_size_t VAR_0, apr_pool_t *VAR_1)
{
  void *VAR_2;
  svn_stringbuf_t *VAR_3;

  ++VAR_0;


  FUNC_0(&VAR_2, &VAR_0, VAR_0 + sizeof(*VAR_3), VAR_1);


  VAR_3 = VAR_2;
  VAR_3->data = (char*)VAR_2 + sizeof(*VAR_3);
  VAR_3->data[0] = '\0';
  VAR_3->len = 0;
  VAR_3->blocksize = VAR_0 - sizeof(*VAR_3);
  VAR_3->pool = VAR_1;

  return VAR_3;
}
