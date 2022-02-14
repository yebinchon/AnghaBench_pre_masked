
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int term_char_t ;
struct TYPE_6__ {int tp_col; size_t tp_row; } ;
struct TYPE_5__ {int tp_col; size_t tp_row; } ;
struct TYPE_4__ {int tp_col; } ;
struct vt_buf {int vb_mark_last; TYPE_3__ vb_mark_end; TYPE_2__ vb_mark_start; TYPE_1__ vb_scr_size; int ** vb_rows; } ;


 char FUNC_0 (int ) ;







 int FUNC_1 (struct vt_buf*) ;
 void* FUNC_2 (struct vt_buf*,int) ;

int
FUNC_3(struct vt_buf *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 term_char_t *VAR_4;
 int VAR_5;

 switch (VAR_1) {
 case 134:
  if (VAR_0->vb_mark_last != 132)
   return (0);

 case 132:
 case 133:
  FUNC_1(VAR_0);
  VAR_0->vb_mark_end.tp_col = VAR_2;
  VAR_0->vb_mark_end.tp_row = FUNC_2(VAR_0, VAR_3);
  break;
 case 129:
  FUNC_1(VAR_0);
  VAR_0->vb_mark_start.tp_col = VAR_2;
  VAR_0->vb_mark_start.tp_row = FUNC_2(VAR_0, VAR_3);

  VAR_0->vb_mark_end.tp_col = VAR_2;
  VAR_0->vb_mark_end.tp_row = FUNC_2(VAR_0, VAR_3);
  break;
 case 128:
  FUNC_1(VAR_0);
  VAR_0->vb_mark_start.tp_row = VAR_0->vb_mark_end.tp_row =
      FUNC_2(VAR_0, VAR_3);
  VAR_4 = VAR_0->vb_rows[VAR_0->vb_mark_start.tp_row];
  for (VAR_5 = VAR_2; VAR_5 >= 0; VAR_5 --) {
   if (FUNC_0(VAR_4[VAR_5]) == ' ') {
    VAR_0->vb_mark_start.tp_col = VAR_5 + 1;
    break;
   }
  }
  for (VAR_5 = VAR_2; VAR_5 < VAR_0->vb_scr_size.tp_col; VAR_5 ++) {
   if (FUNC_0(VAR_4[VAR_5]) == ' ') {
    VAR_0->vb_mark_end.tp_col = VAR_5;
    break;
   }
  }
  if (VAR_0->vb_mark_start.tp_col > VAR_0->vb_mark_end.tp_col)
   VAR_0->vb_mark_start.tp_col = VAR_0->vb_mark_end.tp_col;
  break;
 case 130:
  FUNC_1(VAR_0);
  VAR_0->vb_mark_start.tp_col = 0;
  VAR_0->vb_mark_end.tp_col = VAR_0->vb_scr_size.tp_col;
  VAR_0->vb_mark_start.tp_row = VAR_0->vb_mark_end.tp_row =
      FUNC_2(VAR_0, VAR_3);
  break;
 case 131:
  VAR_0->vb_mark_last = VAR_1;

 default:

  return (0);
 }

 VAR_0->vb_mark_last = VAR_1;

 FUNC_1(VAR_0);
 return (1);
}
