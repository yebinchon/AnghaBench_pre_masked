
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_type; } ;
struct bufv {scalar_t__ bv_cnt; int bv_hd; } ;
struct bufobj {int bo_flag; struct bufv bo_dirty; struct bufv bo_clean; } ;
struct buf {int b_flags; int b_xflags; struct bufobj* b_bufobj; struct vnode* b_vp; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,struct buf*,struct vnode*,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_5 ;
 int FUNC_4 (struct bufobj*,int ) ;
 struct buf* FUNC_5 (int *) ;
 struct buf* FUNC_6 (int *,int ) ;


 int VAR_6 ;
 int FUNC_7 (struct buf*,struct bufobj*,int) ;
 int FUNC_8 (struct buf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct bufobj*,int) ;

void
FUNC_13(struct buf *VAR_14)
{
 struct vnode *VAR_15;
 struct bufobj *VAR_16;
 int VAR_17;




 VAR_15 = VAR_14->b_vp;
 VAR_16 = VAR_14->b_bufobj;
 ++VAR_11;

 FUNC_2(VAR_5, "reassignbuf(%p) vp %p flags %X",
     VAR_14, VAR_14->b_vp, VAR_14->b_flags);




 if (VAR_14->b_flags & VAR_4)
  FUNC_11("cannot reassign paging buffer");




 FUNC_0(VAR_16);
 if (VAR_14->b_xflags & (VAR_2 | VAR_1))
  FUNC_8(VAR_14);
 else
  FUNC_11("reassignbuf: Buffer %p not on queue.", VAR_14);




 if (VAR_14->b_flags & VAR_3) {
  if ((VAR_16->bo_flag & VAR_0) == 0) {
   switch (VAR_15->v_type) {
   case 128:
    VAR_17 = VAR_8;
    break;
   case 129:
    VAR_17 = VAR_10;
    break;
   default:
    VAR_17 = VAR_9;
   }
   FUNC_12(VAR_16, VAR_17);
  }
  FUNC_7(VAR_14, VAR_16, VAR_2);
 } else {
  FUNC_7(VAR_14, VAR_16, VAR_1);

  if ((VAR_16->bo_flag & VAR_0) && VAR_16->bo_dirty.bv_cnt == 0) {
   FUNC_9(&VAR_12);
   FUNC_4(VAR_16, VAR_6);
   VAR_13--;
   FUNC_10(&VAR_12);
   VAR_16->bo_flag &= ~VAR_0;
  }
 }
 FUNC_1(VAR_16);
}
