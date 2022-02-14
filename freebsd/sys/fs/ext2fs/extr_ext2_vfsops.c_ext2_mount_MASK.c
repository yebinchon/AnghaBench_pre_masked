
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_rdev; } ;
struct vfsoptlist {int dummy; } ;
struct thread {int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct mount {int mnt_flag; struct vfsoptlist* mnt_optnew; } ;
struct m_ext2fs {int e2fs_ronly; char* e2fs_fsmnt; TYPE_1__* e2fs; scalar_t__ e2fs_wasvalid; } ;
struct ext2mount {struct m_ext2fs* um_e2fs; struct vnode* um_devvp; int um_cp; } ;
typedef int accmode_t ;
struct TYPE_2__ {int e2fs_state; } ;


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
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_17 ;
 int FUNC_3 (struct nameidata*,int ,int,int ,char*,struct thread*) ;
 int VAR_18 ;
 int VAR_19 ;
 struct ext2mount* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*,int ) ;
 int FUNC_6 (struct vnode*,int,int ,struct thread*) ;
 int FUNC_7 (struct vnode*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct thread* VAR_23 ;
 scalar_t__ FUNC_8 (struct ext2mount*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (struct mount*,int,struct thread*) ;
 int FUNC_11 (struct vnode*,struct mount*) ;
 int VAR_24 ;
 int FUNC_12 (struct mount*,struct thread*) ;
 int FUNC_13 (struct ext2mount*,int ) ;
 int FUNC_14 (int ,int ,int,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct nameidata*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (struct thread*,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,char*,int) ;
 scalar_t__ FUNC_22 (struct vfsoptlist*,int ) ;
 scalar_t__ FUNC_23 (struct vfsoptlist*,char*,int*,int) ;
 int FUNC_24 (struct vfsoptlist*,char*,void**,int*) ;
 int FUNC_25 (struct mount*,char*) ;
 int FUNC_26 (struct vnode*,int*) ;
 int FUNC_27 (struct vnode*,int) ;
 int FUNC_28 (struct vnode*) ;
 int FUNC_29 (struct vnode*) ;

__attribute__((used)) static int
FUNC_30(struct mount *VAR_25)
{
 struct vfsoptlist *VAR_26;
 struct vnode *VAR_27;
 struct thread *VAR_28;
 struct ext2mount *VAR_29 = ((void*)0);
 struct m_ext2fs *VAR_30;
 struct nameidata VAR_31, *VAR_32 = &VAR_31;
 accmode_t VAR_33;
 char *VAR_34, *VAR_35;
 int VAR_36, VAR_37, VAR_38;

 VAR_28 = VAR_23;
 VAR_26 = VAR_25->mnt_optnew;

 if (FUNC_22(VAR_26, VAR_24))
  return (VAR_2);

 FUNC_24(VAR_26, "fspath", (void **)&VAR_34, ((void*)0));

 if (FUNC_20(VAR_34) >= VAR_11)
  return (VAR_3);

 VAR_35 = ((void*)0);
 VAR_36 = FUNC_24(VAR_26, "from", (void **)&VAR_35, &VAR_38);
 if (!VAR_36 && VAR_35[VAR_38 - 1] != '\0')
  return (VAR_2);





 if (VAR_25->mnt_flag & VAR_15) {
  VAR_29 = FUNC_4(VAR_25);
  VAR_30 = VAR_29->um_e2fs;
  VAR_36 = 0;
  if (VAR_30->e2fs_ronly == 0 &&
      FUNC_23(VAR_26, "ro", ((void*)0), 0)) {
   VAR_36 = FUNC_5(VAR_25, VAR_16);
   if (VAR_36)
    return (VAR_36);
   VAR_37 = VAR_22;
   if (VAR_25->mnt_flag & VAR_12)
    VAR_37 |= VAR_6;
   VAR_36 = FUNC_10(VAR_25, VAR_37, VAR_28);
   if (VAR_36 == 0 && VAR_30->e2fs_wasvalid &&
       FUNC_8(VAR_29, VAR_16) == 0) {
    VAR_30->e2fs->e2fs_state |= VAR_1;
    FUNC_13(VAR_29, VAR_16);
   }
   VAR_30->e2fs_ronly = 1;
   FUNC_23(VAR_26, "ro", &VAR_25->mnt_flag, VAR_13);
   FUNC_15();
   FUNC_14(VAR_29->um_cp, 0, -1, 0);
   FUNC_16();
  }
  if (!VAR_36 && (VAR_25->mnt_flag & VAR_14))
   VAR_36 = FUNC_12(VAR_25, VAR_28);
  if (VAR_36)
   return (VAR_36);
  VAR_27 = VAR_29->um_devvp;
  if (VAR_30->e2fs_ronly && !FUNC_23(VAR_26, "ro", ((void*)0), 0)) {
   if (FUNC_9(VAR_30->e2fs, VAR_27->v_rdev, 0))
    return (VAR_4);





   FUNC_27(VAR_27, VAR_7 | VAR_8);
   VAR_36 = FUNC_6(VAR_27, VAR_20 | VAR_21,
       VAR_28->td_ucred, VAR_28);
   if (VAR_36)
    VAR_36 = FUNC_19(VAR_28, VAR_18);
   if (VAR_36) {
    FUNC_7(VAR_27, 0);
    return (VAR_36);
   }
   FUNC_7(VAR_27, 0);
   FUNC_15();
   VAR_36 = FUNC_14(VAR_29->um_cp, 0, 1, 0);
   FUNC_16();
   if (VAR_36)
    return (VAR_36);

   if ((VAR_30->e2fs->e2fs_state & VAR_1) == 0 ||
       (VAR_30->e2fs->e2fs_state & VAR_0)) {
    if (VAR_25->mnt_flag & VAR_12) {
     FUNC_18(
"WARNING: %s was not properly dismounted\n", VAR_30->e2fs_fsmnt);
    } else {
     FUNC_18(
"WARNING: R/W mount of %s denied.  Filesystem is not clean - run fsck\n",
         VAR_30->e2fs_fsmnt);
     return (VAR_4);
    }
   }
   VAR_30->e2fs->e2fs_state &= ~VAR_1;
   (void)FUNC_8(VAR_29, VAR_16);
   VAR_30->e2fs_ronly = 0;
   FUNC_0(VAR_25);
   VAR_25->mnt_flag &= ~VAR_13;
   FUNC_1(VAR_25);
  }
  if (FUNC_23(VAR_26, "export", ((void*)0), 0)) {

   return (VAR_36);
  }
 }





 if (VAR_35 == ((void*)0))
  return (VAR_2);
 FUNC_3(VAR_32, VAR_10, VAR_5 | VAR_9, VAR_19, VAR_35, VAR_28);
 if ((VAR_36 = FUNC_17(VAR_32)) != 0)
  return (VAR_36);
 FUNC_2(VAR_32, VAR_17);
 VAR_27 = VAR_32->ni_vp;

 if (!FUNC_26(VAR_27, &VAR_36)) {
  FUNC_28(VAR_27);
  return (VAR_36);
 }







 VAR_33 = VAR_20;
 if ((VAR_25->mnt_flag & VAR_13) == 0)
  VAR_33 |= VAR_21;
 VAR_36 = FUNC_6(VAR_27, VAR_33, VAR_28->td_ucred, VAR_28);
 if (VAR_36)
  VAR_36 = FUNC_19(VAR_28, VAR_18);
 if (VAR_36) {
  FUNC_28(VAR_27);
  return (VAR_36);
 }

 if ((VAR_25->mnt_flag & VAR_15) == 0) {
  VAR_36 = FUNC_11(VAR_27, VAR_25);
 } else {
  if (VAR_27 != VAR_29->um_devvp) {
   FUNC_28(VAR_27);
   return (VAR_2);
  } else
   FUNC_28(VAR_27);
 }
 if (VAR_36) {
  FUNC_29(VAR_27);
  return (VAR_36);
 }
 VAR_29 = FUNC_4(VAR_25);
 VAR_30 = VAR_29->um_e2fs;





 FUNC_21(VAR_30->e2fs_fsmnt, VAR_34, VAR_11);
 VAR_30->e2fs_fsmnt[VAR_11 - 1] = '\0';
 FUNC_25(VAR_25, VAR_35);
 return (0);
}
