
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* packed; int lengths_stream; } ;
typedef TYPE_2__ svn_packed__byte_stream_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_4__ {char* data; scalar_t__ len; int blocksize; } ;


 int FUNC_0 (int ) ;

const char *
FUNC_1(svn_packed__byte_stream_t *VAR_0,
                      apr_size_t *VAR_1)
{
  const char *VAR_2 = VAR_0->packed->data;
  apr_size_t VAR_3 = (apr_size_t)FUNC_0(VAR_0->lengths_stream);

  if (VAR_3 > VAR_0->packed->len)
    VAR_3 = VAR_0->packed->len;


  VAR_0->packed->data += VAR_3;
  VAR_0->packed->len -= VAR_3;
  VAR_0->packed->blocksize -= VAR_3;

  *VAR_1 = VAR_3;
  return VAR_2;
}
