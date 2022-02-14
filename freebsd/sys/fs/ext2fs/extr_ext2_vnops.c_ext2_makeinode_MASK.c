
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {TYPE_1__* v_mount; int v_type; } ;
struct inode {int i_mode; scalar_t__ i_uid; int i_flag; int i_nlink; int i_flags; int i_gid; } ;
struct componentname {int cn_flags; int cn_thread; TYPE_2__* cn_cred; } ;
struct TYPE_7__ {scalar_t__ cr_uid; } ;
struct TYPE_6__ {int mnt_flag; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct inode*,struct vnode*,struct componentname*) ;
 int FUNC_4 (struct vnode*,struct vnode*,int,TYPE_2__*,int ) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (struct vnode*,int,TYPE_2__*,struct vnode**) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct vnode*) ;

__attribute__((used)) static int
FUNC_11(int VAR_13, struct vnode *VAR_14, struct vnode **VAR_15,
    struct componentname *VAR_16)
{
 struct inode *VAR_17, *VAR_18;
 struct vnode *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_2(VAR_14);




 *VAR_15 = ((void*)0);
 if ((VAR_13 & VAR_1) == 0)
  VAR_13 |= VAR_2;

 VAR_20 = FUNC_6(VAR_14, VAR_13, VAR_16->cn_cred, &VAR_19);
 if (VAR_20) {
  return (VAR_20);
 }
 VAR_17 = FUNC_2(VAR_19);
 VAR_17->i_gid = VAR_18->i_gid;
 VAR_17->i_uid = VAR_16->cn_cred->cr_uid;

 VAR_17->i_flag |= VAR_3 | VAR_4 | VAR_5;
 VAR_17->i_mode = VAR_13;
 VAR_19->v_type = FUNC_1(VAR_13);
 VAR_17->i_nlink = 1;
 if ((VAR_17->i_mode & VAR_6) && !FUNC_7(VAR_17->i_gid, VAR_16->cn_cred)) {
  if (FUNC_9(VAR_16->cn_cred, VAR_11))
   VAR_17->i_mode &= ~VAR_6;
 }

 if (VAR_16->cn_flags & VAR_8)
  VAR_17->i_flags |= VAR_12;




 VAR_20 = FUNC_5(VAR_19, !FUNC_0(VAR_19));
 if (VAR_20)
  goto bad;
 VAR_20 = FUNC_3(VAR_17, VAR_14, VAR_16);
 if (VAR_20)
  goto bad;

 *VAR_15 = VAR_19;
 return (0);

bad:




 VAR_17->i_nlink = 0;
 VAR_17->i_flag |= VAR_4;
 FUNC_10(VAR_19);
 return (VAR_20);
}
