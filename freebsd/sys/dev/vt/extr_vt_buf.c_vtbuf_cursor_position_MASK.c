
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_pos_t ;
struct vt_buf {int vb_flags; int vb_cursor; } ;


 int VAR_0 ;
 int FUNC_0 (struct vt_buf*,int *) ;

void
FUNC_1(struct vt_buf *VAR_1, const term_pos_t *VAR_2)
{
 if (VAR_1->vb_flags & VAR_0) {
  FUNC_0(VAR_1, &VAR_1->vb_cursor);
  VAR_1->vb_cursor = *VAR_2;
  FUNC_0(VAR_1, &VAR_1->vb_cursor);
 } else {
  VAR_1->vb_cursor = *VAR_2;
 }
}
