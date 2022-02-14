
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int tp_col; int tp_row; } ;
struct TYPE_9__ {int tp_col; int tp_row; } ;
struct TYPE_12__ {TYPE_3__ tr_end; TYPE_2__ tr_begin; } ;
typedef TYPE_5__ term_rect_t ;
struct vt_window {int vw_buf; struct vt_font* vw_font; } ;
struct vt_font {int vf_width; int vf_height; } ;
struct vt_device {int vd_mx_drawn; int vd_my_drawn; TYPE_4__* vd_driver; TYPE_1__* vd_mcursor; struct vt_window* vd_curwindow; } ;
struct TYPE_11__ {int (* vd_invalidate_text ) (struct vt_device*,TYPE_5__*) ;} ;
struct TYPE_8__ {int width; int height; } ;


 int FUNC_0 (struct vt_device*,TYPE_5__*) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct vt_device *VAR_0, int VAR_1)
{
 term_rect_t VAR_2;
 struct vt_window *VAR_3;
 struct vt_font *VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = VAR_0->vd_curwindow;
 VAR_4 = VAR_3->vw_font;

 VAR_5 = VAR_0->vd_mx_drawn;
 VAR_6 = VAR_0->vd_my_drawn;

 if (VAR_4 != ((void*)0)) {
  VAR_2.tr_begin.tp_col = VAR_5 / VAR_4->vf_width;
  VAR_2.tr_begin.tp_row = VAR_6 / VAR_4->vf_height;
  VAR_2.tr_end.tp_col =
      ((VAR_5 + VAR_0->vd_mcursor->width) / VAR_4->vf_width) + 1;
  VAR_2.tr_end.tp_row =
      ((VAR_6 + VAR_0->vd_mcursor->height) / VAR_4->vf_height) + 1;
 } else {






  VAR_2.tr_begin.tp_col = VAR_5;
  VAR_2.tr_begin.tp_row = VAR_6;
  VAR_2.tr_end.tp_col = VAR_5 + 2;
  VAR_2.tr_end.tp_row = VAR_6 + 2;
 }

 if (!VAR_1)
  FUNC_2(&VAR_3->vw_buf);
 if (VAR_0->vd_driver->vd_invalidate_text)
  VAR_0->vd_driver->vd_invalidate_text(VAR_0, &VAR_2);
 FUNC_1(&VAR_3->vw_buf, &VAR_2);
 if (!VAR_1)
  FUNC_3(&VAR_3->vw_buf);
}
