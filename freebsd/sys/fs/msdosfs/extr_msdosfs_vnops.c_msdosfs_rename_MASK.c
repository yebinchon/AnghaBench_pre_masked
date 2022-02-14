
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_char ;
struct vop_rename_args {struct vnode* a_fvp; struct componentname* a_fcnp; struct componentname* a_tcnp; struct vnode* a_tvp; struct vnode* a_fdvp; struct vnode* a_tdvp; } ;
struct vnode {scalar_t__ v_mount; } ;
struct msdosfsmount {scalar_t__ pm_crbomask; scalar_t__ pm_rootdirblk; int pm_bpcluster; int pm_devvp; } ;
struct direntry {int deHighClust; int deStartCluster; } ;
struct denode {int de_Attributes; int de_flag; scalar_t__ de_fndoffset; scalar_t__ de_StartCluster; scalar_t__ de_dirclust; scalar_t__ de_diroffset; int de_refcnt; int * de_Name; int de_fndcnt; } ;
struct componentname {int cn_flags; int cn_namelen; char* cn_nameptr; int cn_thread; int cn_cred; } ;
struct buf {scalar_t__ b_data; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct msdosfsmount* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vnode*,int ,int ,int ) ;
 int FUNC_4 (struct vnode*,int ) ;
 struct denode* FUNC_5 (struct vnode*) ;
 int VAR_16 ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (int ,int ,int ,int ,struct buf**) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_11 (struct denode*,struct denode*,struct denode**,struct componentname*) ;
 int FUNC_12 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_13 (struct denode*,struct denode*) ;
 int FUNC_14 (struct denode*) ;
 int FUNC_15 (int *,int *,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct denode*,int ,int ,scalar_t__*,int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (struct denode*) ;
 scalar_t__ FUNC_20 (struct vnode*,struct vnode**,struct componentname*) ;
 int FUNC_21 (struct denode*,struct denode*) ;
 int FUNC_22 (struct denode*,struct componentname*,int *) ;
 int FUNC_23 (struct vnode*,int ) ;
 int FUNC_24 (struct vnode*) ;
 int FUNC_25 (struct vnode*) ;

__attribute__((used)) static int
FUNC_26(struct vop_rename_args *VAR_17)
{
 struct vnode *VAR_18 = VAR_17->a_tdvp;
 struct vnode *VAR_19 = VAR_17->a_fvp;
 struct vnode *VAR_20 = VAR_17->a_fdvp;
 struct vnode *VAR_21 = VAR_17->a_tvp;
 struct componentname *VAR_22 = VAR_17->a_tcnp;
 struct componentname *VAR_23 = VAR_17->a_fcnp;
 struct denode *VAR_24, *VAR_25, *VAR_26, *VAR_27;
 u_char VAR_28[12], VAR_29[11];
 u_long VAR_30, VAR_31;
 u_char VAR_32;
 int VAR_33 = 0, VAR_34 = 0;
 int VAR_35;
 u_long VAR_36, VAR_37;
 daddr_t VAR_38;
 struct msdosfsmount *VAR_39;
 struct direntry *VAR_40;
 struct buf *VAR_41;

 VAR_39 = FUNC_2(VAR_20->v_mount);
 if (VAR_19->v_mount != VAR_18->v_mount ||
     (VAR_21 && VAR_19->v_mount != VAR_21->v_mount)) {
  VAR_35 = VAR_6;
abortit:
  if (VAR_18 == VAR_21)
   FUNC_25(VAR_18);
  else
   FUNC_24(VAR_18);
  if (VAR_21)
   FUNC_24(VAR_21);
  FUNC_25(VAR_20);
  FUNC_25(VAR_19);
  return (VAR_35);
 }




 if (VAR_21 == VAR_19) {
  VAR_35 = 0;
  goto abortit;
 }

 VAR_35 = FUNC_23(VAR_19, VAR_9);
 if (VAR_35)
  goto abortit;
 VAR_26 = FUNC_5(VAR_20);
 VAR_24 = FUNC_5(VAR_19);







 if (VAR_24->de_Attributes & VAR_0) {



  if ((VAR_23->cn_namelen == 1 && VAR_23->cn_nameptr[0] == '.') ||
      VAR_26 == VAR_24 ||
      (VAR_23->cn_flags & VAR_8) ||
      (VAR_22->cn_flags & VAR_8) ||
      (VAR_24->de_flag & VAR_1)) {
   FUNC_4(VAR_19, 0);
   VAR_35 = VAR_2;
   goto abortit;
  }
  VAR_24->de_flag |= VAR_1;
  VAR_33++;
 }





 VAR_26 = FUNC_5(VAR_18);
 VAR_25 = VAR_21 ? FUNC_5(VAR_21) : ((void*)0);



 VAR_31 = VAR_26->de_fndoffset;
 VAR_32 = VAR_26->de_fndcnt;
 VAR_35 = FUNC_3(VAR_19, VAR_16, VAR_22->cn_cred, VAR_22->cn_thread);
 FUNC_4(VAR_19, 0);
 if (FUNC_5(VAR_20)->de_StartCluster != FUNC_5(VAR_18)->de_StartCluster)
  VAR_34 = 1;
 if (VAR_33 && VAR_34) {
  if (VAR_35)
   goto bad;
  if (VAR_25 != ((void*)0))
   FUNC_24(VAR_21);




  VAR_35 = FUNC_13(VAR_24, VAR_26);
  if (VAR_35)
   goto out;
  if ((VAR_22->cn_flags & VAR_15) == 0)
   FUNC_16("msdosfs_rename: lost to startdir");
  VAR_35 = FUNC_20(VAR_18, &VAR_21, VAR_22);
  if (VAR_35)
   goto out;
  VAR_26 = FUNC_5(VAR_18);
  VAR_25 = VAR_21 ? FUNC_5(VAR_21) : ((void*)0);
 }

 if (VAR_25 != ((void*)0)) {





  if (VAR_25->de_Attributes & VAR_0) {
   if (!FUNC_14(VAR_25)) {
    VAR_35 = VAR_5;
    goto bad;
   }
   if (!VAR_33) {
    VAR_35 = VAR_4;
    goto bad;
   }
   FUNC_9(VAR_18);
  } else if (VAR_33) {
   VAR_35 = VAR_3;
   goto bad;
  }
  VAR_35 = FUNC_21(VAR_26, VAR_25);
  if (VAR_35)
   goto bad;
  FUNC_24(VAR_21);
  VAR_25 = ((void*)0);
 }






 VAR_35 = FUNC_22(FUNC_5(VAR_18), VAR_22, VAR_28);
 if (VAR_35)
  goto abortit;





 VAR_23->cn_flags &= ~VAR_12;
 VAR_23->cn_flags |= VAR_11 | VAR_10;
 if ((VAR_23->cn_flags & VAR_15) == 0)
  FUNC_16("msdosfs_rename: lost from startdir");
 if (!VAR_34)
  FUNC_4(VAR_18, 0);
 if (FUNC_20(VAR_20, &VAR_19, VAR_23) == 0)
  FUNC_25(VAR_20);
 if (VAR_19 == ((void*)0)) {



  if (VAR_33)
   FUNC_16("rename: lost dir entry");
  if (VAR_34)
   FUNC_4(VAR_18, 0);
  FUNC_25(VAR_18);
  FUNC_25(VAR_17->a_fvp);
  return 0;
 }
 VAR_25 = FUNC_5(VAR_19);
 VAR_27 = FUNC_5(VAR_20);
 VAR_30 = VAR_27->de_fndoffset;
 if (VAR_25 != VAR_24) {
  if (VAR_33)
   FUNC_16("rename: lost dir entry");
  FUNC_4(VAR_19, 0);
  if (VAR_34)
   FUNC_4(VAR_20, 0);
  FUNC_25(VAR_17->a_fvp);
  VAR_25 = ((void*)0);
 } else {
  FUNC_25(VAR_19);
  VAR_25 = ((void*)0);
  FUNC_15(VAR_29, VAR_24->de_Name, 11);
  FUNC_15(VAR_24->de_Name, VAR_28, 11);
  VAR_26->de_fndoffset = VAR_31;
  VAR_26->de_fndcnt = VAR_32;
  VAR_35 = FUNC_11(VAR_24, VAR_26, (struct denode **)0, VAR_22);
  if (VAR_35) {
   FUNC_15(VAR_24->de_Name, VAR_29, 11);
   if (VAR_34)
    FUNC_4(VAR_20, 0);
   FUNC_4(VAR_19, 0);
   goto bad;
  }
  if ((VAR_24->de_Attributes & VAR_0) != 0)
   FUNC_15(VAR_24->de_Name, VAR_29, 11);
  VAR_24->de_refcnt++;
  VAR_27->de_fndoffset = VAR_30;
  VAR_35 = FUNC_21(VAR_27, VAR_24);
  if (VAR_35) {

   if (VAR_34)
    FUNC_4(VAR_20, 0);
   FUNC_4(VAR_19, 0);
   goto bad;
  }
  if (!VAR_33) {
   VAR_35 = FUNC_17(VAR_26, FUNC_12(VAR_39, VAR_31), 0,
           &VAR_24->de_dirclust, 0);
   if (VAR_35) {

    if (VAR_34)
     FUNC_4(VAR_20, 0);
    FUNC_4(VAR_19, 0);
    goto bad;
   }
   if (VAR_24->de_dirclust == VAR_13)
    VAR_24->de_diroffset = VAR_31;
   else
    VAR_24->de_diroffset = VAR_31 & VAR_39->pm_crbomask;
  }
  FUNC_19(VAR_24);
  if (VAR_34)
   FUNC_4(VAR_20, 0);
 }





 if (VAR_33 && VAR_34) {
  VAR_36 = VAR_24->de_StartCluster;
  if (VAR_36 == VAR_13) {

   FUNC_16("msdosfs_rename(): updating .. in root directory?");
  } else
   VAR_38 = FUNC_10(VAR_39, VAR_36);
  VAR_35 = FUNC_7(VAR_39->pm_devvp, VAR_38, VAR_39->pm_bpcluster,
         VAR_14, &VAR_41);
  if (VAR_35) {

   FUNC_4(VAR_19, 0);
   goto bad;
  }
  VAR_40 = (struct direntry *)VAR_41->b_data + 1;
  VAR_37 = VAR_26->de_StartCluster;
  if (FUNC_1(VAR_39) && VAR_37 == VAR_39->pm_rootdirblk)
   VAR_37 = VAR_13;
  FUNC_18(VAR_40->deStartCluster, VAR_37);
  if (FUNC_1(VAR_39))
   FUNC_18(VAR_40->deHighClust, VAR_37 >> 16);
  if (FUNC_0(VAR_19))
   FUNC_6(VAR_41);
  else if ((VAR_35 = FUNC_8(VAR_41)) != 0) {

   FUNC_4(VAR_19, 0);
   goto bad;
  }
 }
 FUNC_9(VAR_19);
 FUNC_4(VAR_19, 0);
bad:
 if (VAR_25)
  FUNC_24(VAR_21);
 FUNC_24(VAR_18);
out:
 VAR_24->de_flag &= ~VAR_1;
 FUNC_25(VAR_20);
 FUNC_25(VAR_19);
 return (VAR_35);

}
