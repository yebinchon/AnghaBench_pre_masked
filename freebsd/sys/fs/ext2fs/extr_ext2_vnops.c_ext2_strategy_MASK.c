
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_strategy_args {struct vnode* a_vp; struct buf* a_bp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct bufobj {int dummy; } ;
struct buf {scalar_t__ b_blkno; scalar_t__ b_lblkno; int b_error; int b_iooffset; int b_ioflags; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_4__ {struct bufobj* um_bo; } ;
struct TYPE_3__ {int i_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufobj*,struct buf*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct vnode*,scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_6 (struct vnode*,scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct buf*) ;

__attribute__((used)) static int
FUNC_9(struct vop_strategy_args *VAR_4)
{
 struct buf *VAR_5 = VAR_4->a_bp;
 struct vnode *VAR_6 = VAR_4->a_vp;
 struct bufobj *VAR_7;
 daddr_t VAR_8;
 int VAR_9;

 if (VAR_6->v_type == VAR_2 || VAR_6->v_type == VAR_3)
  FUNC_7("ext2_strategy: spec");
 if (VAR_5->b_blkno == VAR_5->b_lblkno) {

  if (FUNC_2(VAR_4->a_vp)->i_flag & VAR_1)
   VAR_9 = FUNC_6(VAR_6, VAR_5->b_lblkno, &VAR_8, ((void*)0), ((void*)0));
  else
   VAR_9 = FUNC_5(VAR_6, VAR_5->b_lblkno, &VAR_8, ((void*)0), ((void*)0));

  VAR_5->b_blkno = VAR_8;
  if (VAR_9) {
   VAR_5->b_error = VAR_9;
   VAR_5->b_ioflags |= VAR_0;
   FUNC_3(VAR_5);
   return (0);
  }
  if ((long)VAR_5->b_blkno == -1)
   FUNC_8(VAR_5);
 }
 if ((long)VAR_5->b_blkno == -1) {
  FUNC_3(VAR_5);
  return (0);
 }
 VAR_5->b_iooffset = FUNC_4(VAR_5->b_blkno);
 VAR_7 = FUNC_1(VAR_6->v_mount)->um_bo;
 FUNC_0(VAR_7, VAR_5);
 return (0);
}
