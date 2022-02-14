
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_strategy_args {struct vnode* a_vp; struct buf* a_bp; } ;
struct TYPE_2__ {int bo_bsize; } ;
struct vnode {scalar_t__ v_type; int v_mount; TYPE_1__ v_bufobj; } ;
struct ucred {int dummy; } ;
struct buf {int b_flags; int b_blkno; int b_lblkno; scalar_t__ b_iocmd; struct ucred* b_wcred; struct ucred* b_rcred; struct vnode* b_vp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,struct buf*,int ,int ) ;
 int FUNC_3 (struct vnode*,struct buf*,struct ucred*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct vop_strategy_args *VAR_7)
{
 struct buf *VAR_8;
 struct vnode *VAR_9;
 struct ucred *VAR_10;

 VAR_8 = VAR_7->a_bp;
 VAR_9 = VAR_7->a_vp;
 FUNC_0(VAR_8->b_vp == VAR_9, ("missing b_getvp"));
 FUNC_0(!(VAR_8->b_flags & VAR_2),
     ("nfs_strategy: buffer %p unexpectedly marked B_DONE", VAR_8));

 if (VAR_9->v_type == VAR_5 && VAR_8->b_blkno == VAR_8->b_lblkno)
  VAR_8->b_blkno = VAR_8->b_lblkno * (VAR_9->v_bufobj.bo_bsize /
      VAR_3);
 if (VAR_8->b_iocmd == VAR_0)
  VAR_10 = VAR_8->b_rcred;
 else
  VAR_10 = VAR_8->b_wcred;






 if ((VAR_8->b_flags & VAR_1) == 0 ||
     FUNC_2(FUNC_1(VAR_9->v_mount), VAR_8, VAR_4, VAR_6))
  (void) FUNC_3(VAR_9, VAR_8, VAR_10, VAR_6, 1);
 return (0);
}
