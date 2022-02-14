
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yy_size_t ;
struct yy_buffer_state {int dummy; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_buf_size; char* yy_buf_pos; char* yy_ch_buf; int yy_n_chars; int yy_at_bol; int yy_buffer_status; scalar_t__ yy_fill_buffer; scalar_t__ yy_is_interactive; scalar_t__ yy_input_file; scalar_t__ yy_is_our_buffer; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

YY_BUFFER_STATE FUNC_3 (char * VAR_2, yy_size_t VAR_3 )
{
 YY_BUFFER_STATE VAR_4;

 if ( VAR_3 < 2 ||
      VAR_2[VAR_3-2] != VAR_1 ||
      VAR_2[VAR_3-1] != VAR_1 )

  return 0;

 VAR_4 = (YY_BUFFER_STATE) FUNC_2(sizeof( struct yy_buffer_state ) );
 if ( ! VAR_4 )
  FUNC_0( "out of dynamic memory in null__scan_buffer()" );

 VAR_4->yy_buf_size = VAR_3 - 2;
 VAR_4->yy_buf_pos = VAR_4->yy_ch_buf = VAR_2;
 VAR_4->yy_is_our_buffer = 0;
 VAR_4->yy_input_file = 0;
 VAR_4->yy_n_chars = VAR_4->yy_buf_size;
 VAR_4->yy_is_interactive = 0;
 VAR_4->yy_at_bol = 1;
 VAR_4->yy_fill_buffer = 0;
 VAR_4->yy_buffer_status = VAR_0;

 FUNC_1(VAR_4 );

 return VAR_4;
}
