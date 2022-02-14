
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vnode {TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct tmpfs_node {int tn_flags; int tn_status; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int mnt_flag; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct vnode*,int ,struct ucred*,struct thread*) ;
 struct tmpfs_node* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct ucred*,int ) ;
 int FUNC_4 (struct ucred*,int ) ;

int
FUNC_5(struct vnode *VAR_24, u_long VAR_25, struct ucred *VAR_26,
    struct thread *VAR_27)
{
 int VAR_28;
 struct tmpfs_node *VAR_29;

 FUNC_0(VAR_24, "chflags");

 VAR_29 = FUNC_2(VAR_24);

 if ((VAR_25 & ~(VAR_5 | VAR_6 | VAR_7 | VAR_8 |
     VAR_11 | VAR_12 | VAR_13 | VAR_14 | VAR_15 |
     VAR_16 | VAR_17 | VAR_18 | VAR_19 | VAR_20 |
     VAR_21 | VAR_22)) != 0)
  return (VAR_0);


 if (VAR_24->v_mount->mnt_flag & VAR_3)
  return VAR_2;





 if ((VAR_28 = FUNC_1(VAR_24, VAR_23, VAR_26, VAR_27)))
  return (VAR_28);




 if (!FUNC_3(VAR_26, VAR_4)) {
  if (VAR_29->tn_flags &
      (VAR_8 | VAR_7 | VAR_5)) {
   VAR_28 = FUNC_4(VAR_26, 0);
   if (VAR_28)
    return (VAR_28);
  }
 } else {
  if (VAR_29->tn_flags &
      (VAR_8 | VAR_7 | VAR_5) ||
      ((VAR_25 ^ VAR_29->tn_flags) & VAR_9))
   return (VAR_1);
 }
 VAR_29->tn_flags = VAR_25;
 VAR_29->tn_status |= VAR_10;

 FUNC_0(VAR_24, "chflags2");

 return (0);
}
