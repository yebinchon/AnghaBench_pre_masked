
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_remove_args {int a_cnp; struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct inode {int i_flags; int i_flag; int i_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_remove_args *VAR_5)
{
 struct inode *VAR_6;
 struct vnode *VAR_7 = VAR_5->a_vp;
 struct vnode *VAR_8 = VAR_5->a_dvp;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_7);
 if ((VAR_6->i_flags & (VAR_4 | VAR_2 | VAR_0)) ||
     (FUNC_0(VAR_8)->i_flags & VAR_0)) {
  VAR_9 = VAR_1;
  goto out;
 }
 VAR_9 = FUNC_1(VAR_8, VAR_5->a_cnp);
 if (VAR_9 == 0) {
  VAR_6->i_nlink--;
  VAR_6->i_flag |= VAR_3;
 }
out:
 return (VAR_9);
}
