
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tp_row; int tp_col; } ;
typedef TYPE_2__ term_pos_t ;
typedef char term_char_t ;
struct TYPE_5__ {int tp_col; } ;
struct TYPE_7__ {int tp_col; int tp_row; } ;
struct vt_buf {char** vb_rows; TYPE_1__ vb_scr_size; TYPE_4__ vb_mark_end; TYPE_4__ vb_mark_start; } ;


 int FUNC_0 (TYPE_2__,TYPE_4__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vt_buf*,int ) ;

void
FUNC_3(struct vt_buf *VAR_0, term_char_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 term_pos_t VAR_8, VAR_9;


 if (FUNC_1(FUNC_2(VAR_0, VAR_0->vb_mark_start.tp_row),
     VAR_0->vb_mark_start.tp_col) >
     FUNC_1(FUNC_2(VAR_0, VAR_0->vb_mark_end.tp_row),
     VAR_0->vb_mark_end.tp_col)) {
  FUNC_0(VAR_9, VAR_0->vb_mark_start);
  FUNC_0(VAR_8, VAR_0->vb_mark_end);
 } else {
  FUNC_0(VAR_8, VAR_0->vb_mark_start);
  FUNC_0(VAR_9, VAR_0->vb_mark_end);
 }

 VAR_3 = 0;
 for (VAR_4 = VAR_8.tp_row; VAR_4 <= VAR_9.tp_row; VAR_4 ++) {
  VAR_6 = (VAR_4 == VAR_8.tp_row)?VAR_8.tp_col:0;
  VAR_7 = (VAR_4 == VAR_9.tp_row)?VAR_9.tp_col:VAR_0->vb_scr_size.tp_col;
  for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5 ++) {
   VAR_1[VAR_3++] = VAR_0->vb_rows[VAR_4][VAR_5];
  }

  if (VAR_4 != VAR_9.tp_row) {
   VAR_1[VAR_3++] = '\r';
   VAR_1[VAR_3++] = '\n';
  }
 }
}
