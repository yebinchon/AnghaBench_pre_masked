
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_rgid; scalar_t__* cr_groups; } ;
struct thread {struct ucred* td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_10 ;
 int FUNC_2 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ucred* FUNC_3 (struct ucred*) ;
 int FUNC_4 (struct ucred*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct vnode*,int,struct ucred*,struct thread*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct thread *VAR_15, int VAR_16, const char *VAR_17,
    enum uio_seg VAR_18, int VAR_19, int VAR_20)
{
 struct ucred *VAR_21, *VAR_22;
 struct vnode *VAR_23;
 struct nameidata VAR_24;
 int VAR_25;

 if ((VAR_19 & ~(VAR_1 | VAR_0)) != 0)
  return (VAR_4);
 if (VAR_20 != VAR_6 && (VAR_20 & ~(VAR_11 | VAR_12 | VAR_13)) != 0)
  return (VAR_4);





 VAR_21 = VAR_15->td_ucred;
 if ((VAR_19 & VAR_1) == 0 &&
     ((VAR_21->cr_uid != VAR_21->cr_ruid ||
     VAR_21->cr_rgid != VAR_21->cr_groups[0]))) {
  VAR_22 = FUNC_3(VAR_21);
  VAR_22->cr_uid = VAR_21->cr_ruid;
  VAR_22->cr_groups[0] = VAR_21->cr_rgid;
  VAR_15->td_ucred = VAR_22;
 } else
  VAR_22 = VAR_21;
 FUNC_0(VAR_20);
 FUNC_2(&VAR_24, VAR_9, VAR_5 | VAR_8 | VAR_7 |
     VAR_2 | ((VAR_19 & VAR_0) != 0 ? VAR_3 : 0),
     VAR_18, VAR_17, VAR_16, &VAR_14, VAR_15);
 if ((VAR_25 = FUNC_5(&VAR_24)) != 0)
  goto out;
 VAR_23 = VAR_24.ni_vp;

 VAR_25 = FUNC_6(VAR_23, VAR_20, VAR_22, VAR_15);
 FUNC_1(&VAR_24, VAR_10);
 FUNC_7(VAR_23);
out:
 if (VAR_22 != VAR_21) {
  VAR_15->td_ucred = VAR_21;
  FUNC_4(VAR_22);
 }
 return (VAR_25);
}
