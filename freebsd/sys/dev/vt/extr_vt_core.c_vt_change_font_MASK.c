
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int term_pos_t ;
struct winsize {int dummy; } ;
struct TYPE_6__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_5__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_7__ {TYPE_2__ tr_begin; TYPE_1__ tr_end; } ;
struct TYPE_8__ {int vb_cursor; int vb_history_size; } ;
struct vt_window {int vw_flags; TYPE_3__ vw_draw_area; struct vt_font* vw_font; TYPE_4__ vw_buf; struct terminal* vw_terminal; struct vt_device* vw_device; } ;
struct vt_font {int dummy; } ;
struct vt_device {int vd_flags; struct vt_window* vd_curwindow; void* vd_my; void* vd_mx; } ;
struct terminal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*) ;
 int VAR_2 ;
 void* FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 (struct terminal*,int) ;
 int FUNC_4 (struct terminal*,int *) ;
 int FUNC_5 (struct terminal*,struct winsize*,int ,int *) ;
 int FUNC_6 (struct vt_window*) ;
 int FUNC_7 (struct vt_window*,int ) ;
 int FUNC_8 (struct vt_device*,struct vt_font*,int *) ;
 int FUNC_9 (struct vt_device*,struct vt_font*,struct winsize*) ;
 int FUNC_10 (TYPE_4__*,int *,int ) ;
 struct vt_font* FUNC_11 (struct vt_font*) ;
 int FUNC_12 (struct vt_font*) ;

__attribute__((used)) static int
FUNC_13(struct vt_window *VAR_3, struct vt_font *VAR_4)
{
 struct vt_device *VAR_5 = VAR_3->vw_device;
 struct terminal *VAR_6 = VAR_3->vw_terminal;
 term_pos_t VAR_7;
 struct winsize VAR_8;
 FUNC_0(VAR_5);
 if (VAR_3->vw_flags & VAR_2) {

  FUNC_1(VAR_5);
  return (VAR_0);
 }
 VAR_3->vw_flags |= VAR_2;
 FUNC_1(VAR_5);

 FUNC_8(VAR_5, VAR_4, &VAR_7);
 FUNC_9(VAR_5, VAR_4, &VAR_8);


 FUNC_3(VAR_6, 1);
 FUNC_10(&VAR_3->vw_buf, &VAR_7, VAR_3->vw_buf.vb_history_size);
 FUNC_5(VAR_6, &VAR_8, 0, ((void*)0));
 FUNC_4(VAR_6, &VAR_3->vw_buf.vb_cursor);
 FUNC_3(VAR_6, 0);


 FUNC_0(VAR_5);
 if (VAR_3->vw_font != VAR_4 && VAR_3->vw_font != ((void*)0) && VAR_4 != ((void*)0)) {




  FUNC_12(VAR_3->vw_font);
  VAR_3->vw_font = FUNC_11(VAR_4);
 }





 FUNC_6(VAR_3);
 VAR_5->vd_mx = FUNC_2(VAR_5->vd_mx,
     VAR_3->vw_draw_area.tr_end.tp_col -
     VAR_3->vw_draw_area.tr_begin.tp_col - 1);
 VAR_5->vd_my = FUNC_2(VAR_5->vd_my,
     VAR_3->vw_draw_area.tr_end.tp_row -
     VAR_3->vw_draw_area.tr_begin.tp_row - 1);


 if (VAR_5->vd_curwindow == VAR_3) {
  VAR_5->vd_flags |= VAR_1;
  FUNC_7(VAR_3, 0);
 }
 VAR_3->vw_flags &= ~VAR_2;
 FUNC_1(VAR_5);
 return (0);
}
