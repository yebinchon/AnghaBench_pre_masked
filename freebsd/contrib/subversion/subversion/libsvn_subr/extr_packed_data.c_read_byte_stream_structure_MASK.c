
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_7__ {TYPE_3__* private_data; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
struct TYPE_8__ {TYPE_1__* lengths_stream; scalar_t__ lengths_stream_index; TYPE_4__* packed; } ;
typedef TYPE_2__ svn_packed__byte_stream_t ;
struct TYPE_9__ {TYPE_1__* next; } ;
typedef TYPE_3__ packed_int_private_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_10__ {scalar_t__ len; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(svn_stringbuf_t *VAR_0,
                           svn_packed__byte_stream_t *VAR_1,
                           svn_packed__int_stream_t *VAR_2)
{
  apr_size_t VAR_3;
  apr_size_t VAR_4;
  apr_size_t VAR_5;


  (void) (apr_size_t)FUNC_0(VAR_0);
  VAR_3 = (apr_size_t)FUNC_0(VAR_0);
  VAR_4 = (apr_size_t)FUNC_0(VAR_0);


  FUNC_1(VAR_1->packed, VAR_4);
  VAR_1->packed->len = VAR_4;


  VAR_1->lengths_stream_index = VAR_3;
  VAR_1->lengths_stream = VAR_2;
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
    {
      packed_int_private_t *VAR_6
        = VAR_1->lengths_stream->private_data;
      VAR_1->lengths_stream = VAR_6->next;
    }
}
