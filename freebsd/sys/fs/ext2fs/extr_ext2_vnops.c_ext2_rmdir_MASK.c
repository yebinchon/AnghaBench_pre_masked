
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_rmdir_args {struct componentname* a_cnp; struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct inode {int i_flags; scalar_t__ i_nlink; int i_flag; int i_number; } ;
struct componentname {int cn_thread; int cn_cred; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vnode* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct vnode*,int ) ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ,int ) ;
 int FUNC_6 (struct vnode*,struct componentname*) ;
 int FUNC_7 (struct vnode*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_9(struct vop_rmdir_args *VAR_10)
{
 struct vnode *VAR_11 = VAR_10->a_vp;
 struct vnode *VAR_12 = VAR_10->a_dvp;
 struct componentname *VAR_13 = VAR_10->a_cnp;
 struct inode *VAR_14, *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_2(VAR_11);
 VAR_15 = FUNC_2(VAR_12);
 if (!FUNC_5(VAR_14, VAR_15->i_number, VAR_13->cn_cred)) {
  VAR_16 = VAR_1;
  goto out;
 }
 if ((VAR_15->i_flags & VAR_0)
     || (VAR_14->i_flags & (VAR_9 | VAR_3 | VAR_0))) {
  VAR_16 = VAR_2;
  goto out;
 }





 VAR_16 = FUNC_6(VAR_12, VAR_13);
 if (VAR_16)
  goto out;
 FUNC_4(VAR_15);
 VAR_15->i_flag |= VAR_4;
 FUNC_3(VAR_12);
 FUNC_1(VAR_12, 0);




 VAR_14->i_nlink = 0;
 VAR_16 = FUNC_7(VAR_11, (off_t)0, VAR_5, VAR_13->cn_cred,
     VAR_13->cn_thread);
 FUNC_3(FUNC_0(VAR_14));
 if (FUNC_8(VAR_12, VAR_6 | VAR_7) != 0) {
  FUNC_1(VAR_11, 0);
  FUNC_8(VAR_12, VAR_6 | VAR_8);
  FUNC_8(VAR_11, VAR_6 | VAR_8);
 }
out:
 return (VAR_16);
}
