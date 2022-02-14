
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {struct vt_device* vw_device; } ;
struct vt_device {int vd_flags; } ;
struct terminal {struct vt_window* tm_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct terminal *VAR_4)
{
 struct vt_window *VAR_5 = VAR_4->tm_softc;
 struct vt_device *VAR_6 = VAR_5->vw_device;

 if (!VAR_3)
  return;

 if (VAR_6->vd_flags & VAR_0)
  return;

 FUNC_0(1193182 / VAR_2, VAR_1);
}
