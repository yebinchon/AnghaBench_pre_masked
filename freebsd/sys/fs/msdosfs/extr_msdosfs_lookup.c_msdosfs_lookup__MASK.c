
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
typedef char u_char ;
struct winentry {int dummy; } ;
struct vnode {int v_vflag; } ;
struct msdosfsmount {int pm_flags; int pm_rootdirblk; scalar_t__ pm_bpcluster; int pm_devvp; } ;
struct mbnambuf {int dummy; } ;
struct direntry {scalar_t__* deName; int deAttributes; int deHighClust; int deStartCluster; } ;
struct denode {int de_Attributes; int de_fndoffset; int de_fndcnt; int de_refcnt; int de_StartCluster; int de_inode; struct msdosfsmount* de_pmp; } ;
struct deget_dotdot {int cluster; int blkoff; } ;
struct componentname {int cn_flags; int cn_nameiop; char* cn_nameptr; int cn_namelen; int cn_lkflags; int cn_thread; int cn_cred; } ;
struct buf {scalar_t__ b_data; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vnode* FUNC_0 (struct denode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (struct vnode*,int ,int ,int ) ;
 int FUNC_3 (struct vnode*) ;
 struct denode* FUNC_4 (struct vnode*) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_5 (char*,scalar_t__*,int) ;
 int FUNC_6 (int ,int ,int,int ,struct buf**) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_9 (struct msdosfsmount*,int,int,struct denode**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mbnambuf*) ;
 int VAR_24 ;
 int FUNC_12 (struct denode*,int,int *,int*,int*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char const*,char*,int,int ,struct msdosfsmount*) ;
 int FUNC_15 (struct vnode*,int ,struct deget_dotdot*,int ,struct vnode**) ;
 int FUNC_16 (struct vnode*) ;
 int FUNC_17 (struct mbnambuf*,struct winentry*,int,struct msdosfsmount*) ;
 int FUNC_18 (struct mbnambuf*,char const*,int,int,struct msdosfsmount*) ;
 int FUNC_19 (scalar_t__*) ;
 int FUNC_20 (char*,int) ;
 int FUNC_21 (char const*,int,struct msdosfsmount*) ;

__attribute__((used)) static int
FUNC_22(struct vnode *VAR_25, struct vnode **VAR_26,
    struct componentname *VAR_27, uint64_t *VAR_28)
{
 struct mbnambuf VAR_29;
 daddr_t VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33 = 0;
 int VAR_34;
 u_long VAR_35;
 int VAR_36;
 int VAR_37;
 int VAR_38;
 int VAR_39;
 u_long VAR_40;
 struct vnode *VAR_41;
 struct denode *VAR_42;
 struct denode *VAR_43;
 struct msdosfsmount *VAR_44;
 struct buf *VAR_45 = ((void*)0);
 struct direntry *VAR_46 = ((void*)0);
 struct deget_dotdot VAR_47;
 u_char VAR_48[12];
 int VAR_49 = VAR_27->cn_flags;
 int VAR_50 = VAR_27->cn_nameiop;
 int VAR_51;
 uint64_t VAR_52;

 int VAR_53 = 1;
 int VAR_54 = -1, VAR_55;
 int VAR_56 = 1;




 VAR_42 = FUNC_4(VAR_25);
 VAR_44 = VAR_42->de_pmp;





 restart:
 if (VAR_26 != ((void*)0))
  *VAR_26 = ((void*)0);





 if ((VAR_25->v_vflag & VAR_22) && VAR_27->cn_nameptr[0] == '.' &&
     (VAR_27->cn_namelen == 1 ||
  (VAR_27->cn_namelen == 2 && VAR_27->cn_nameptr[1] == '.'))) {
  VAR_39 = VAR_0;
  VAR_40 = VAR_15;



  VAR_35 = VAR_15;
  VAR_36 = VAR_16;
  goto foundroot;
 }

 switch (FUNC_14((const u_char *)VAR_27->cn_nameptr, VAR_48,
     VAR_27->cn_namelen, 0, VAR_44)) {
 case 0:
  return (VAR_7);
 case 1:
  break;
 case 2:
  VAR_53 = FUNC_21((const u_char *)VAR_27->cn_nameptr,
      VAR_27->cn_namelen, VAR_44) + 1;
  break;
 case 3:
  VAR_56 = 0;
  VAR_53 = FUNC_21((const u_char *)VAR_27->cn_nameptr,
      VAR_27->cn_namelen, VAR_44) + 1;
  break;
 }
 if (VAR_44->pm_flags & VAR_14) {
  VAR_53 = 1;
  VAR_56 = 1;
 }
 VAR_51 = FUNC_20(VAR_27->cn_nameptr, VAR_27->cn_namelen);







 VAR_32 = VAR_53;
 if ((VAR_50 == VAR_3 || VAR_50 == VAR_18) &&
     (VAR_49 & VAR_12))
  VAR_32 = 0;
 VAR_43 = ((void*)0);
 FUNC_11(&VAR_29);







 VAR_37 = 0;
 for (VAR_34 = 0;; VAR_34++) {
  VAR_31 = FUNC_12(VAR_42, VAR_34, &VAR_30, &VAR_35, &VAR_38);
  if (VAR_31) {
   if (VAR_31 == VAR_5)
    break;
   return (VAR_31);
  }
  VAR_31 = FUNC_6(VAR_44->pm_devvp, VAR_30, VAR_38, VAR_17, &VAR_45);
  if (VAR_31) {
   return (VAR_31);
  }
  for (VAR_36 = 0; VAR_36 < VAR_38;
       VAR_36 += sizeof(struct direntry),
       VAR_37 += sizeof(struct direntry)) {
   VAR_46 = (struct direntry *)(VAR_45->b_data + VAR_36);
   if (VAR_46->deName[0] == VAR_21 ||
       VAR_46->deName[0] == VAR_20) {



    VAR_54 = -1;
    FUNC_11(&VAR_29);

    if (VAR_32 < VAR_53) {
     VAR_32++;
     VAR_33 = VAR_37;
    }
    if (VAR_46->deName[0] == VAR_21) {
     FUNC_7(VAR_45);
     goto notfound;
    }
   } else {




    if (VAR_32 < VAR_53)
     VAR_32 = 0;




    if (VAR_46->deAttributes == VAR_2) {
     if (VAR_44->pm_flags & VAR_14)
      continue;

     VAR_54 = FUNC_17(&VAR_29,
         (struct winentry *)VAR_46, VAR_54,
         VAR_44);
     continue;
    }

    VAR_54 = FUNC_18(&VAR_29,
        (const u_char *)VAR_27->cn_nameptr, VAR_51,
        VAR_54, VAR_44);
    if (VAR_54 == -2) {
     VAR_54 = -1;
     continue;
    }





    if (VAR_46->deAttributes & VAR_1) {
     VAR_54 = -1;
     continue;
    }




    VAR_55 = (VAR_54 == FUNC_19(VAR_46->deName));
    if (!VAR_55
        && (!VAR_56 || FUNC_5(VAR_48, VAR_46->deName, 11))) {
     VAR_54 = -1;
     continue;
    }
    VAR_42->de_fndoffset = VAR_37;
    if (VAR_55 && VAR_50 == VAR_18) {





     VAR_42->de_fndcnt = VAR_53 - 1;
    } else {





     VAR_42->de_fndcnt = 0;
    }

    goto found;
   }
  }




  FUNC_7(VAR_45);
 }

notfound:
 if (!VAR_32) {
  VAR_32 = 1;
  VAR_33 = VAR_37;
 }
 if (VAR_53 > VAR_32)
  VAR_33 += sizeof(struct direntry) * (VAR_53 - VAR_32);
 if ((VAR_50 == VAR_3 || VAR_50 == VAR_18) &&
     (VAR_49 & VAR_12) && VAR_42->de_refcnt != 0) {




  VAR_31 = FUNC_2(VAR_25, VAR_23, VAR_27->cn_cred, VAR_27->cn_thread);
  if (VAR_31)
   return (VAR_31);




  VAR_42->de_fndoffset = VAR_33;
  VAR_42->de_fndcnt = VAR_53 - 1;
  VAR_27->cn_flags |= VAR_19;
  return (VAR_9);
 }
 return (VAR_10);

found:




 VAR_39 = VAR_46->deAttributes & VAR_0;
 VAR_40 = FUNC_10(VAR_46->deStartCluster);
 if (FUNC_1(VAR_44)) {
  VAR_40 |= FUNC_10(VAR_46->deHighClust) << 16;
  if (VAR_40 == VAR_44->pm_rootdirblk) {




   VAR_40 = VAR_15;
  }
 }

 if (VAR_39) {
  VAR_35 = VAR_40;
  if (VAR_35 == VAR_15)
   VAR_36 = VAR_16;
  else
   VAR_36 = 0;
 } else if (VAR_35 == VAR_15)
  VAR_36 = VAR_37;






 FUNC_7(VAR_45);
 VAR_45 = ((void*)0);

foundroot:





 if (FUNC_1(VAR_44) && VAR_40 == VAR_15)
  VAR_40 = VAR_44->pm_rootdirblk;

 if (VAR_28 != ((void*)0)) {
  *VAR_28 = (uint64_t)VAR_44->pm_bpcluster * VAR_40 + VAR_36;
  return (0);
 }





 if (VAR_50 == VAR_4 && (VAR_49 & VAR_12)) {



  if (VAR_36 == VAR_16)
   return (VAR_6);




  VAR_31 = FUNC_2(VAR_25, VAR_23, VAR_27->cn_cred, VAR_27->cn_thread);
  if (VAR_31)
   return (VAR_31);





  if (VAR_42->de_StartCluster == VAR_40 && VAR_39) {
   FUNC_3(VAR_25);
   *VAR_26 = VAR_25;
   return (0);
  }
  VAR_31 = FUNC_9(VAR_44, VAR_35, VAR_36, &VAR_43);
  if (VAR_31)
   return (VAR_31);
  *VAR_26 = FUNC_0(VAR_43);
  return (0);
 }







 if (VAR_50 == VAR_18 && (VAR_49 & VAR_12)) {
  if (VAR_36 == VAR_16)
   return (VAR_6);

  VAR_31 = FUNC_2(VAR_25, VAR_23, VAR_27->cn_cred, VAR_27->cn_thread);
  if (VAR_31)
   return (VAR_31);





  if (VAR_42->de_StartCluster == VAR_40 && VAR_39)
   return (VAR_8);

  if ((VAR_31 = FUNC_9(VAR_44, VAR_35, VAR_36, &VAR_43)) != 0)
   return (VAR_31);
  *VAR_26 = FUNC_0(VAR_43);
  VAR_27->cn_flags |= VAR_19;
  return (0);
 }
 VAR_41 = VAR_25;
 if (VAR_49 & VAR_11) {
  VAR_47.cluster = VAR_35;
  VAR_47.blkoff = VAR_36;
  VAR_31 = FUNC_15(VAR_25, VAR_24,
      &VAR_47, VAR_27->cn_lkflags, VAR_26);
  if (VAR_31 != 0) {
   *VAR_26 = ((void*)0);
   return (VAR_31);
  }




  VAR_31 = FUNC_22(VAR_41, ((void*)0), VAR_27, &VAR_52);
  if (VAR_31) {
   FUNC_16(*VAR_26);
   *VAR_26 = ((void*)0);
   return (VAR_31);
  }
  if (FUNC_4(*VAR_26)->de_inode != VAR_52) {
   FUNC_16(*VAR_26);
   goto restart;
  }
 } else if (VAR_42->de_StartCluster == VAR_40 && VAR_39) {
  FUNC_3(VAR_25);
  *VAR_26 = VAR_25;
 } else {
  if ((VAR_31 = FUNC_9(VAR_44, VAR_35, VAR_36, &VAR_43)) != 0)
   return (VAR_31);
  *VAR_26 = FUNC_0(VAR_43);
 }




 if (VAR_27->cn_flags & VAR_13)
  FUNC_8(VAR_25, *VAR_26, VAR_27);
 return (0);
}
