
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; } ;
struct buf {int b_xflags; struct bufobj* b_bufobj; struct vnode* b_vp; int b_flags; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct buf*,struct vnode*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,struct vnode*,char*) ;
 int FUNC_3 (struct buf*,struct bufobj*,int) ;
 int FUNC_4 (struct vnode*) ;

void
FUNC_5(struct vnode *VAR_3, struct buf *VAR_4)
{
 struct bufobj *VAR_5;

 VAR_5 = &VAR_3->v_bufobj;
 FUNC_0(VAR_5);
 FUNC_2(VAR_4->b_vp == ((void*)0), VAR_4->b_vp, ("bgetvp: not free"));

 FUNC_1(VAR_2, "bgetvp(%p) vp %p flags %X", VAR_4, VAR_3, VAR_4->b_flags);
 FUNC_2((VAR_4->b_xflags & (VAR_1|VAR_0)) == 0, VAR_3,
     ("bgetvp: bp already attached! %p", VAR_4));

 FUNC_4(VAR_3);
 VAR_4->b_vp = VAR_3;
 VAR_4->b_bufobj = VAR_5;



 FUNC_3(VAR_4, VAR_5, VAR_0);
}
