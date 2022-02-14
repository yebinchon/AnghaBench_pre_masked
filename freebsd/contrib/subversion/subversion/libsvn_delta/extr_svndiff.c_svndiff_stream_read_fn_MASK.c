
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ read_pos; TYPE_2__* window_buffer; scalar_t__ hit_eof; int handler_baton; int (* handler ) (int *,int ) ;int scratch_pool; int txstream; } ;
typedef TYPE_1__ svndiff_stream_baton_t ;
typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int **,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2, char *VAR_3, apr_size_t *VAR_4)
{
  svndiff_stream_baton_t *VAR_5 = VAR_2;
  apr_size_t VAR_6 = *VAR_4;
  apr_size_t VAR_7 = 0;

  while (VAR_6)
    {
      apr_size_t VAR_8;

      if (VAR_5->read_pos == VAR_5->window_buffer->len && !VAR_5->hit_eof)
        {
          svn_txdelta_window_t *VAR_9;

          FUNC_3(VAR_5->scratch_pool);
          FUNC_4(VAR_5->window_buffer);
          FUNC_0(FUNC_5(&VAR_9, VAR_5->txstream,
                                          VAR_5->scratch_pool));
          FUNC_0(VAR_5->handler(VAR_9, VAR_5->handler_baton));
          VAR_5->read_pos = 0;

          if (!VAR_9)
            VAR_5->hit_eof = VAR_1;
        }

      if (VAR_6 > VAR_5->window_buffer->len - VAR_5->read_pos)
        VAR_8 = VAR_5->window_buffer->len - VAR_5->read_pos;
      else
        VAR_8 = VAR_6;

      if (!VAR_8)
          break;

      FUNC_1(VAR_3, VAR_5->window_buffer->data + VAR_5->read_pos, VAR_8);
      VAR_5->read_pos += VAR_8;
      VAR_3 += VAR_8;
      VAR_7 += VAR_8;
      VAR_6 -= VAR_8;
    }

  *VAR_4 = VAR_7;
  return VAR_0;
}
