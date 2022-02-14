
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tp_row; int tp_col; } ;
typedef TYPE_2__ term_pos_t ;
typedef int term_char_t ;
struct TYPE_5__ {int tp_col; } ;
struct TYPE_7__ {int tp_col; int tp_row; } ;
struct vt_buf {TYPE_1__ vb_scr_size; TYPE_4__ vb_mark_end; TYPE_4__ vb_mark_start; } ;


 int FUNC_0 (TYPE_2__,TYPE_4__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vt_buf*,int ) ;

int
FUNC_3(struct vt_buf *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 term_pos_t VAR_4, VAR_5;


 if (FUNC_1(FUNC_2(VAR_0, VAR_0->vb_mark_start.tp_row),
     VAR_0->vb_mark_start.tp_col) >
     FUNC_1(FUNC_2(VAR_0, VAR_0->vb_mark_end.tp_row),
     VAR_0->vb_mark_end.tp_col)) {
  FUNC_0(VAR_5, VAR_0->vb_mark_start);
  FUNC_0(VAR_4, VAR_0->vb_mark_end);
 } else {
  FUNC_0(VAR_4, VAR_0->vb_mark_start);
  FUNC_0(VAR_5, VAR_0->vb_mark_end);
 }

 VAR_2 = VAR_4.tp_row * VAR_0->vb_scr_size.tp_col + VAR_4.tp_col;
 VAR_1 = VAR_5.tp_row * VAR_0->vb_scr_size.tp_col + VAR_5.tp_col;


 VAR_3 = VAR_1 - VAR_2 + ((VAR_5.tp_row - VAR_4.tp_row) * 2);

 return (VAR_3 * sizeof(term_char_t));
}
