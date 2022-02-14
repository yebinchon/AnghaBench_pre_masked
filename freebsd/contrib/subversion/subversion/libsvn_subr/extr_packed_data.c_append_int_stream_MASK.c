
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_4__ {TYPE_2__* private_data; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
struct TYPE_5__ {TYPE_1__* next; scalar_t__ is_last; TYPE_1__* first_substream; scalar_t__ packed; } ;
typedef TYPE_2__ packed_int_private_t ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(svn_packed__int_stream_t *VAR_0,
                  svn_stringbuf_t *VAR_1)
{
  packed_int_private_t *VAR_2 = VAR_0->private_data;
  if (VAR_2->packed)
    FUNC_0(VAR_1, VAR_2->packed);

  VAR_0 = VAR_2->first_substream;
  while (VAR_0)
    {
      VAR_2 = VAR_0->private_data;
      FUNC_1(VAR_0, VAR_1);
      VAR_0 = VAR_2->is_last ? ((void*)0) : VAR_2->next;
    }
}
