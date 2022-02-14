
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vt_axis_t ;
struct TYPE_5__ {int tp_col; int tp_row; } ;
struct TYPE_4__ {int tp_col; int tp_row; } ;
struct TYPE_6__ {TYPE_2__ tr_begin; TYPE_1__ tr_end; } ;
struct vt_window {TYPE_3__ vw_draw_area; struct vt_font* vw_font; struct vt_device* vw_device; } ;
struct vt_font {int vf_width; int vf_height; } ;
struct vt_device {int vd_width; int vd_height; } ;


 void* FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct vt_window *VAR_2)
{
 struct vt_device *VAR_3;
 struct vt_font *VAR_4;
 vt_axis_t VAR_5;

 VAR_3 = VAR_2->vw_device;

 if (VAR_2->vw_font == ((void*)0)) {
  VAR_2->vw_draw_area.tr_begin.tp_col = 0;
  VAR_2->vw_draw_area.tr_begin.tp_row = 0;
  if (VAR_0)
   VAR_2->vw_draw_area.tr_begin.tp_row = VAR_1;
  VAR_2->vw_draw_area.tr_end.tp_col = VAR_3->vd_width;
  VAR_2->vw_draw_area.tr_end.tp_row = VAR_3->vd_height;
  return;
 }

 VAR_4 = VAR_2->vw_font;






 VAR_5 = VAR_3->vd_height;
 if (VAR_0)
  VAR_5 -= VAR_1;
 VAR_2->vw_draw_area.tr_begin.tp_col = (VAR_3->vd_width % VAR_4->vf_width) / 2;
 VAR_2->vw_draw_area.tr_begin.tp_row = (VAR_5 % VAR_4->vf_height) / 2;
 if (VAR_0)
  VAR_2->vw_draw_area.tr_begin.tp_row += VAR_1;
 VAR_2->vw_draw_area.tr_end.tp_col = VAR_2->vw_draw_area.tr_begin.tp_col +
     FUNC_0(VAR_3->vd_width, VAR_4->vf_width);
 VAR_2->vw_draw_area.tr_end.tp_row = VAR_2->vw_draw_area.tr_begin.tp_row +
     FUNC_0(VAR_5, VAR_4->vf_height);
}
