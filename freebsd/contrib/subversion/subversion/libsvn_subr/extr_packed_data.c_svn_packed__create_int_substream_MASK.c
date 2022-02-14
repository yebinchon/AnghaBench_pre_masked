
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* private_data; scalar_t__ buffer_used; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
typedef void* svn_boolean_t ;
struct TYPE_8__ {TYPE_1__* first_substream; TYPE_1__* next; int substream_count; TYPE_1__* last_substream; TYPE_1__* current_substream; int is_last; int pool; void* is_signed; void* diff; } ;
typedef TYPE_2__ packed_int_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (int ,int) ;

svn_packed__int_stream_t *
FUNC_2(svn_packed__int_stream_t *VAR_2,
                                 svn_boolean_t VAR_3,
                                 svn_boolean_t VAR_4)
{
  packed_int_private_t *VAR_5 = VAR_2->private_data;


  packed_int_private_t *VAR_6
    = FUNC_1(VAR_5->pool, sizeof(*VAR_6));
  svn_packed__int_stream_t *VAR_7
    = FUNC_0(VAR_5->pool, sizeof(*VAR_7));

  VAR_6->diff = VAR_3;
  VAR_6->is_signed = VAR_4;
  VAR_6->is_last = VAR_1;
  VAR_6->pool = VAR_5->pool;

  VAR_7->buffer_used = 0;
  VAR_7->private_data = VAR_6;


  if (VAR_5->last_substream)
    {
      packed_int_private_t *VAR_8
        = VAR_5->last_substream->private_data;
      VAR_8->next = VAR_7;
      VAR_8->is_last = VAR_0;
    }
  else
    {
      VAR_5->first_substream = VAR_7;
      VAR_5->current_substream = VAR_7;
    }

  VAR_5->last_substream = VAR_7;
  VAR_5->substream_count++;
  VAR_6->next = VAR_5->first_substream;

  return VAR_7;
}
