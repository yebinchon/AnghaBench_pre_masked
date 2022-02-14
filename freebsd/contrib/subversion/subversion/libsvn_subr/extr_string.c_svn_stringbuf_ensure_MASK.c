
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; scalar_t__ len; int pool; int blocksize; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_size_t ;


 int FUNC_0 (void**,int *,int ,int ) ;
 int FUNC_1 (void*,void*,scalar_t__) ;

void
FUNC_2(svn_stringbuf_t *VAR_0, apr_size_t VAR_1)
{
  void *VAR_2 = ((void*)0);
  ++VAR_1;

  FUNC_0(&VAR_2, &VAR_0->blocksize, VAR_1, VAR_0->pool);
  if (VAR_2 && VAR_2 != VAR_0->data)
    {
      if (VAR_0->data)
        FUNC_1(VAR_2, VAR_0->data, VAR_0->len + 1);
      VAR_0->data = VAR_2;
    }
}
