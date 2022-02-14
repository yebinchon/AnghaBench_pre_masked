
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int len; int blocksize; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char) ;

void
FUNC_2(svn_stringbuf_t *VAR_0)
{

  if (FUNC_1(VAR_0->data[0]))
    {

      apr_size_t VAR_1 = FUNC_0(VAR_0->data + 1,
                                                      VAR_0->len - 1) + 1;


      VAR_0->data += VAR_1;
      VAR_0->len -= VAR_1;
      VAR_0->blocksize -= VAR_1;
    }


  while ((VAR_0->len > 0) && FUNC_1(VAR_0->data[VAR_0->len - 1]))
    VAR_0->len--;
  VAR_0->data[VAR_0->len] = '\0';
}
