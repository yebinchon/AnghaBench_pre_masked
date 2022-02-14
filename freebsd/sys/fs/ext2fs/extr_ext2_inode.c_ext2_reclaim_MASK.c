
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_data; } ;
struct inode {int i_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vop_reclaim_args *VAR_3)
{
 struct inode *VAR_4;
 struct vnode *VAR_5 = VAR_3->a_vp;

 VAR_4 = FUNC_0(VAR_5);
 if (VAR_4->i_flag & VAR_0) {
  VAR_4->i_flag |= VAR_1;
  FUNC_1(VAR_5, 0);
 }
 FUNC_3(VAR_5);
 FUNC_2(VAR_5->v_data, VAR_2);
 VAR_5->v_data = 0;
 return (0);
}
