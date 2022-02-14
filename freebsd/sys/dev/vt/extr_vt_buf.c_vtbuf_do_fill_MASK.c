
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_5__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_7__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_3__ term_rect_t ;
typedef int term_char_t ;
struct vt_buf {unsigned int vb_curroffset; int ** vb_rows; } ;


 unsigned int FUNC_0 (struct vt_buf*) ;

__attribute__((used)) static void
FUNC_1(struct vt_buf *VAR_0, const term_rect_t *VAR_1, term_char_t VAR_2)
{
 unsigned int VAR_3, VAR_4;
 term_char_t *VAR_5;

 for (VAR_3 = VAR_1->tr_begin.tp_row; VAR_3 < VAR_1->tr_end.tp_row; VAR_3++) {
  VAR_5 = VAR_0->vb_rows[(VAR_0->vb_curroffset + VAR_3) %
      FUNC_0(VAR_0)];
  for (VAR_4 = VAR_1->tr_begin.tp_col; VAR_4 < VAR_1->tr_end.tp_col; VAR_4++) {
   VAR_5[VAR_4] = VAR_2;
  }
 }
}
