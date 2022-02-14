
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_8__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_11__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_4__ term_rect_t ;
typedef int term_char_t ;
struct TYPE_10__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct vt_buf {TYPE_3__ vb_scr_size; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vt_buf*,TYPE_4__ const*) ;
 int FUNC_2 (struct vt_buf*,TYPE_4__ const*,int ) ;

void
FUNC_3(struct vt_buf *VAR_0, const term_rect_t *VAR_1, term_char_t VAR_2)
{

 FUNC_0(VAR_1->tr_begin.tp_row < VAR_0->vb_scr_size.tp_row,
     ("vtbuf_fill begin.tp_row %d must be < screen height %d",
  VAR_1->tr_begin.tp_row, VAR_0->vb_scr_size.tp_row));
 FUNC_0(VAR_1->tr_begin.tp_col < VAR_0->vb_scr_size.tp_col,
     ("vtbuf_fill begin.tp_col %d must be < screen width %d",
  VAR_1->tr_begin.tp_col, VAR_0->vb_scr_size.tp_col));

 FUNC_0(VAR_1->tr_end.tp_row <= VAR_0->vb_scr_size.tp_row,
     ("vtbuf_fill end.tp_row %d must be <= screen height %d",
  VAR_1->tr_end.tp_row, VAR_0->vb_scr_size.tp_row));
 FUNC_0(VAR_1->tr_end.tp_col <= VAR_0->vb_scr_size.tp_col,
     ("vtbuf_fill end.tp_col %d must be <= screen width %d",
  VAR_1->tr_end.tp_col, VAR_0->vb_scr_size.tp_col));

 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_1);
}
