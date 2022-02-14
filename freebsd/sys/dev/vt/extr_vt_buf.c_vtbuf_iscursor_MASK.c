
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tp_col; int tp_row; } ;
struct TYPE_5__ {int tp_col; int tp_row; } ;
struct TYPE_4__ {int tp_row; int tp_col; } ;
struct vt_buf {int vb_flags; int vb_history_size; TYPE_3__ vb_mark_end; TYPE_2__ vb_mark_start; TYPE_1__ vb_cursor; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct vt_buf const*,int) ;

int
FUNC_3(const struct vt_buf *VAR_2, int VAR_3, int VAR_4)
{

 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;


 if ((VAR_2->vb_flags & (VAR_0|VAR_1)) == VAR_0 &&
     (VAR_2->vb_cursor.tp_row == VAR_3) && (VAR_2->vb_cursor.tp_col == VAR_4))
  return (1);



 if (VAR_2->vb_mark_start.tp_col == VAR_2->vb_mark_end.tp_col &&
     VAR_2->vb_mark_start.tp_row == VAR_2->vb_mark_end.tp_row)
  return (0);

 VAR_5 = VAR_2->vb_mark_start.tp_col;
 VAR_6 = VAR_2->vb_mark_start.tp_row;
 VAR_8 = VAR_2->vb_mark_end.tp_col;
 VAR_9 = VAR_2->vb_mark_end.tp_row;






 VAR_7 = VAR_2->vb_history_size;
 VAR_10 = (VAR_7 + VAR_9 - VAR_6) % VAR_7;
 VAR_3 = FUNC_2(VAR_2, VAR_3);


 if ((2 * VAR_10) > VAR_7 || (VAR_10 == 0 && VAR_5 > VAR_8)) {
  VAR_10 = VAR_5; VAR_5 = VAR_8; VAR_8 = VAR_10;
  VAR_10 = VAR_6; VAR_6 = VAR_9; VAR_9 = VAR_10;
 }

 if (FUNC_1(FUNC_0(VAR_5, VAR_6), FUNC_0(VAR_4, VAR_3),
     FUNC_0(VAR_8, VAR_9), FUNC_0(0, VAR_7)))
  return (1);


 return (0);
}
