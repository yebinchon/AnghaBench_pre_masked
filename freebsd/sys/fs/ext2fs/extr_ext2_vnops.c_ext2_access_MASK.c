
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_access_args {int a_accmode; int a_cred; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct inode {int i_flags; int i_gid; int i_uid; int i_mode; } ;
typedef int accmode_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 struct inode* FUNC_0 (struct vnode*) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int ,int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_access_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_vp;
 struct inode *VAR_11 = FUNC_0(VAR_10);
 accmode_t VAR_12 = VAR_9->a_accmode;
 int VAR_13;

 if (VAR_10->v_type == VAR_6 || VAR_10->v_type == VAR_7)
  return (VAR_0);






 if (VAR_12 & VAR_8) {
  switch (VAR_10->v_type) {
  case 130:
  case 129:
  case 128:
   if (VAR_10->v_mount->mnt_flag & VAR_3)
    return (VAR_2);
   break;
  default:
   break;
  }
 }


 if ((VAR_12 & VAR_8) && (VAR_11->i_flags & (VAR_4 | VAR_5)))
  return (VAR_1);

 VAR_13 = FUNC_1(VAR_10->v_type, VAR_11->i_mode, VAR_11->i_uid, VAR_11->i_gid,
     VAR_9->a_accmode, VAR_9->a_cred, ((void*)0));
 return (VAR_13);
}
