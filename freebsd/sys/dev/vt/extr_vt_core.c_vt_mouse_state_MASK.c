
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_flags; } ;
struct vt_device {struct vt_window* vd_curwindow; } ;




 int VAR_0 ;
 struct vt_device* VAR_1 ;
 int FUNC_0 (struct vt_device*,int) ;
 int FUNC_1 (struct vt_window*,int ) ;

void
FUNC_2(int VAR_2)
{
 struct vt_device *VAR_3;
 struct vt_window *VAR_4;

 VAR_3 = VAR_1;
 VAR_4 = VAR_3->vd_curwindow;

 switch (VAR_2) {
 case 129:
  VAR_4->vw_flags |= VAR_0;
  break;
 case 128:
  VAR_4->vw_flags &= ~VAR_0;
  break;
 }


 FUNC_0(VAR_3, 0);
 FUNC_1(VAR_4, 0);
}
