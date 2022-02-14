
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* first_substream; TYPE_1__* packed; } ;
typedef TYPE_2__ svn_packed__byte_stream_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_4__ {scalar_t__ len; } ;



__attribute__((used)) static apr_size_t
FUNC_0(svn_packed__byte_stream_t *VAR_0)
{
  apr_size_t VAR_1 = VAR_0->packed->len;

  for (VAR_0 = VAR_0->first_substream; VAR_0; VAR_0 = VAR_0->next)
    VAR_1 += FUNC_0(VAR_0);

  return VAR_1;
}
