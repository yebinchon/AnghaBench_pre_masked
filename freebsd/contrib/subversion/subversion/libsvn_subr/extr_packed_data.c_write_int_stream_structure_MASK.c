
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_7__ {TYPE_3__* private_data; } ;
typedef TYPE_2__ svn_packed__int_stream_t ;
struct TYPE_8__ {int substream_count; int item_count; TYPE_2__* next; scalar_t__ is_last; TYPE_2__* first_substream; TYPE_1__* packed; scalar_t__ is_signed; scalar_t__ diff; } ;
typedef TYPE_3__ packed_int_private_t ;
struct TYPE_6__ {int len; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(svn_stringbuf_t* VAR_0,
                           svn_packed__int_stream_t* VAR_1)
{
  while (VAR_1)
    {

      packed_int_private_t *VAR_2 = VAR_1->private_data;
      FUNC_1(VAR_0, (VAR_2->substream_count << 2)
                                   + (VAR_2->diff ? 1 : 0)
                                   + (VAR_2->is_signed ? 2 : 0));


      FUNC_0(VAR_1);

      FUNC_1(VAR_0, VAR_2->item_count);
      FUNC_1(VAR_0, VAR_2->packed
                                   ? VAR_2->packed->len
                                   : 0);


      FUNC_2(VAR_0, VAR_2->first_substream);


      VAR_1 = VAR_2->is_last ? ((void*)0) : VAR_2->next;
    }
}
