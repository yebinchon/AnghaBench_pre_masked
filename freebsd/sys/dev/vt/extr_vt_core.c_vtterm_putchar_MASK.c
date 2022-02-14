
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_pos_t ;
typedef int term_char_t ;
struct vt_window {int vw_buf; } ;
struct terminal {struct vt_window* tm_softc; } ;


 int FUNC_0 (int *,int const*,int ) ;

__attribute__((used)) static void
FUNC_1(struct terminal *VAR_0, const term_pos_t *VAR_1, term_char_t VAR_2)
{
 struct vt_window *VAR_3 = VAR_0->tm_softc;

 FUNC_0(&VAR_3->vw_buf, VAR_1, VAR_2);
}
