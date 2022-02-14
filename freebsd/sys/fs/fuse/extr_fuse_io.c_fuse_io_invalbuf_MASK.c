
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bo_object; } ;
struct vnode {int v_iflag; TYPE_2__ v_bufobj; TYPE_1__* v_mount; } ;
struct thread {int td_siglist; struct proc* td_proc; } ;
struct proc {int p_siglist; } ;
struct fuse_vnode_data {int flag; } ;
struct TYPE_3__ {int mnt_kern_flag; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fuse_vnode_data* FUNC_6 (struct vnode*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int*,scalar_t__,char*,int) ;
 int FUNC_8 (struct vnode*,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int*) ;

int
FUNC_11(struct vnode *VAR_12, struct thread *VAR_13)
{
 struct fuse_vnode_data *VAR_14 = FUNC_6(VAR_12);
 int VAR_15 = 0;

 if (VAR_12->v_iflag & VAR_9)
  return 0;

 FUNC_0(VAR_12, "fuse_io_invalbuf");

 while (VAR_14->flag & VAR_3) {
  struct proc *VAR_16 = VAR_13->td_proc;

  if (VAR_12->v_mount->mnt_kern_flag & VAR_5)
   return VAR_1;
  VAR_14->flag |= VAR_4;
  FUNC_7(&VAR_14->flag, VAR_8 + 2, "fusevinv", 2 * VAR_11);
  VAR_15 = 0;
  if (VAR_16 != ((void*)0)) {
   FUNC_1(VAR_16);
   if (FUNC_3(VAR_16->p_siglist) ||
       FUNC_3(VAR_13->td_siglist))
    VAR_15 = VAR_0;
   FUNC_2(VAR_16);
  }
  if (VAR_15 == VAR_0)
   return VAR_0;
 }
 VAR_14->flag |= VAR_3;

 if (VAR_12->v_bufobj.bo_object != ((void*)0)) {
  FUNC_4(VAR_12->v_bufobj.bo_object);
  FUNC_9(VAR_12->v_bufobj.bo_object, 0, 0, VAR_6);
  FUNC_5(VAR_12->v_bufobj.bo_object);
 }
 VAR_15 = FUNC_8(VAR_12, VAR_10, VAR_7, 0);
 while (VAR_15) {
  if (VAR_15 == VAR_2 || VAR_15 == VAR_0) {
   VAR_14->flag &= ~VAR_3;
   if (VAR_14->flag & VAR_4) {
    VAR_14->flag &= ~VAR_4;
    FUNC_10(&VAR_14->flag);
   }
   return VAR_0;
  }
  VAR_15 = FUNC_8(VAR_12, VAR_10, VAR_7, 0);
 }
 VAR_14->flag &= ~VAR_3;
 if (VAR_14->flag & VAR_4) {
  VAR_14->flag &= ~VAR_4;
  FUNC_10(&VAR_14->flag);
 }
 return (VAR_15);
}
