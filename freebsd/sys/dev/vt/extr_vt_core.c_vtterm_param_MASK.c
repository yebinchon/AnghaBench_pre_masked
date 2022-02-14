
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {unsigned int vw_mouse_level; int vw_buf; } ;
struct terminal {struct vt_window* tm_softc; } ;





 int FUNC_0 (struct vt_window*,int ) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct terminal *VAR_0, int VAR_1, unsigned int VAR_2)
{
 struct vt_window *VAR_3 = VAR_0->tm_softc;

 switch (VAR_1) {
 case 129:






  VAR_2 = (VAR_2 == 1) ? 0 : 1;

 case 128:
  FUNC_1(&VAR_3->vw_buf, VAR_2);
  FUNC_0(VAR_3, 0);
  break;
 case 130:
  VAR_3->vw_mouse_level = VAR_2;
  break;
 }
}
