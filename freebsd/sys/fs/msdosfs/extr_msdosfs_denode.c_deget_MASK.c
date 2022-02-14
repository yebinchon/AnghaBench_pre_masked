
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_long ;
struct vnode {int v_type; int v_vflag; struct denode* v_data; int v_vnlock; } ;
struct msdosfsmount {scalar_t__ pm_rootdirblk; int pm_rootdirsize; scalar_t__ pm_bpcluster; struct mount* pm_mountp; } ;
struct mount {int dummy; } ;
struct direntry {int dummy; } ;
struct denode {scalar_t__ de_dirclust; scalar_t__ de_diroffset; int de_refcnt; int de_Attributes; scalar_t__ de_StartCluster; int de_FileSize; int de_CTime; int de_CDate; int de_ADate; int de_MTime; int de_MDate; int de_modrev; int * de_Name; scalar_t__ de_CHun; scalar_t__ de_LowerCase; struct msdosfsmount* de_pmp; scalar_t__ de_inode; scalar_t__ de_flag; struct vnode* de_vnode; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct denode*,struct direntry*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 int FUNC_2 (int,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct denode* FUNC_3 (struct vnode*) ;
 int VAR_15 ;
 int FUNC_4 (struct buf*) ;
 int VAR_16 ;
 int FUNC_5 (struct msdosfsmount*,scalar_t__) ;
 int VAR_17 ;
 int FUNC_6 (struct denode*,int ) ;
 int FUNC_7 (struct denode*,int ) ;
 int FUNC_8 (char*,struct mount*,int *,struct vnode**) ;
 int FUNC_9 () ;
 int FUNC_10 (struct vnode*,struct mount*) ;
 int FUNC_11 (int ,int ,int *) ;
 struct denode* FUNC_12 (int,int ,int) ;
 int VAR_18 ;
 int FUNC_13 (struct denode*,int,int ,scalar_t__*,int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct msdosfsmount*,scalar_t__,scalar_t__,struct buf**,struct direntry**) ;
 int FUNC_16 (struct mount*,scalar_t__,int ,int ,struct vnode**,int ,scalar_t__*) ;
 int FUNC_17 (struct vnode*,scalar_t__,int ,int ,struct vnode**,int ,scalar_t__*) ;
 int FUNC_18 (struct vnode*) ;

int
FUNC_19(struct msdosfsmount *VAR_19, u_long VAR_20, u_long VAR_21,
    struct denode **VAR_22)
{
 int VAR_23;
 uint64_t VAR_24;
 struct mount *VAR_25 = VAR_19->pm_mountp;
 struct direntry *VAR_26;
 struct denode *VAR_27;
 struct vnode *VAR_28, *VAR_29;
 struct buf *VAR_30;
 if (FUNC_1(VAR_19) && VAR_20 == VAR_7)
  VAR_20 = VAR_19->pm_rootdirblk;
 VAR_24 = (uint64_t)VAR_19->pm_bpcluster * VAR_20 + VAR_21;

 VAR_23 = FUNC_16(VAR_25, VAR_24, VAR_6, VAR_16, &VAR_28,
     VAR_17, &VAR_24);
 if (VAR_23)
  return (VAR_23);
 if (VAR_28 != ((void*)0)) {
  *VAR_22 = FUNC_3(VAR_28);
  FUNC_2((*VAR_22)->de_dirclust == VAR_20, ("wrong dirclust"));
  FUNC_2((*VAR_22)->de_diroffset == VAR_21, ("wrong diroffset"));
  return (0);
 }
 VAR_27 = FUNC_12(sizeof(struct denode), VAR_9, VAR_10 | VAR_11);






 VAR_23 = FUNC_8("msdosfs", VAR_25, &VAR_18, &VAR_28);
 if (VAR_23) {
  *VAR_22 = ((void*)0);
  FUNC_7(VAR_27, VAR_9);
  return VAR_23;
 }
 VAR_28->v_data = VAR_27;
 VAR_27->de_vnode = VAR_28;
 VAR_27->de_flag = 0;
 VAR_27->de_dirclust = VAR_20;
 VAR_27->de_diroffset = VAR_21;
 VAR_27->de_inode = VAR_24;
 FUNC_11(VAR_28->v_vnlock, VAR_6, ((void*)0));
 FUNC_6(VAR_27, 0);
 VAR_23 = FUNC_10(VAR_28, VAR_25);
 if (VAR_23 != 0) {
  FUNC_7(VAR_27, VAR_9);
  *VAR_22 = ((void*)0);
  return (VAR_23);
 }
 VAR_23 = FUNC_17(VAR_28, VAR_24, VAR_6, VAR_16, &VAR_29,
     VAR_17, &VAR_24);
 if (VAR_23) {
  *VAR_22 = ((void*)0);
  return (VAR_23);
 }
 if (VAR_29 != ((void*)0)) {
  *VAR_22 = VAR_29->v_data;
  return (0);
 }

 VAR_27->de_pmp = VAR_19;
 VAR_27->de_refcnt = 1;



 if ((VAR_20 == VAR_7
      || (FUNC_1(VAR_19) && VAR_20 == VAR_19->pm_rootdirblk))
     && VAR_21 == VAR_8) {







  VAR_28->v_vflag |= VAR_15;

  VAR_27->de_Attributes = VAR_0;
  VAR_27->de_LowerCase = 0;
  if (FUNC_1(VAR_19))
   VAR_27->de_StartCluster = VAR_19->pm_rootdirblk;

  else {
   VAR_27->de_StartCluster = VAR_7;
   VAR_27->de_FileSize = VAR_19->pm_rootdirsize * VAR_4;
  }





  VAR_27->de_CHun = 0;
  VAR_27->de_CTime = 0x0000;
  VAR_27->de_CDate = (0 << VAR_3) | (1 << VAR_2)
      | (1 << VAR_1);

  VAR_27->de_ADate = VAR_27->de_CDate;
  VAR_27->de_MTime = VAR_27->de_CTime;
  VAR_27->de_MDate = VAR_27->de_CDate;

 } else {
  VAR_23 = FUNC_15(VAR_19, VAR_20, VAR_21, &VAR_30, &VAR_26);
  if (VAR_23) {





   VAR_27->de_Name[0] = VAR_12;

   FUNC_18(VAR_28);
   *VAR_22 = ((void*)0);
   return (VAR_23);
  }
  (void)FUNC_0(VAR_27, VAR_26);
  FUNC_4(VAR_30);
 }





 if (VAR_27->de_Attributes & VAR_0) {






  u_long VAR_31;






  if (VAR_21 == 0 && VAR_27->de_StartCluster != VAR_20) {




   VAR_27->de_StartCluster = VAR_20;
  }

  VAR_28->v_type = VAR_13;
  if (VAR_27->de_StartCluster != VAR_7) {
   VAR_23 = FUNC_13(VAR_27, 0xffff, 0, &VAR_31, 0);
   if (VAR_23 == VAR_5) {
    VAR_27->de_FileSize = FUNC_5(VAR_19, VAR_31);
    VAR_23 = 0;
   } else {



   }
  }
 } else
  VAR_28->v_type = VAR_14;
 VAR_27->de_modrev = FUNC_9();
 *VAR_22 = VAR_27;
 return (0);
}
