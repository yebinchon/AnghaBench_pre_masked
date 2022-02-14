
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct tmpfs_node {int tn_flags; int tn_mode; int tn_status; int tn_gid; } ;
struct thread {int dummy; } ;
typedef int mode_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,char*) ;
 int VAR_2 ;
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
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct vnode*,int ,struct ucred*,struct thread*) ;
 struct tmpfs_node* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int ,struct ucred*) ;
 int FUNC_4 (struct ucred*,int ) ;

int
FUNC_5(struct vnode *VAR_14, mode_t VAR_15, struct ucred *VAR_16, struct thread *VAR_17)
{
 int VAR_18;
 struct tmpfs_node *VAR_19;

 FUNC_0(VAR_14, "chmod");

 VAR_19 = FUNC_2(VAR_14);


 if (VAR_14->v_mount->mnt_flag & VAR_6)
  return VAR_4;


 if (VAR_19->tn_flags & (VAR_5 | VAR_1))
  return VAR_3;





 if ((VAR_18 = FUNC_1(VAR_14, VAR_12, VAR_16, VAR_17)))
  return (VAR_18);






 if (VAR_14->v_type != VAR_13 && (VAR_15 & VAR_10)) {
  if (FUNC_4(VAR_16, VAR_8))
   return (VAR_2);
 }
 if (!FUNC_3(VAR_19->tn_gid, VAR_16) && (VAR_15 & VAR_9)) {
  VAR_18 = FUNC_4(VAR_16, VAR_7);
  if (VAR_18)
   return (VAR_18);
 }


 VAR_19->tn_mode &= ~VAR_0;
 VAR_19->tn_mode |= VAR_15 & VAR_0;

 VAR_19->tn_status |= VAR_11;

 FUNC_0(VAR_14, "chmod2");

 return (0);
}
