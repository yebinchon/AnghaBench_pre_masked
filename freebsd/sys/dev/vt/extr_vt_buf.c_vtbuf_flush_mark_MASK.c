
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ tp_row; int tp_col; } ;
struct TYPE_10__ {int tp_row; scalar_t__ tp_col; } ;
struct TYPE_13__ {TYPE_5__ tr_end; TYPE_3__ tr_begin; } ;
typedef TYPE_6__ term_rect_t ;
struct TYPE_11__ {int tp_col; } ;
struct TYPE_9__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_8__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct vt_buf {TYPE_4__ vb_scr_size; TYPE_2__ vb_mark_end; TYPE_1__ vb_mark_start; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct vt_buf*) ;
 int FUNC_3 (struct vt_buf*) ;
 int FUNC_4 (struct vt_buf*,TYPE_6__*) ;
 int FUNC_5 (struct vt_buf*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct vt_buf *VAR_0)
{
 term_rect_t VAR_1;
 int VAR_2, VAR_3;


 if ((VAR_0->vb_mark_start.tp_col != VAR_0->vb_mark_end.tp_col) ||
     (VAR_0->vb_mark_start.tp_row != VAR_0->vb_mark_end.tp_row)) {

  VAR_2 = FUNC_5(VAR_0, VAR_0->vb_mark_start.tp_row);
  VAR_3 = FUNC_5(VAR_0, VAR_0->vb_mark_end.tp_row);

  VAR_1.tr_begin.tp_col = 0;
  VAR_1.tr_begin.tp_row = FUNC_1(VAR_2, VAR_3);

  VAR_1.tr_end.tp_col = VAR_0->vb_scr_size.tp_col;
  VAR_1.tr_end.tp_row = FUNC_0(VAR_2, VAR_3) + 1;

  FUNC_2(VAR_0);
  FUNC_4(VAR_0, &VAR_1);
  FUNC_3(VAR_0);
 }
}
