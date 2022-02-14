
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; int blocksize; scalar_t__ len; int pool; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ apr_size_t ;


 char* FUNC_0 (int ,char const*,scalar_t__) ;
 int FUNC_1 (char const*,char const*,scalar_t__) ;
 int FUNC_2 (char const*,char const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

void
FUNC_4(svn_stringbuf_t *VAR_0,
                     apr_size_t VAR_1,
                     const char *VAR_2,
                     apr_size_t VAR_3)
{

  if (VAR_3 == 0)
    return;


  if (VAR_2 + VAR_3 > VAR_0->data && VAR_2 < VAR_0->data + VAR_0->blocksize)
    VAR_2 = FUNC_0(VAR_0->pool, VAR_2, VAR_3);

  if (VAR_1 > VAR_0->len)
    VAR_1 = VAR_0->len;

  FUNC_3(VAR_0, VAR_0->len + VAR_3);
  FUNC_2(VAR_0->data + VAR_1 + VAR_3, VAR_0->data + VAR_1, VAR_0->len - VAR_1 + 1);
  FUNC_1(VAR_0->data + VAR_1, VAR_2, VAR_3);

  VAR_0->len += VAR_3;
}
