
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_flags; struct vt_device* vw_device; } ;
struct vt_device {int vd_flags; } ;
struct terminal {struct vt_window* tm_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct terminal *VAR_2, int VAR_3)
{
 struct vt_window *VAR_4 = VAR_2->tm_softc;
 struct vt_device *VAR_5 = VAR_4->vw_device;

 FUNC_0(VAR_5);
 VAR_5->vd_flags &= ~VAR_0;
 if (VAR_3)
  VAR_4->vw_flags |= VAR_1;
 else {
  VAR_4->vw_flags &= ~VAR_1;

 }
 FUNC_1(VAR_5);
}
