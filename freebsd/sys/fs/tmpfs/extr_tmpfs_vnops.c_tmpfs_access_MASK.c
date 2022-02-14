
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_access_args {int a_accmode; struct ucred* a_cred; struct vnode* a_vp; } ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct tmpfs_node {int tn_flags; int tn_gid; int tn_uid; int tn_mode; } ;
typedef int accmode_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;





 int FUNC_1 (struct vnode*) ;
 struct tmpfs_node* FUNC_2 (struct vnode*) ;


 int VAR_5 ;
 int FUNC_3 (int,int ,int ,int ,int,struct ucred*,int *) ;

int
FUNC_4(struct vop_access_args *VAR_6)
{
 struct vnode *VAR_7 = VAR_6->a_vp;
 accmode_t VAR_8 = VAR_6->a_accmode;
 struct ucred *VAR_9 = VAR_6->a_cred;

 int VAR_10;
 struct tmpfs_node *VAR_11;

 FUNC_0(FUNC_1(VAR_7));

 VAR_11 = FUNC_2(VAR_7);

 switch (VAR_7->v_type) {
 case 132:

 case 130:

 case 129:
  if (VAR_8 & VAR_5 && VAR_7->v_mount->mnt_flag & VAR_4) {
   VAR_10 = VAR_2;
   goto out;
  }
  break;

 case 134:

 case 133:

 case 128:

 case 131:
  break;

 default:
  VAR_10 = VAR_0;
  goto out;
 }

 if (VAR_8 & VAR_5 && VAR_11->tn_flags & VAR_3) {
  VAR_10 = VAR_1;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_7->v_type, VAR_11->tn_mode, VAR_11->tn_uid,
     VAR_11->tn_gid, VAR_8, VAR_9, ((void*)0));

out:
 FUNC_0(FUNC_1(VAR_7));

 return VAR_10;
}
