
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t tp_row; size_t tp_col; } ;
typedef TYPE_2__ term_pos_t ;
typedef scalar_t__ term_char_t ;
struct TYPE_5__ {size_t tp_row; size_t tp_col; } ;
struct vt_buf {size_t vb_curroffset; scalar_t__** vb_rows; TYPE_1__ vb_scr_size; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (struct vt_buf*) ;
 int FUNC_2 (struct vt_buf*,TYPE_2__ const*) ;

void
FUNC_3(struct vt_buf *VAR_0, const term_pos_t *VAR_1, term_char_t VAR_2)
{
 term_char_t *VAR_3;

 FUNC_0(VAR_1->tp_row < VAR_0->vb_scr_size.tp_row,
     ("vtbuf_putchar tp_row %d must be less than screen width %d",
  VAR_1->tp_row, VAR_0->vb_scr_size.tp_row));
 FUNC_0(VAR_1->tp_col < VAR_0->vb_scr_size.tp_col,
     ("vtbuf_putchar tp_col %d must be less than screen height %d",
  VAR_1->tp_col, VAR_0->vb_scr_size.tp_col));

 VAR_3 = VAR_0->vb_rows[(VAR_0->vb_curroffset + VAR_1->tp_row) %
     FUNC_1(VAR_0)];
 if (VAR_3[VAR_1->tp_col] != VAR_2) {
  VAR_3[VAR_1->tp_col] = VAR_2;
  FUNC_2(VAR_0, VAR_1);
 }
}
