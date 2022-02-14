
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_1(svn_stringbuf_t *VAR_0,
                     apr_size_t VAR_1,
                     apr_size_t VAR_2)
{
  if (VAR_1 > VAR_0->len)
    VAR_1 = VAR_0->len;
  if (VAR_2 > VAR_0->len - VAR_1)
    VAR_2 = VAR_0->len - VAR_1;

  FUNC_0(VAR_0->data + VAR_1, VAR_0->data + VAR_1 + VAR_2, VAR_0->len - VAR_1 - VAR_2 + 1);
  VAR_0->len -= VAR_2;
}
