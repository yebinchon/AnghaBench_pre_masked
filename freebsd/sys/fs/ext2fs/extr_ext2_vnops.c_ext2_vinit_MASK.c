
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vector {int dummy; } ;
struct vnode {scalar_t__ v_type; int v_vflag; struct vop_vector* v_op; } ;
struct mount {int dummy; } ;
struct inode {scalar_t__ i_mode; scalar_t__ i_number; int i_modrev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int VAR_4 ;
 int FUNC_2 () ;

int
FUNC_3(struct mount *VAR_5, struct vop_vector *VAR_6, struct vnode **VAR_7)
{
 struct inode *VAR_8;
 struct vnode *VAR_9;

 VAR_9 = *VAR_7;
 VAR_8 = FUNC_1(VAR_9);
 VAR_9->v_type = FUNC_0(VAR_8->i_mode);



 if (VAR_8->i_mode != 0 && VAR_9->v_type == VAR_3)
  return (VAR_0);
 if (VAR_9->v_type == VAR_2)
  VAR_9->v_op = VAR_6;

 if (VAR_8->i_number == VAR_1)
  VAR_9->v_vflag |= VAR_4;
 VAR_8->i_modrev = FUNC_2();
 *VAR_7 = VAR_9;
 return (0);
}
