
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; int blocksize; scalar_t__ len; int pool; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ apr_size_t ;


 char* FUNC_0 (int ,char const*,scalar_t__) ;
 int FUNC_1 (char const*,char const*,scalar_t__) ;
 int FUNC_2 (char const*,char const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;

void
FUNC_5(svn_stringbuf_t *VAR_0,
                      apr_size_t VAR_1,
                      apr_size_t VAR_2,
                      const char *VAR_3,
                      apr_size_t VAR_4)
{


  if (VAR_4 == 0)
    {
      FUNC_4(VAR_0, VAR_1, VAR_2);
      return;
    }


  if (VAR_3 + VAR_4 > VAR_0->data && VAR_3 < VAR_0->data + VAR_0->blocksize)
    VAR_3 = FUNC_0(VAR_0->pool, VAR_3, VAR_4);

  if (VAR_1 > VAR_0->len)
    VAR_1 = VAR_0->len;
  if (VAR_2 > VAR_0->len - VAR_1)
    VAR_2 = VAR_0->len - VAR_1;

  if (VAR_2 < VAR_4)
    {
      apr_size_t VAR_5 = VAR_4 - VAR_2;
      FUNC_3(VAR_0, VAR_0->len + VAR_5);
    }

  if (VAR_2 != VAR_4)
    FUNC_2(VAR_0->data + VAR_1 + VAR_4, VAR_0->data + VAR_1 + VAR_2,
            VAR_0->len - VAR_1 - VAR_2 + 1);

  FUNC_1(VAR_0->data + VAR_1, VAR_3, VAR_4);
  VAR_0->len += VAR_4 - VAR_2;
}
