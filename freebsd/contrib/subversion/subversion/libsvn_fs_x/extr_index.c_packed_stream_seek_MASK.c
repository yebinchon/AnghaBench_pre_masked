
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stream_start; scalar_t__ used; scalar_t__ start_offset; scalar_t__ next_offset; size_t current; TYPE_1__* buffer; } ;
typedef TYPE_2__ svn_fs_x__packed_number_stream_t ;
typedef size_t apr_size_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_4__ {scalar_t__ total_len; } ;



__attribute__((used)) static void
FUNC_0(svn_fs_x__packed_number_stream_t *VAR_0,
                   apr_off_t VAR_1)
{
  apr_off_t VAR_2 = VAR_1 + VAR_0->stream_start;

  if ( VAR_0->used == 0
      || VAR_1 < VAR_0->start_offset
      || VAR_1 >= VAR_0->next_offset)
    {

      VAR_0->start_offset = VAR_2;
      VAR_0->next_offset = VAR_2;
      VAR_0->current = 0;
      VAR_0->used = 0;
    }
  else
    {



      apr_size_t VAR_3;
      for (VAR_3 = 0; VAR_3 < VAR_0->used; ++VAR_3)
        if (VAR_0->buffer[VAR_3].total_len > VAR_2 - VAR_0->start_offset)
          break;

      VAR_0->current = VAR_3;
    }
}
