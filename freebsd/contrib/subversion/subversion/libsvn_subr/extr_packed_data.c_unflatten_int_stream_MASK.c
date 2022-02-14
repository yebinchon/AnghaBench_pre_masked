
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_9__ {TYPE_4__* private_data; } ;
typedef TYPE_3__ svn_packed__int_stream_t ;
struct TYPE_10__ {TYPE_3__* next; scalar_t__ is_last; TYPE_3__* first_substream; TYPE_1__* packed; } ;
typedef TYPE_4__ packed_int_private_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_7__ {char* data; size_t len; } ;


 int FUNC_0 (char*,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_1(svn_packed__int_stream_t *VAR_0,
                     svn_stringbuf_t *VAR_1,
                     apr_size_t *VAR_2)
{
  packed_int_private_t *VAR_3 = VAR_0->private_data;
  if (VAR_3->packed)
    {
      FUNC_0(VAR_3->packed->data,
             VAR_1->data + *VAR_2,
             VAR_3->packed->len);

      VAR_3->packed->data[VAR_3->packed->len] = '\0';
      *VAR_2 += VAR_3->packed->len;
    }

  VAR_0 = VAR_3->first_substream;
  while (VAR_0)
    {
      VAR_3 = VAR_0->private_data;
      FUNC_1(VAR_0, VAR_1, VAR_2);
      VAR_0 = VAR_3->is_last ? ((void*)0) : VAR_3->next;
    }
}
