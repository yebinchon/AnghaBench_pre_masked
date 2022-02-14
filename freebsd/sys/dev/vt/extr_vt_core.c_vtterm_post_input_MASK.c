
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_buf; } ;
struct terminal {struct vt_window* tm_softc; } ;


 int FUNC_0 (struct vt_window*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct terminal *VAR_0)
{
 struct vt_window *VAR_1 = VAR_0->tm_softc;

 FUNC_1(&VAR_1->vw_buf);
 FUNC_0(VAR_1, 0);
}
