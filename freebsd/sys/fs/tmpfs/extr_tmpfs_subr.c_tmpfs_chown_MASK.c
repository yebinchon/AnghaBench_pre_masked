
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vnode {TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct tmpfs_node {scalar_t__ tn_uid; scalar_t__ tn_gid; int tn_flags; int tn_mode; int tn_status; } ;
struct thread {int dummy; } ;
typedef scalar_t__ gid_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct vnode*,int ,struct ucred*,struct thread*) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 int FUNC_4 (scalar_t__,struct ucred*) ;
 int FUNC_5 (struct ucred*,int ) ;

int
FUNC_6(struct vnode *VAR_12, uid_t VAR_13, gid_t VAR_14, struct ucred *VAR_15,
    struct thread *VAR_16)
{
 int VAR_17;
 struct tmpfs_node *VAR_18;
 uid_t VAR_19;
 gid_t VAR_20;

 FUNC_0(VAR_12, "chown");

 VAR_18 = FUNC_3(VAR_12);


 FUNC_1(VAR_13 != VAR_11 || VAR_14 != VAR_11);
 if (VAR_13 == VAR_11)
  VAR_13 = VAR_18->tn_uid;
 if (VAR_14 == VAR_11)
  VAR_14 = VAR_18->tn_gid;
 FUNC_1(VAR_13 != VAR_11 && VAR_14 != VAR_11);


 if (VAR_12->v_mount->mnt_flag & VAR_4)
  return VAR_2;


 if (VAR_18->tn_flags & (VAR_3 | VAR_0))
  return VAR_1;





 if ((VAR_17 = FUNC_2(VAR_12, VAR_10, VAR_15, VAR_16)))
  return (VAR_17);






 if ((VAR_13 != VAR_18->tn_uid ||
     (VAR_14 != VAR_18->tn_gid && !FUNC_4(VAR_14, VAR_15))) &&
     (VAR_17 = FUNC_5(VAR_15, VAR_5)))
  return (VAR_17);

 VAR_20 = VAR_18->tn_gid;
 VAR_19 = VAR_18->tn_uid;

 VAR_18->tn_uid = VAR_13;
 VAR_18->tn_gid = VAR_14;

 VAR_18->tn_status |= VAR_9;

 if ((VAR_18->tn_mode & (VAR_8 | VAR_7)) && (VAR_19 != VAR_13 || VAR_20 != VAR_14)) {
  if (FUNC_5(VAR_15, VAR_6))
   VAR_18->tn_mode &= ~(VAR_8 | VAR_7);
 }

 FUNC_0(VAR_12, "chown2");

 return (0);
}
