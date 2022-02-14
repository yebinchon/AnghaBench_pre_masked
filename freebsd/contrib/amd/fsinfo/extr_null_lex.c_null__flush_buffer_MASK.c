
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_at_bol; int yy_buffer_status; void** yy_ch_buf; void** yy_buf_pos; scalar_t__ yy_n_chars; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;

void FUNC_1 (YY_BUFFER_STATE VAR_3 )
{
     if ( ! VAR_3 )
  return;

 VAR_3->yy_n_chars = 0;





 VAR_3->yy_ch_buf[0] = VAR_2;
 VAR_3->yy_ch_buf[1] = VAR_2;

 VAR_3->yy_buf_pos = &VAR_3->yy_ch_buf[0];

 VAR_3->yy_at_bol = 1;
 VAR_3->yy_buffer_status = VAR_0;

 if ( VAR_3 == VAR_1 )
  FUNC_0( );
}
