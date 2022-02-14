
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* private_data; scalar_t__ buffer_used; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
struct TYPE_9__ {int int_stream_count; TYPE_1__* last_int_stream; TYPE_1__* first_int_stream; int pool; } ;
typedef TYPE_2__ svn_packed__data_root_t ;
typedef void* svn_boolean_t ;
struct TYPE_10__ {int is_last; TYPE_1__* next; int pool; void* is_signed; void* diff; } ;
typedef TYPE_3__ packed_int_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 TYPE_3__* FUNC_1 (int ,int) ;

svn_packed__int_stream_t *
FUNC_2(svn_packed__data_root_t *VAR_2,
                              svn_boolean_t VAR_3,
                              svn_boolean_t VAR_4)
{

  packed_int_private_t *VAR_5
    = FUNC_1(VAR_2->pool, sizeof(*VAR_5));
  svn_packed__int_stream_t *VAR_6
    = FUNC_0(VAR_2->pool, sizeof(*VAR_6));

  VAR_5->diff = VAR_3;
  VAR_5->is_signed = VAR_4;
  VAR_5->is_last = VAR_1;
  VAR_5->pool = VAR_2->pool;

  VAR_6->buffer_used = 0;
  VAR_6->private_data = VAR_5;


  if (VAR_2->last_int_stream)
    {
      packed_int_private_t *VAR_7
        = VAR_2->last_int_stream->private_data;
      VAR_7->next = VAR_6;
      VAR_7->is_last = VAR_0;
    }
  else
    {
      VAR_2->first_int_stream = VAR_6;
    }

  VAR_2->last_int_stream = VAR_6;
  VAR_2->int_stream_count++;

  return VAR_6;
}
