
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_window {struct vt_device* vw_device; } ;
struct vt_device {int vd_flags; TYPE_1__* vd_driver; struct vt_window* vd_curwindow; } ;
struct terminal {struct vt_window* tm_softc; } ;
struct TYPE_2__ {int (* vd_postswitch ) (struct vt_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*) ;

__attribute__((used)) static void
FUNC_2(struct terminal *VAR_5)
{
 struct vt_window *VAR_6 = VAR_5->tm_softc;
 struct vt_device *VAR_7 = VAR_6->vw_device;

 if (VAR_3 || VAR_4 != ((void*)0)) {

  if (VAR_7->vd_curwindow != VAR_6) {
   VAR_7->vd_curwindow = VAR_6;
   VAR_7->vd_flags |= VAR_1;
   if (VAR_7->vd_driver->vd_postswitch)
    VAR_7->vd_driver->vd_postswitch(VAR_7);
  }
  VAR_7->vd_flags &= ~VAR_2;
  FUNC_1(VAR_7);
 } else if (!(VAR_7->vd_flags & VAR_0)) {
  FUNC_1(VAR_7);
 }
}
