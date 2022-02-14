
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_pos_t ;
struct vt_window {int vw_buf; } ;
struct terminal {struct vt_window* tm_softc; } ;


 int FUNC_0 (int *,int const*) ;

__attribute__((used)) static void
FUNC_1(struct terminal *VAR_0, const term_pos_t *VAR_1)
{
 struct vt_window *VAR_2 = VAR_0->tm_softc;

 FUNC_0(&VAR_2->vw_buf, VAR_1);
}
