
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_5__ {struct TYPE_5__* first_substream; TYPE_1__* packed; int lengths_stream_index; struct TYPE_5__* next; } ;
typedef TYPE_2__ svn_packed__byte_stream_t ;
struct TYPE_4__ {int len; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(svn_stringbuf_t* VAR_0,
                            svn_packed__byte_stream_t* VAR_1)
{

  for (; VAR_1; VAR_1 = VAR_1->next)
    {

      FUNC_0(VAR_0, 0);
      FUNC_0(VAR_0, VAR_1->lengths_stream_index);
      FUNC_0(VAR_0, VAR_1->packed->len);


      FUNC_1(VAR_0, VAR_1->first_substream);
    }
}
