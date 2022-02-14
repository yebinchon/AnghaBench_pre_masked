
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_link_args {struct componentname* a_cnp; struct vnode* a_tdvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct inode {int i_flags; int i_flag; scalar_t__ i_nlink; } ;
struct componentname {int cn_flags; } ;
typedef scalar_t__ nlink_t ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct inode*,struct vnode*,struct componentname*) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct vop_link_args *VAR_7)
{
 struct vnode *VAR_8 = VAR_7->a_vp;
 struct vnode *VAR_9 = VAR_7->a_tdvp;
 struct componentname *VAR_10 = VAR_7->a_cnp;
 struct inode *VAR_11;
 int VAR_12;





 VAR_11 = FUNC_1(VAR_8);
 if ((nlink_t)VAR_11->i_nlink >= VAR_3) {
  VAR_12 = VAR_1;
  goto out;
 }
 if (VAR_11->i_flags & (VAR_5 | VAR_0)) {
  VAR_12 = VAR_2;
  goto out;
 }
 VAR_11->i_nlink++;
 VAR_11->i_flag |= VAR_6;
 VAR_12 = FUNC_3(VAR_8, !FUNC_0(VAR_8));
 if (!VAR_12)
  VAR_12 = FUNC_2(VAR_11, VAR_9, VAR_10);
 if (VAR_12) {
  VAR_11->i_nlink--;
  VAR_11->i_flag |= VAR_6;
 }
out:
 return (VAR_12);
}
