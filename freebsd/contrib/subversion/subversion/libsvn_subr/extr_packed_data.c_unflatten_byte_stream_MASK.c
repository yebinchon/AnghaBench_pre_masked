
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_8__ {struct TYPE_8__* next; struct TYPE_8__* first_substream; TYPE_1__* packed; } ;
typedef TYPE_3__ svn_packed__byte_stream_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_6__ {char* data; size_t len; } ;


 int FUNC_0 (char*,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_1(svn_packed__byte_stream_t *VAR_0,
                      svn_stringbuf_t *VAR_1,
                      apr_size_t *VAR_2)
{
  FUNC_0(VAR_0->packed->data,
         VAR_1->data + *VAR_2,
         VAR_0->packed->len);
  VAR_0->packed->data[VAR_0->packed->len] = '\0';

  *VAR_2 += VAR_0->packed->len;
  for (VAR_0 = VAR_0->first_substream; VAR_0; VAR_0 = VAR_0->next)
    FUNC_1(VAR_0, VAR_1, VAR_2);
}
