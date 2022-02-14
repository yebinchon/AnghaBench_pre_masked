
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tp_col; int tp_row; } ;
struct TYPE_5__ {int tp_col; int tp_row; } ;
struct TYPE_4__ {int tp_row; } ;
struct vt_buf {int vb_curroffset; int vb_history_size; int vb_flags; int vb_roffset; TYPE_3__ vb_mark_end; TYPE_2__ vb_mark_start; TYPE_1__ vb_scr_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int,int) ;

void
FUNC_1(struct vt_buf *VAR_2, int VAR_3)
{

 int VAR_4, VAR_5;


 VAR_2->vb_curroffset += VAR_3;
 if (VAR_2->vb_curroffset + VAR_2->vb_scr_size.tp_row >= VAR_2->vb_history_size) {
  VAR_2->vb_flags |= VAR_0;
  VAR_2->vb_curroffset %= VAR_2->vb_history_size;
 }
 if ((VAR_2->vb_flags & VAR_1) == 0) {
  VAR_2->vb_roffset = VAR_2->vb_curroffset;
 }


 VAR_5 = VAR_2->vb_history_size;
 VAR_4 = VAR_2->vb_roffset + VAR_2->vb_scr_size.tp_row + VAR_5 - 1;
 if (FUNC_0(VAR_4, VAR_2->vb_mark_start.tp_row, VAR_4 + VAR_3, VAR_5) ||
     FUNC_0(VAR_4, VAR_2->vb_mark_end.tp_row, VAR_4 + VAR_3, VAR_5)) {

  VAR_2->vb_mark_start.tp_row = VAR_2->vb_mark_end.tp_row;
  VAR_2->vb_mark_start.tp_col = VAR_2->vb_mark_end.tp_col;
 }

}
