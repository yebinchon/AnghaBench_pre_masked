
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_buf {int vb_flags; int vb_cursor; } ;


 int VAR_0 ;
 int FUNC_0 (struct vt_buf*) ;
 int FUNC_1 (struct vt_buf*) ;
 int FUNC_2 (struct vt_buf*,int *) ;

void
FUNC_3(struct vt_buf *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(VAR_1);
 VAR_3 = VAR_1->vb_flags;
 if (VAR_2)
  VAR_1->vb_flags |= VAR_0;
 else
  VAR_1->vb_flags &= ~VAR_0;
 VAR_4 = VAR_1->vb_flags;

 if (VAR_3 != VAR_4)
  FUNC_2(VAR_1, &VAR_1->vb_cursor);
 FUNC_1(VAR_1);
}
