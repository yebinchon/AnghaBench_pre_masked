
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct msdosfsmount {int pm_flags; int pm_fmod; int pm_inusemap; struct vnode* pm_devvp; int pm_cp; } ;
struct mount {int mnt_flag; int mnt_optnew; } ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct msdosfsmount* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*,int ) ;
 int FUNC_6 (struct vnode*,int,int ,struct thread*) ;
 int FUNC_7 (struct vnode*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct thread* VAR_18 ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct msdosfsmount*,int) ;
 int FUNC_12 (struct msdosfsmount*,int,int) ;
 int FUNC_13 (struct vnode*,struct mount*) ;
 int VAR_19 ;
 int FUNC_14 (struct mount*,int) ;
 int FUNC_15 (struct nameidata*) ;
 int FUNC_16 (char*,struct mount*,struct msdosfsmount*,int ) ;
 int FUNC_17 (struct thread*,int ) ;
 int FUNC_18 (struct mount*,struct thread*) ;
 int FUNC_19 (struct mount*,int ,int,struct thread*) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ,char*,int *,int ) ;
 scalar_t__ FUNC_22 (int ,char*,void**,int *) ;
 int FUNC_23 (struct mount*,char*) ;
 int FUNC_24 (struct vnode*,int*) ;
 int FUNC_25 (struct vnode*,int) ;
 int FUNC_26 (struct vnode*) ;
 int FUNC_27 (struct vnode*) ;

__attribute__((used)) static int
FUNC_28(struct mount *VAR_20)
{
 struct vnode *VAR_21;
 struct thread *VAR_22;

 struct msdosfsmount *VAR_23 = ((void*)0);
 struct nameidata VAR_24;
 int VAR_25, VAR_26;
 accmode_t VAR_27;
 char *VAR_28;

 VAR_22 = VAR_18;
 if (FUNC_20(VAR_20->mnt_optnew, VAR_19))
  return (VAR_0);





 if (VAR_20->mnt_flag & VAR_9) {
  VAR_23 = FUNC_4(VAR_20);
  if (!(VAR_23->pm_flags & VAR_11) &&
      FUNC_21(VAR_20->mnt_optnew, "ro", ((void*)0), 0)) {
   VAR_25 = FUNC_5(VAR_20, VAR_10);
   if (VAR_25)
    return (VAR_25);
   VAR_26 = VAR_17;
   if (VAR_20->mnt_flag & VAR_7)
    VAR_26 |= VAR_2;
   VAR_25 = FUNC_19(VAR_20, 0, VAR_26, VAR_22);
   if (VAR_25)
    return (VAR_25);





   VAR_25 = FUNC_11(VAR_23, 0);
   if (VAR_25) {
    (void)FUNC_11(VAR_23, 1);
    return (VAR_25);
   }


   FUNC_9();
   VAR_25 = FUNC_8(VAR_23->pm_cp, 0, -1, 0);
   FUNC_10();
   if (VAR_25) {
    (void)FUNC_11(VAR_23, 1);
    return (VAR_25);
   }





   VAR_23->pm_fmod = 0;
   VAR_23->pm_flags |= VAR_11;
   FUNC_0(VAR_20);
   VAR_20->mnt_flag |= VAR_8;
   FUNC_1(VAR_20);
  } else if ((VAR_23->pm_flags & VAR_11) &&
      !FUNC_21(VAR_20->mnt_optnew, "ro", ((void*)0), 0)) {




   VAR_21 = VAR_23->pm_devvp;
   FUNC_25(VAR_21, VAR_3 | VAR_4);
   VAR_25 = FUNC_6(VAR_21, VAR_15 | VAR_16,
       VAR_22->td_ucred, VAR_22);
   if (VAR_25)
    VAR_25 = FUNC_17(VAR_22, VAR_13);
   if (VAR_25) {
    FUNC_7(VAR_21, 0);
    return (VAR_25);
   }
   FUNC_7(VAR_21, 0);
   FUNC_9();
   VAR_25 = FUNC_8(VAR_23->pm_cp, 0, 1, 0);
   FUNC_10();
   if (VAR_25)
    return (VAR_25);


   VAR_25 = FUNC_12(VAR_23, 1, 1);
   if (VAR_25) {




    FUNC_9();
    (void)FUNC_8(VAR_23->pm_cp, 0, -1, 0);
    FUNC_10();

    return (VAR_25);
   }

   VAR_23->pm_fmod = 1;
   VAR_23->pm_flags &= ~VAR_11;
   FUNC_0(VAR_20);
   VAR_20->mnt_flag &= ~VAR_8;
   FUNC_1(VAR_20);
  }
 }




 if (FUNC_22(VAR_20->mnt_optnew, "from", (void **)&VAR_28, ((void*)0)))
  return (VAR_0);
 FUNC_3(&VAR_24, VAR_6, VAR_1 | VAR_5, VAR_14, VAR_28, VAR_22);
 VAR_25 = FUNC_15(&VAR_24);
 if (VAR_25)
  return (VAR_25);
 VAR_21 = VAR_24.ni_vp;
 FUNC_2(&VAR_24, VAR_12);

 if (!FUNC_24(VAR_21, &VAR_25)) {
  FUNC_26(VAR_21);
  return (VAR_25);
 }




 VAR_27 = VAR_15;
 if ((VAR_20->mnt_flag & VAR_8) == 0)
  VAR_27 |= VAR_16;
 VAR_25 = FUNC_6(VAR_21, VAR_27, VAR_22->td_ucred, VAR_22);
 if (VAR_25)
  VAR_25 = FUNC_17(VAR_22, VAR_13);
 if (VAR_25) {
  FUNC_26(VAR_21);
  return (VAR_25);
 }
 if ((VAR_20->mnt_flag & VAR_9) == 0) {
  VAR_25 = FUNC_13(VAR_21, VAR_20);



 } else {
  FUNC_26(VAR_21);
  if (VAR_21 != VAR_23->pm_devvp)
   return (VAR_0);
 }
 if (VAR_25) {
  FUNC_27(VAR_21);
  return (VAR_25);
 }

 VAR_25 = FUNC_18(VAR_20, VAR_22);
 if (VAR_25) {
  if ((VAR_20->mnt_flag & VAR_9) == 0)
   FUNC_14(VAR_20, VAR_7);
  return VAR_25;
 }

 FUNC_23(VAR_20, VAR_28);



 return (0);
}
