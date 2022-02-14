
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_inactive_args {struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct inode {scalar_t__ i_mode; scalar_t__ i_nlink; int i_flag; int i_number; scalar_t__ i_rdev; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,struct thread*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*,int ,int) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(struct vop_inactive_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 struct inode *VAR_8 = FUNC_0(VAR_7);
 struct thread *VAR_9 = VAR_6->a_td;
 int VAR_10, VAR_11 = 0;




 if (VAR_8->i_mode == 0)
  goto out;
 if (VAR_8->i_nlink <= 0) {
  FUNC_1(VAR_8);
  VAR_11 = FUNC_2(VAR_7, (off_t)0, 0, VAR_5, VAR_9);
  if (!(VAR_8->i_flag & VAR_2))
   VAR_8->i_rdev = 0;
  VAR_10 = VAR_8->i_mode;
  VAR_8->i_mode = 0;
  VAR_8->i_flag |= VAR_1 | VAR_4;
  FUNC_4(VAR_7, VAR_8->i_number, VAR_10);
 }
 if (VAR_8->i_flag & (VAR_0 | VAR_1 | VAR_3 | VAR_4))
  FUNC_3(VAR_7, 0);
out:




 if (VAR_8->i_mode == 0)
  FUNC_5(VAR_7);
 return (VAR_11);
}
