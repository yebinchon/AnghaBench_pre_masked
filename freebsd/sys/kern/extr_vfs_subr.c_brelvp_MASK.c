
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct TYPE_2__ {scalar_t__ bv_cnt; } ;
struct bufobj {int bo_flag; TYPE_1__ bo_dirty; } ;
struct buf {int b_xflags; struct bufobj* b_bufobj; struct vnode* b_vp; int b_flags; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,struct buf*,struct vnode*,int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct bufobj*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,struct buf*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct vnode*) ;

void
FUNC_10(struct buf *VAR_7)
{
 struct bufobj *VAR_8;
 struct vnode *VAR_9;

 FUNC_2(VAR_3, "brelvp(%p) vp %p flags %X", VAR_7, VAR_7->b_vp, VAR_7->b_flags);
 FUNC_3(VAR_7->b_vp != ((void*)0), ("brelvp: NULL"));




 VAR_9 = VAR_7->b_vp;
 VAR_8 = VAR_7->b_bufobj;
 FUNC_0(VAR_8);
 if (VAR_7->b_xflags & (VAR_2 | VAR_1))
  FUNC_5(VAR_7);
 else
  FUNC_8("brelvp: Buffer %p not on queue.", VAR_7);
 if ((VAR_8->bo_flag & VAR_0) && VAR_8->bo_dirty.bv_cnt == 0) {
  VAR_8->bo_flag &= ~VAR_0;
  FUNC_6(&VAR_5);
  FUNC_4(VAR_8, VAR_4);
  VAR_6--;
  FUNC_7(&VAR_5);
 }
 VAR_7->b_vp = ((void*)0);
 VAR_7->b_bufobj = ((void*)0);
 FUNC_1(VAR_8);
 FUNC_9(VAR_9);
}
