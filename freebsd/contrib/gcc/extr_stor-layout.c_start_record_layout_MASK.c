
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct record_layout_info_s {int dummy; } ;
typedef TYPE_1__* record_layout_info ;
struct TYPE_4__ {scalar_t__ remaining_in_alignment; scalar_t__ packed_maybe_necessary; scalar_t__ pending_statics; scalar_t__ prev_field; int bitpos; int offset; void* record_align; void* offset_align; void* unpacked_align; int t; } ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (void*,unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int) ;

record_layout_info
FUNC_4 (tree VAR_5)
{
  record_layout_info VAR_6 = FUNC_3 (sizeof (struct record_layout_info_s));

  VAR_6->t = VAR_5;




  VAR_6->record_align = FUNC_0 (VAR_1, FUNC_1 (VAR_5));
  VAR_6->unpacked_align = VAR_6->record_align;
  VAR_6->offset_align = FUNC_0 (VAR_6->record_align, VAR_0);







  VAR_6->offset = VAR_4;
  VAR_6->bitpos = VAR_3;
  VAR_6->prev_field = 0;
  VAR_6->pending_statics = 0;
  VAR_6->packed_maybe_necessary = 0;
  VAR_6->remaining_in_alignment = 0;

  return VAR_6;
}
