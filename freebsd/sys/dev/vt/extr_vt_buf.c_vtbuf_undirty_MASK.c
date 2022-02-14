
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_rect_t ;
struct vt_buf {int vb_dirtyrect; } ;


 int FUNC_0 (struct vt_buf*) ;

void
FUNC_1(struct vt_buf *VAR_0, term_rect_t *VAR_1)
{

 *VAR_1 = VAR_0->vb_dirtyrect;
 FUNC_0(VAR_0);
}
