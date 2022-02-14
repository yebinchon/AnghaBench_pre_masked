
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int data; int pool; int blocksize; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (void**,int *,scalar_t__,int ) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

void
FUNC_3(svn_stringbuf_t *VAR_0, const char *VAR_1)
{
  apr_size_t VAR_2 = FUNC_2(VAR_1);

  FUNC_0((void**) &VAR_0->data, &VAR_0->blocksize, VAR_2 + 1, VAR_0->pool);
  FUNC_1(VAR_0->data, VAR_1, VAR_2 + 1);
  VAR_0->len = VAR_2;
}
