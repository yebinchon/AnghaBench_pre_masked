
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {scalar_t__ vw_grabbed; int vw_prev_kbdmode; int vw_kbdmode; struct vt_device* vw_device; } ;
struct vt_device {int vd_keyboard; } ;
struct terminal {struct vt_window* tm_softc; } ;
typedef int keyboard_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vt_window*,int *) ;

__attribute__((used)) static void
FUNC_4(struct terminal *VAR_1)
{
 struct vt_device *VAR_2;
 struct vt_window *VAR_3;
 keyboard_t *VAR_4;

 VAR_3 = VAR_1->tm_softc;
 VAR_2 = VAR_3->vw_device;

 VAR_4 = FUNC_0(VAR_2->vd_keyboard);
 if (VAR_4 == ((void*)0))
  return;

 if (--VAR_3->vw_grabbed > 0)
  return;

 FUNC_2(VAR_4, VAR_0);

 VAR_3->vw_kbdmode = VAR_3->vw_prev_kbdmode;
 FUNC_3(VAR_3, VAR_4);
 FUNC_1(VAR_4);
}
