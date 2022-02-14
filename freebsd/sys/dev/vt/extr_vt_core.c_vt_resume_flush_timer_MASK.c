
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {struct vt_device* vw_device; } ;
struct vt_device {int vd_flags; int vd_timer_armed; struct vt_window* vd_curwindow; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct vt_device*,int) ;

void
FUNC_2(struct vt_window *VAR_1, int VAR_2)
{
 struct vt_device *VAR_3 = VAR_1->vw_device;

 if (VAR_3->vd_curwindow != VAR_1)
  return;

 if (!(VAR_3->vd_flags & VAR_0) ||
     !FUNC_0(&VAR_3->vd_timer_armed, 0, 1))
  return;

 FUNC_1(VAR_3, VAR_2);
}
