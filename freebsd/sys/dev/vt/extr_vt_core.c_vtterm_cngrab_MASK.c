
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_kbdmode; int vw_prev_kbdmode; int vw_grabbed; struct vt_device* vw_device; } ;
struct vt_device {int vd_keyboard; } ;
struct terminal {struct vt_window* tm_softc; } ;
typedef int keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vt_window*,int *) ;
 int FUNC_4 (struct vt_window*) ;

__attribute__((used)) static void
FUNC_5(struct terminal *VAR_3)
{
 struct vt_device *VAR_4;
 struct vt_window *VAR_5;
 keyboard_t *VAR_6;

 VAR_5 = VAR_3->tm_softc;
 VAR_4 = VAR_5->vw_device;

 if (!VAR_2)
  FUNC_4(VAR_5);

 VAR_6 = FUNC_0(VAR_4->vd_keyboard);
 if (VAR_6 == ((void*)0))
  return;

 if (VAR_5->vw_grabbed++ > 0)
  return;





 FUNC_1(VAR_6);


 VAR_5->vw_prev_kbdmode = VAR_5->vw_kbdmode;
 VAR_5->vw_kbdmode = VAR_0;
 FUNC_3(VAR_5, VAR_6);

 FUNC_2(VAR_6, VAR_1);
}
