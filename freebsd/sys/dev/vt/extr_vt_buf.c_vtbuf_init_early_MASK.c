
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int tp_row; int tp_col; } ;
struct TYPE_13__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_17__ {TYPE_5__ tr_end; TYPE_3__ tr_begin; } ;
typedef TYPE_7__ term_rect_t ;
typedef int term_char_t ;
struct TYPE_18__ {scalar_t__ ta_bgcolor; scalar_t__ ta_fgcolor; } ;
typedef TYPE_8__ teken_attr_t ;
struct TYPE_14__ {int tp_col; } ;
struct TYPE_12__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_11__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct vt_buf {int vb_flags; int vb_lock; TYPE_6__* vb_terminal; int vb_history_size; TYPE_4__ vb_scr_size; TYPE_2__ vb_mark_end; TYPE_1__ vb_mark_start; scalar_t__ vb_curroffset; scalar_t__ vb_roffset; } ;
struct TYPE_16__ {int tm_emulator; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 TYPE_8__* FUNC_4 (int *) ;
 int FUNC_5 (struct vt_buf*,TYPE_7__*,int ) ;
 int FUNC_6 (struct vt_buf*) ;
 int FUNC_7 (struct vt_buf*) ;

void
FUNC_8(struct vt_buf *VAR_3)
{
 term_rect_t VAR_4;
 const teken_attr_t *VAR_5;
 term_char_t VAR_6;

 VAR_3->vb_flags |= VAR_1;
 VAR_3->vb_roffset = 0;
 VAR_3->vb_curroffset = 0;
 VAR_3->vb_mark_start.tp_row = 0;
 VAR_3->vb_mark_start.tp_col = 0;
 VAR_3->vb_mark_end.tp_row = 0;
 VAR_3->vb_mark_end.tp_col = 0;

 FUNC_6(VAR_3);
 VAR_4.tr_begin.tp_row = VAR_4.tr_begin.tp_col = 0;
 VAR_4.tr_end.tp_col = VAR_3->vb_scr_size.tp_col;
 VAR_4.tr_end.tp_row = VAR_3->vb_history_size;

 VAR_5 = FUNC_4(&VAR_3->vb_terminal->tm_emulator);
 VAR_6 = FUNC_1((term_char_t)VAR_5->ta_fgcolor) |
     FUNC_0((term_char_t)VAR_5->ta_bgcolor);
 FUNC_5(VAR_3, &VAR_4, FUNC_2(VAR_6));
 FUNC_7(VAR_3);
 if ((VAR_3->vb_flags & VAR_2) == 0) {
  FUNC_3(&VAR_3->vb_lock, "vtbuf", ((void*)0), VAR_0);
  VAR_3->vb_flags |= VAR_2;
 }
}
