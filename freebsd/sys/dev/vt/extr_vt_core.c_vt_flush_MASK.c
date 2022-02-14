
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ tp_col; } ;
struct TYPE_13__ {scalar_t__ tp_col; } ;
struct TYPE_16__ {TYPE_3__ tr_end; TYPE_2__ tr_begin; } ;
typedef TYPE_5__ term_rect_t ;
struct TYPE_17__ {int ta_bgcolor; } ;
typedef TYPE_6__ teken_attr_t ;
struct vt_window {int vw_flags; int vw_buf; int vw_draw_area; TYPE_1__* vw_terminal; struct vt_font* vw_font; } ;
struct vt_font {int dummy; } ;
struct vt_device {int vd_flags; int vd_mshown; scalar_t__ vd_mx; scalar_t__ vd_mx_drawn; scalar_t__ vd_my; scalar_t__ vd_my_drawn; TYPE_4__* vd_driver; struct vt_window* vd_curwindow; } ;
struct TYPE_15__ {int (* vd_bitblt_text ) (struct vt_device*,struct vt_window*,TYPE_5__*) ;int (* vd_invalidate_text ) (struct vt_device*,TYPE_5__*) ;} ;
struct TYPE_12__ {int tm_emulator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (struct vt_device*,TYPE_5__*) ;
 int FUNC_1 (struct vt_device*,struct vt_window*,TYPE_5__*) ;
 TYPE_6__* FUNC_2 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct vt_device*,int) ;
 int FUNC_4 (struct vt_device*,int *,int ) ;
 int FUNC_5 (struct vt_device*,struct vt_font*,TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vt_device*) ;

__attribute__((used)) static int
FUNC_10(struct vt_device *VAR_10)
{
 struct vt_window *VAR_11;
 struct vt_font *VAR_12;
 term_rect_t VAR_13;

 int VAR_14, VAR_15;


 VAR_11 = VAR_10->vd_curwindow;
 if (VAR_11 == ((void*)0))
  return (0);

 if (VAR_10->vd_flags & VAR_2 || VAR_11->vw_flags & VAR_5)
  return (0);

 VAR_12 = VAR_11->vw_font;
 if (((VAR_10->vd_flags & VAR_4) == 0) && (VAR_12 == ((void*)0)))
  return (0);

 FUNC_6(&VAR_11->vw_buf);


 VAR_14 = VAR_10->vd_mshown;
 VAR_15 = (VAR_10->vd_mx != VAR_10->vd_mx_drawn ||
     VAR_10->vd_my != VAR_10->vd_my_drawn);


 if ((VAR_10->vd_flags & VAR_1) &&
     !(VAR_11->vw_flags & VAR_6) &&
     !VAR_7 && VAR_8 == ((void*)0)) {
  VAR_10->vd_mshown = 1;
 } else {
  VAR_10->vd_mshown = 0;
 }





 if (VAR_14 != VAR_10->vd_mshown ||
     (VAR_10->vd_mshown && VAR_15))
  FUNC_3(VAR_10, 1);






 VAR_10->vd_mx_drawn = VAR_10->vd_mx;
 VAR_10->vd_my_drawn = VAR_10->vd_my;





 if (VAR_10->vd_mshown && VAR_15)
  FUNC_3(VAR_10, 1);


 FUNC_7(&VAR_11->vw_buf, &VAR_13);


 if (VAR_10->vd_flags & (VAR_0 | VAR_3)) {
  const teken_attr_t *VAR_16;

  VAR_10->vd_flags &= ~VAR_0;

  VAR_16 = FUNC_2(&VAR_11->vw_terminal->tm_emulator);
  FUNC_4(VAR_10, &VAR_11->vw_draw_area, VAR_16->ta_bgcolor);
  FUNC_5(VAR_10, VAR_12, &VAR_13);
  if (VAR_10->vd_driver->vd_invalidate_text)
   VAR_10->vd_driver->vd_invalidate_text(VAR_10, &VAR_13);
  if (VAR_9)
   FUNC_9(VAR_10);
 }

 if (VAR_13.tr_begin.tp_col < VAR_13.tr_end.tp_col) {
  VAR_10->vd_driver->vd_bitblt_text(VAR_10, VAR_11, &VAR_13);
  FUNC_8(&VAR_11->vw_buf);
  return (1);
 }

 FUNC_8(&VAR_11->vw_buf);
 return (0);
}
